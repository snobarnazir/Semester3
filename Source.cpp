
#include <string>
#include"Header.h"

University::University(string departmentname2, int numberofproffessor2, int numberofstaffmembers2){

	departmentname = departmentname2;
	numberofproffessor = numberofproffessor2;
	numberofstaffmembers = numberofstaffmembers2;
}
void University::InfoaboutDepartmentdisplay(){

	cout << "The Department name:              " << departmentname << endl;
	cout << "Number of numberofproffessor:     " << numberofproffessor << endl;
	cout << "Number of numberofstaffmembers:   " << numberofstaffmembers << endl;


}

Departements::Departements(string professorname2, int professorage2, string professoreducation2, float professorsalary2){
	professorname = professorname2;
	professorage = professorage2;
	professoreducation = professoreducation2;
	professorsalary = professorsalary2;
}
void Departements::infodepartemnt(){
	cout << "How many departments are in university " << endl;
	cin >> numberofdepartement;
	int j = 1;
	for (int i = 0; i < numberofdepartement; i++){
		cout << "-----------------------------------------------------------------------------" << endl;
		cout << "Enter Departement  " << j << " Information " << endl;
		cout << "Name of department " << endl;
		cin >> departmentname;
		cout << "Number of proffessor " << endl;
		cin >> numberofproffessor;
		cout << "Number of staffmembers " << endl;
		cin >> numberofstaffmembers;
		j++;
		University obj(departmentname, numberofproffessor, numberofstaffmembers);
		obj.InfoaboutDepartmentdisplay();
		cout << "-----------------------------------------------------------------------------" << endl;
	}
}
void Departements::display(){
	cout << "professorname :" << professorname << endl;
	cout << "professorage :" << professorage << endl;
	cout << "professoreducation :" << professoreducation << endl;
	cout << "professorsalary :" << professorsalary << endl;
}

void professor::infoaboutprofessor(){
	cout << "==================================================================================" << endl;
	cout << "Enter number of proffessor " << endl;
	cin >> numberofprofessor;
	int j = 1;
	for (int i = 0; i < numberofprofessor; i++){
		cout << "-----------------------------------------------------------------------------" << endl;
		cout << "Professor " << j << endl;
		cout << "professorname " << endl;
		cin >> professorname;
		cout << "professorage " << endl;
		cin >> professorage;
		cout << "professoreducation " << endl;
		cin >> professoreducation;
		cout << "professorsalary " << endl;
		cin >> professorsalary;
		j++;
		Departements obj2(professorname, professorage, professoreducation, professorsalary);
		obj2.display();
		cout << "-----------------------------------------------------------------------------" << endl;
	}
}

int main(){
	
	Departements obj2;
	obj2.infodepartemnt();
	professor obj3;
	obj3.infoaboutprofessor();

	cout << "---------------------------------------------------------------------------------" << endl;
	

	system("pause");
	return 0;
	


}