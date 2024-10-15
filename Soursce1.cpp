#include "Header1.h"

  MyClass::MyClass(int *rollnumber2, int age2){
	rollnumber=rollnumber2;
	age=age2;

     }
  MyClass::MyClass(MyClass &obj){
   	rollnumber=obj.rollnumber;
   	age=obj.age;
   	
   }
   void MyClass::setter1(int *rollnumber2){
   	rollnumber=rollnumber2;
   }
  /* int MyClass::getter1(){
   	return rollnumber;
   }*/
    void MyClass::setter2(int age2){
   	age=age2;
   }
   int MyClass::getter2(){
   	return age;
   }
 
   void MyClass::display(){
   	cout<<"rollnumber = "<<*rollnumber<<" age= "<<age<<endl;
   }
   MyClass::~MyClass(){
   	delete rollnumber;
   }



int main(){
        int roll;
        int age;
        cout<<"Enter the rollnumber"<<endl;
        cin>>roll;
        cout<<"Enter the age"<<endl;
        cin>>age;
        MyClass obj(&roll,age);
        MyClass obj2=obj;
        obj2.display();
	

    system("pause");
	return 0;
}
