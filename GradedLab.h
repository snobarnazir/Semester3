#include <iostream>
using namespace std;
class Student{
private:
	char *name;
	int rollnumber;
	int numberofquizes;
	int *markobtained;
	int totalmarks;
public:
	    Student();
       	Student(char *name2, int age2, int numberofquizes2, int *markobtained2, int totalmarks2);
       	
    
       	void getinputfromuser();
        void inputmarks();
        void display();

};
