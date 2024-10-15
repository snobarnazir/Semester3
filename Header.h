#include <iostream>
using namespace std;
#include <string>



class University{
private:

	string departmentname;
	int numberofproffessor;
	int numberofstaffmembers;


public:
	University(){}
	University(string departmentname2, int numberofproffessor2, int numberofstaffmembers2);
	void InfoaboutDepartmentdisplay();

};
class Departements {

private:
	int numberofdepartement;

	string departmentname;
	int numberofproffessor;
	int numberofstaffmembers;

	string professorname;
	int professorage;
	string professoreducation;
	float professorsalary;
public:
	Departements(){}
	Departements(string professorname2, int professorage2, string professoreducation2, float professorsalary2);
	void infodepartemnt();
	void display();


};

class professor{
private:
	string professorname;
	int professorage;
	string professoreducation;
	float professorsalary;
	int numberofprofessor;
public:
	void infoaboutprofessor();





};