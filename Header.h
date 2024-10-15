#include <iostream>
using namespace std;

class Employee {
	private:
		char *name;
		char *employeeid;
		char *city;
	public:
	Employee(){}	
	Employee(char *name2,char *employeeid2,char *city2);
	~Employee();
	Employee(Employee &obj);
	Employee operator ==(Employee obj);
	void nameset(char *name2);
	void employeeidset(char *employeeid2);
	void cityset(char *city2);
	char *nameget();
	char *employeeidget();
	char *cityget();
	void display();
				
};
class Department {
	private:
		char *departmentName;
		char  *head ; 
		int   employees; 
	public:
		Department(){}
		Department(	char *departmentName2,char  *head2,int   employees2);
		~Department();
		Department(Department &obj);
		Department operator ==(Department obj);
	   
	    void departmentNameset(char *departmentName2);
	    void headset(char *head2);
	    void employeesset(int employees2);
     	char *departmentNameget();
    	char *headget();
	    int  employeesget();
    	void display();
		
};

