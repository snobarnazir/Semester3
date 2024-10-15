#include <iostream>
using namespace std;
#include "Header.h"
Employee::Employee(char *name2,char *employeeid2,char *city2){
	name=name2;
	employeeid=employeeid2;
	city=city2;
}
Employee::~Employee(){
	delete name;
	delete employeeid;
	delete city;
	
}
Employee::Employee(Employee &obj){
	name=obj.name;
	employeeid=obj.employeeid;
	city=obj.city;
	
}
Employee  Employee::operator ==(Employee obj){
	Employee temp;
	temp.name==obj.name;
	temp.employeeid==obj.employeeid;
	temp.city==obj.city;
	return temp;
}
void Employee::nameset(char *name2){
	name=name2;
}
void Employee::employeeidset(char *employeeid2){
	employeeid=employeeid2;
}
void Employee::cityset(char *city2){
	city=city2;
}
char *Employee::nameget(){
	return name;
}
char *Employee::employeeidget(){
	return employeeid;
}
char *Employee::cityget(){
	return city;
}
void Employee::display(){
	cout<<"Employee name:"<<name<<endl;
	cout<<"Employee employeeid:"<<employeeid<<endl;
	cout<<"Employee city:"<<city<<endl;
}

Department::Department(char *departmentName2,char *head2,int employees2){
	departmentName=departmentName2;
	head=head2;
	employees=employees2;
}
Department::~Department(){
	delete departmentName;
	delete head;
	
	
	
}
Department::Department(Department &obj){
	departmentName=obj.departmentName;
	head=obj.head;
	employees=obj.employees;
	
}
Department  Department::operator ==(Department obj){
	Department temp;
	temp.departmentName==obj.departmentName;
	temp.head==obj.head;
	temp.employees==obj.employees;
	return temp;
}
void Department::departmentNameset(char *departmentName2){
	departmentName=departmentName2;
}
void Department::headset(char *head2){
	head=head2;
}
void Department::employeesset(int employees2){
	employees=employees2;
}
char *Department::departmentNameget(){
	return departmentName;
}
char *Department::headget(){
	return head;
}
int Department::employeesget(){
	return employees;
}
void Department::display(){
	cout<<"Department departmentName:"<<departmentName<<endl;
	cout<<"Department head:"<<head<<endl;
	cout<<"Department employees:"<<employees<<endl;
}
int main(){
	char name1[20]="John";
	char employeeID1[20]="E001";
	char city1[20]="New York";
	Employee obj1(name1,employeeID1,city1); 
	char name2[20]="Jane ";
	char employeeID2[20]="E002 ";
	char city2[20]="Los Angeles";
	Employee obj2(name2,employeeID2,city2);
	char name3[20]="Jim ";
	char employeeID3[20]="E003 ";
	char city3[20]="Chicago";
	Employee obj3(name3,employeeID3,city3);	
	
	char departmentname[20]="ComputerScience";
	char head[20]="Dr. Smith";
	Department csDepartment(departmentname,head,3);
	cout<<"----------------------------Department details-------------------------------"<<endl;
	csDepartment.display();
	cout<<"----------------------------Employee1 details-------------------------------"<<endl;
    obj1.display();
	cout<<"----------------------------Employee2 details-------------------------------"<<endl;
    obj2.display();
	cout<<"----------------------------Employee3 details-------------------------------"<<endl;
	obj3.display();
	char departmentname1[20]="Math";
	char head1[20]="Dr. Jones";
	Department mathDepartment (departmentname1,head1,2);
	cout<<"----------------------------Department details-------------------------------"<<endl;
	mathDepartment.display();
	cout<<"----------------------------Employee1 details-------------------------------"<<endl;
    obj1.display();
	cout<<"----------------------------Employee2 details-------------------------------"<<endl;
    obj2.display();	
	cout<<"----------------------------After Deletion-------------------------------"<<endl;
   	obj1.~Employee();
   	obj1.display();
   	obj2.~Employee();
   	obj2.display();	
   	
	
	
	return 0;
}













