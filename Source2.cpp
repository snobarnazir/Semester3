#include "Header2.h"

  Person::Person(char *name2,int age2){
	name=name2;
	age=age2;

     }
   Person::Person(Person &obj) {
   	      name=  obj.name;
   	     age=  obj.age;
   	      
   }
   void Person::display(){
   	cout<<"name = "<<name<<endl;
	cout<<"age= "<<age<<endl;
   }



int main(){
        char name[20];
        int age;
        cout<<"Enter the name "<<endl;
        cin.getline(name,19);
        cout<<"Enter the age "<<endl;
        cin>>age;
        Person obj(name,age);
        Person obj2=obj;
        obj2.display();
	

    system("pause");
	return 0;
}
