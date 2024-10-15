#include <iostream>
using namespace std;

class MyClass{
private:
     int *rollnumber;
     int age;
public:
	  MyClass(int *rollnumber2, int age2);
	  MyClass(MyClass &obj);
	  void setter1(int *rollnumber2);
	  int getter1();
	  void setter2(int age);
	  int getter2();
	  ~MyClass();
	  void display();
	 

};
