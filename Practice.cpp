//#include "practice2.h"

/*#include <iostream>
using namespace std ;
class snobar{
private:
	char *name;
	int age;
public:
/*	 snobar(char *name2,int age2){
	 	name=name2;
	 	age=age2;
	 }
	 snobar(snobar &myobj){
	 	name=myobj.name;
	 	age=myobj.age;
	 }*/
	 
	/* void infoo(char *name2,int age2){
	 	name=name2;
	 	age=age2;
	 }
	 
	 void display(){
	 	cout<<"Name= "<<name<<"  Age=  "<<age<<endl;
	 }
	
};
int main(){
	char name[20]="snobar nazir";
	int age=22;

/*	snobar info1(name,age);
	snobar info2=info1;
	info2.display();*/
  	
  /*	snobar info[5];
  	for(int i=0;i<5;i++){
  		info[i].infoo(name,age);
  		info[i].display();
	  }

	
	return 0;
}*/
#include <iostream>
using namespace std;
class Date {
private:
    int *Day;
    int *Month;
    int *Year;

public:
    // Default constructor
    Date() {
        Day = new int(1);
        Month = new int(1);
        Year = new int(2000);
    }

    // Parameterized constructor with validation
    Date(int _day, int _month, int _year) {
        Year = new int(_year);
        
        if (_month >= 1 && _month <= 12) {
            Month = new int(_month);
        } 
		else {
            cout << "Invalid month value. Setting to default (1)." << endl;
            Month = new int(1);
        }
        
        if (_day >= 1 && _day <= 31) {
            Day = new int(_day);
        }
		 else {
            cout << "Invalid day value. Setting to default (1)." << endl;
            Day = new int(1);
        }
    }

    // Display function
    void display() {
        cout << "Date: " << *Day << "/" << *Month << "/" << *Year << endl;
    }

    // Destructor
    ~Date() {
        delete Day;
        delete Month;
        delete Year;
    }
};

int main() {
    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;

    // Input birthdate
    cout << "Enter your birthdate (day month year): ";
    cin >> birthDay >> birthMonth >> birthYear;

    // Input current date
    cout << "Enter the current date (day month year): ";
    cin >> currentDay >> currentMonth >> currentYear;

    // Create objects
    Date birthDateObj(birthDay, birthMonth, birthYear);
    Date currentDateObj(currentDay, currentMonth, currentYear);

    // Display dates
    cout << "Your birthdate: ";
    birthDateObj.display();

    cout << "Current date: ";
    currentDateObj.display();

    return 0;
}
