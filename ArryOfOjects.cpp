/*// C++ program to implement 
// the above approach
#include<iostream>
using namespace std;
 
class Employee
{
  int id;
  char name[30];
  public:
   
  // Declaration of function
  void getdata();
   
  // Declaration of function
  void putdata();
};
 
// Defining the function outside 
// the class
void Employee::getdata()
{ 
  cout << "Enter Id : ";
  cin >> id;
  cout << "Enter Name : ";
  cin >> name;
}
 
// Defining the function outside 
// the class
void Employee::putdata()
{
  cout << id << " ";
  cout << name << " ";
  cout << endl;
}
 
// Driver code
int main()
{
  // This is an array of objects having
  // maximum limit of 30 Employees
  int r;
  cin>>r;
  Employee emp[r]; 
  int n, i;
  //cout << "Enter Number of Employees - ";
  //cin >> n;
   
  // Accessing the function
  for(i = 0; i < r; i++) 
    emp[i].getdata();
   
  cout << "Employee Data - " << endl;
   
  // Accessing the function
  for(i = 0; i < r; i++) 
    emp[i].putdata();
}*/

#include <iostream>
using namespace std;
class parent{
	private:
		char name[30];
		int  id;
	public:
		void getdata();
		void setdata();
};
void parent::getdata(){
	cout<<"Enter the student id "<<endl;
	cin>>id;
	cin.ignore();
	cout<<"Enter the student name "<<endl;
	cin.getline(name,29);
}
void parent::setdata(){
	cout<<"student id "<<id<<endl;
    cout<<"student name "<<name<<endl;
	
}
int main(){
	int num;
	cout<<"enter the total number of student "<<endl;
	cin>>num;
	parent obj[num];
	
	for(int i=0;i<num;i++){
		obj[i].getdata();
	}
	for(int i=0;i<num;i++){
		obj[i].setdata();
	}
	
	
	
	
	
}





















