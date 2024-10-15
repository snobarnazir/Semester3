#include <iostream>
#include <cstring>
using namespace std;

class Vehicle {
	private:
    char *make;
    char *model;
    int year;
public:
	~Vehicle(){
		delete []make;
		delete []model;
	}
	Vehicle(){
		year=0;
	}
    Vehicle(char* m, char* mo, int y) {
        make=new char[50];
		make=m;
		model=new char [50];
		model=mo;
		
        year = y;
    }

    virtual double calculateFuelEfficiency(){
        return 0.0;
    }

    char* getMake() {
        return make;
    }

    char* getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    void setMake(char* m) {
        delete []make;       
		make=new char[50];
		make=m;
    }

    void setModel(char* mo) {
        delete []model;       
		model=new char[50];
	    model= mo;
    }

    void setYear(int y) {
        year = y;
    }

    bool operator==(Vehicle other){
    	
    	bool x;
    	if(make==other.make&&model==other.model &&year == other.year){
    		x=1;
		}else{
			x=0;
		}
		return x;
    }

    Vehicle& operator=( Vehicle& other) {
          Vehicle temp;
          temp.make=other.make;
          temp.model=other.model;
          temp.year=other.year;
    return temp;
    }

    Vehicle& operator++() {
        
		Vehicle temp;
		temp.year++;
        return temp;
    }

friend ostream& operator<<(ostream&,Vehicle &v);

friend istream& operator>>(istream&,Vehicle &v);


};


ostream& operator<<(ostream& os,Vehicle &v) {
    os << "Make: " << v.make << endl;
	os<<"Model: " << v.model <<endl;
	os<< "Year: " << v.year<<endl;
    return os;
}
istream& operator>>(istream& is,Vehicle& v) {
    is>>v.make;
    is>>v.model;
    is >> v.year;
    return is;
}

class Car : public Vehicle {
	private:
    int numDoors;
    bool isConvertible;
public:
    Car(char* m,char* mo, int y, int n, bool is) : Vehicle(m, mo, y) {
        numDoors = n;
        isConvertible = is;
    }

    double calculateFuelEfficiency()  {
        return 0.0;
    }

    int getNumDoors()  {
        return numDoors;
    }

    bool getisConvertible(){
        return isConvertible;
    }

    void setNumDoors(int n) {
    numDoors = n;
    }

    void setConvertible(bool is) {
        isConvertible = is;
    }


};

class Truck : public Vehicle {
	private:
    double payloadCapacity;
    bool hasTrailer;
public:
    Truck(char* m,char* mo, int y, double p, bool ht) : Vehicle(m, mo, y) {
        payloadCapacity = p;
        hasTrailer = ht;
    }

    double calculateFuelEfficiency(){
        return 0.0;
    }

    double getPayloadCapacity()  {
        return payloadCapacity;
    }

    bool gethasTrailer() {
        return hasTrailer;
    }

    void setPayloadCapacity(double p) {
        payloadCapacity = p;
    }

    void setTrailer(bool ht) {
        hasTrailer = ht;
    }


};

class Bus : public Vehicle {
	private:
    int seatingCapacity;
    bool hasDoubleDecker;
public:
    Bus(char* m,char* mo, int y, int s, bool hd) : Vehicle(m, mo, y) {
        seatingCapacity = s;
        hasDoubleDecker = hd;
    }

    double calculateFuelEfficiency() {
        return 0.0;
    }

    int getSeatingCapacity(){
        return seatingCapacity;
    }

    bool gethasDoubleDecker()  {
        return hasDoubleDecker;
    }

    void setSeatingCapacity(int s) {
        seatingCapacity = s;
    }

    void setDoubleDecker(bool hd) {
        hasDoubleDecker = hd;
    }


};

int main() {
    Vehicle *vehicles[3];

    vehicles[0] = new Car("Toyota", "V8", 2021, 5, 1);
    vehicles[1] = new Truck("Ford", "F-150", 2018, 2.5, 1);
    vehicles[2] = new Bus("Toyota", "32 seater", 2020, 50, false);

    for (int i = 0; i < 3; i++) {
         cout<<*vehicles[i];
        cout << "Fuel Efficiency: " << vehicles[i]->calculateFuelEfficiency() << endl;
        cout << endl;
    }

    delete vehicles[0];
    delete vehicles[1];
    delete vehicles[2];

    return 0;
}