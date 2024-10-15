/*#include<iostream>
class Student
{
private:
int a;

public:

Student()  //constructor member function, it will execute automatically when object will                   
                 //be created
{
cout<<"object of class Student is created"<<endl;
//initialize data members here

}//end of constructor Student

};//end of class Student


void main()
{
Student s1,s2,s3;  // three times constructor function will be called.

}//end of main

#include<iostream.h>

class Hello
{
private:
int x,y;

public:

Hello() //constructor function
{
 cout<<"I am constructor of Hello Class"<<endl;
 x=10;
 y=10;
} //end of member function Hello

void show_sum()
{
 int sum;

 cout<<"Value inside x is"<<x<<endl;
 cout<<"Value inside y is"<<y<<endl;
 sum=x+y;
 cout<<"Sum of Two integers is "<<sum<<endl;

}//end of show_sum member function
};//end of class Hello

void main()
{
 Hello h1;
 h1.show_sum(); // 20

 Hello h2;
 h2.show_sum(); //20

}//end  of main
*/
#include <iostream>
using namespace std;
class parent{
	public:
		parent(){
			cout<<"constractor"<<endl;
		}
		void display(){
			cout<<"I am in between"<<endl;
		}
		~parent(){
			cout<<"destractor"<<endl;
		}
};
int main(){
	parent obj;
	obj.display();
	return 0;
}




































