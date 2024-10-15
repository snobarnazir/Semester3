#include <iostream>
using namespace std;

class Person{
private:
     char *name;
     int age;
public:
	 Person( char *name2, int age2);
	 Person(Person &obj);
	 void display();
	 

};
