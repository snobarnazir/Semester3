/*#include <iostream>
#include<string.h>
using namespace std;

class Tech{
    public:
      int house;
      string city, state;
   Tech(int house_no, string city, string state)
      { this->house = house_no;
        this->city = city;
        this->state = state;
      }

};
class Person{
	
    private:
       Tech* address;
    public:
     string name;
     Person(string name, Tech* address){
      this->name = name;
      this->address = address;
}
void display()
{
cout<< name<< " "<< " "<< address->house<<" "<<address->city<< " "<<address->state<<endl;
}
};
int main(void) {
     Tech add1= Tech(112 ,"Bandra","Mumbai");
     Tech add2 = Tech(222, "Jahanpanah","New Delhi");
     Person p1 = Person("Raj",&add1);
     Person p2 = Person("John",&add2);
     cout << "Name of the Person" << " and " << "Address"<< endl<<endl;
     p1.display();
     p2.display();
return 0;
}*/
#include <iostream>
using namespace std;
class info{
	public:
		int age;
		string city;
		string adress;
	info(int age,string city,string adress){
		this->age=age;
		this->city=city;
		this->adress=adress;
	}	
	
};
class person{
	public:
		info *obj;
		string name;
	person(string name,info *obj){
		this->name=name;
		this->obj=obj;
	}
	void display(){
		cout<<"Name"<<name<<endl;
		cout<<"Age"<<obj->age<<endl;
		cout<<"City"<<obj->city<<endl;
		cout<<"Adress"<<obj->adress<<endl;
	}	
};
int main(){
	info obj1(22,"pakistan","KRK");
	info obj2(22,"pakistan","Lahore");
	person obj3("snoabr",&obj1);
	person obj4("snoabr",&obj2);
	obj3.display();
	obj4.display();
	return 0;
	
}
















