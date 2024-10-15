//#include "practice2.h"


 data::data(int length2,int with2){
			length=length2;
			with=with2;
			
		}
data::data(data &obj){
			length=obj.length;
			with=obj.with;
		}
data::display(){
	cout<<length<<endl;
	cout<<with<<endl;
}
int main(){
	
	data my(2,3);
	data my2=my;
	my.display();
	my2.display();
*/

  ~data(){
        	delete length;
        	delete with;
		}
		*/	
	
//	return 0;
//}
#include <iostream>
using namespace std;
class student{
	private:
		char name[30];
		static int n;
		int rollnumber;
		double marks;
	public:
	    void setdata();
	    void display();
	
};
void student::setdata(){
			cout<<"Enter the name: "<<endl;
			cin.getline(name,29);
			cout<<"Enter the rollnumber: "<<endl;
			cin>>rollnumber;
			cout<<"Enter the marks: "<<endl;
			cin>>marks;
			cin.ignore();
			
		}
void student::display(){
			     n++;
				cout<<"Student : "<<n<<endl;
				cout<<"Student  name: "<<name<<endl;
				cout<<"Student  rollnumber: "<<rollnumber<<endl;
				cout<<"Student  marks: "<<marks<<endl;
				
			
		}

int student::n=0;

int main(){
	student obj[4];
	
	int n;
	cout<<"Enter the number of student :"<<endl;
	cin>>n;
	cin.ignore();
	
	for(int i=0;i<n;i++){
		obj[i].setdata();
		obj[i].display();
		
	}
	
	return 0;
	
}*/
#include <iostream>
using namespace std;

class rectangle{
	private:
		double len;
		double with;
	public:
	    void setdata(double len2,double with2);
	    void display();
		friend double getcost(rectangle);
		
};
void rectangle::setdata(double len2,double with2){
			len=len2;
			with=with2;
			
		}
void rectangle::display(){
			cout<<"The area is: "<<len*with<<endl;
		}
double getcost(rectangle rec){
	    double cost;
	    cost=rec.len*rec.with;
	    return cost;
}
int main(){
	rectangle obj;
	obj.setdata(5,10);
	obj.display();
	cout<<getcost(obj)<<endl;
	
	return 0;
}

#include <iostream>
using namespace std;

class student{
	private:
		char *name;
		int roll;
		double marks;
	public:
		student(char *name2,int roll2,double marks2);
		void info();
		void display();
		friend class data;
		friend void info2(student);
};
student::student(char *name2,int roll2,double marks2){
	name=name2;
	roll=roll2;
	marks=marks2;
}
void student::info(){
	cout<<"Enter the name "<<endl;
	cin.getline(name,19);
	cout<<"Enter the roll "<<endl;
	cin>>roll;
	cout<<"Enter the marks "<<endl;
	cin>>marks;
	cin.ignore();
}
void student::display(){
	cout<<" name "<<name<<endl;
	cout<<" roll "<<roll<<endl;
	cout<<" marks "<<marks<<endl;
}


class data{

	public :
		void display(student myobj){
		
		int j=1,m;
			
		cout<<"How many students are there "<<endl;
		cin>>m;
		cin.ignore();
		
		for(int i=0;i<m;i++){
		cout<<"Student "<<j<<endl;
			myobj.info();
			myobj.display();
			j++;
		}
	
	}
	
	
};
   int main(){
   	char name[20];
   	student myob(name,0,0);
   	data ob;
   	ob.display(myob);
   	
   	return 0;
   	
   	 }

*/
#include <iostream>
using namespace std;
class counter{
	private:
		int con;
	public:
		counter(){
			con=0;
		}
		void operator ++(){
			con=con+1;
		}
		void display(){
			cout<<"the value is "<<con<<endl;
		}
	
};
int main(){
	counter c;
	c.display();
	++c;
	c.display();
	++c;
	c.display();
	++c;
	c.display();
}*/
#include <iostream>
using namespace std;
class counter{
	private:
		int con;
	public:
		counter(){
			con=0;
		}
		void operator ++(int){
			con=con+1;
		}
		void display(){
			cout<<"the value is "<<con<<endl;
		}
	
};
int main(){
	counter c;
	c.display();
	c++;
	c.display();
	c++;
	c.display();
	c++;
	c.display();
}
*//*
#include <iostream>
using namespace std;
class snobar
{
	private:
		char name;
		int age;
	public:
		void setvalue(char name2,int fgf2);
	
		friend class snobar2;
			
	
};
void snobar::setvalue(char name2,int fgf2){
	name=name2;
	age=fgf2;
	cout<<name<<endl;
	cout<<age<<endl;
	
}
class snobar2{
	public:
		void show();
	
};
void snobar2::show(){
	snobar obj;
	obj.setvalue('t',1);
}	



int main(){
	snobar obj;
	char num='s';
	obj.setvalue(num,2);
	
	snobar2 obj2;
	obj2.show();
}+
*/
#include <iostream>
using namespace std;
class snobar{
	private :
		int a;
		int b;
		
	public:
		snobar(){
			a=0;
			b=0;
		}
		void set();
		void show();
		snobar operator +(snobar);
		
};
void snobar::set(){
	cin>>a;
	cin>>b;
}
void snobar::show(){
	cout<<a<<endl;
	cout<<b<<endl;
}
snobar snobar::operator +(snobar ob){
	snobar temp;
	temp.a=a+ob.a;
	temp.b=b+ob.b;
	return temp;
 	
	
}



int main(){
	snobar obj1,obj2,obj3;

		obj2.set();
		obj3.set();
	    obj1=obj2+obj3;
	    obj2.show();
		obj3.show();
		obj1.show();
	
	
	
	return 0;
}*/
/*#include <iostream>
using namespace std;
class snobar{
	private:
		char *name;
		int age;
		char *colour;
	public:
		snobar();
		~snobar();
		snobar(char *name2,int age2,char *colour2);
		snobar(snobar &obj);
		void display();
};
snobar::snobar(){
	name=nullptr;
	age=0;
	colour=nullptr;
}
  snobar::~snobar(){
	delete name;
	delete colour;
}
snobar::snobar(char *name2,int age2,char *colour2){
	name=name2;
	age=age2;
	colour=colour2;
}
snobar::snobar(snobar &obj){
	name=obj.name;
	age=obj.age;
	colour=obj.colour;
}
void snobar::display(){
	cout<<name<<endl;
	cout<<age<<endl;
	cout<<colour<<endl;
}
int main(){
	snobar obj("snobar",22,"black");
	obj.display();
	snobar obj2=obj;
	obj2.display();
	
	return 0;
	
}*/
/*#include <iostream>
using namespace std;
class student{
	private:
		static int num;
	public:
		student();
};
student::student(){
	num++;
	cout<<num<<endl;
}
int student::num=0;
int main (){
	student a,s,d,fg;
	
	return 0;
}*/
/*
#include <iostream>
using namespace std;
class operatoroverloading{
	private :
		int a;
		int b;
	public:
		operatoroverloading(int a2,int b2){
			a=a2;
			b=b2;
			
		}
		operatoroverloading operator -(operatoroverloading obj);
		void display();
		
};
operatoroverloading operatoroverloading:: operator -(operatoroverloading obj){
			operatoroverloading temp(0,0);
			temp.a=obj.a-a;
			temp.b=b-obj.b;
			return temp;
			
		}
void operatoroverloading::display(){
	cout<<a<<endl;
	cout<<b<<endl;
	
}		
int main(){
	operatoroverloading ob1(2,2);
	operatoroverloading ob2(4,2);
			operatoroverloading ob3=ob1-ob2;
	       ob3.display();
}


/*#include<iostream>
#include<string>
using namespace std;
class Employee {
  private:
  char * employeeName;
  int employeeID;
  int employeeSalary;
  int employeeLeave;
  public:
  void setEmployeeLeave(int leave);
  Employee();
  void setEmployeeName( char * name);
  void setEmployeeSalary(int salary);
  void setEmployeeID(int id);
  int getEmployeeSalary();
  int getEmployeeID();
  int getEmployeeLeave();
  char * getEmployeeName();
  void EmployeeData();
};
void Employee::setEmployeeLeave(int leave)
{
    employeeLeave = leave;
}
Employee::Employee()
{
    employeeName = nullptr;
    employeeID = 0;
    employeeSalary = 0;
}
void Employee::setEmployeeName(char * name)
{
    employeeName =  name;
}
void Employee::setEmployeeSalary(int salary)
{
    employeeSalary = salary;
}
void Employee::setEmployeeID(int id)
{
    employeeID = id;
}
int Employee::getEmployeeSalary()
{
    if (employeeLeave == 4){
        return employeeSalary*4;
    }else if(employeeLeave == 6){
        return employeeSalary*2;
    }else{
        return employeeSalary;
    }
}

int Employee::getEmployeeID()
{
    return employeeID;
}
int Employee::getEmployeeLeave()
{
    return employeeLeave;
}
char * Employee::getEmployeeName(){
    return employeeName;
}
void Employee::EmployeeData()
{
	char name3[30];
    cout<<"Enter Employee Name:";
    cin.getline(name3,29);
    cout<<endl;
    cout<<"Enter Employee ID:";
    cin>>employeeID;
    cout<<endl;
    cout<<"Enter Employee Leaves:";
    cin>>employeeLeave;
    cout<<endl;
    cout<<"Enter Employee Salary:";
    cin>>employeeSalary;
    cout<<endl;
    setEmployeeName(name3);
    setEmployeeSalary(employeeSalary);
    setEmployeeID(employeeID);
    setEmployeeLeave(employeeLeave);
}
int main()
{
    Employee Emp;
    Emp.EmployeeData();
    cout<<Emp.getEmployeeSalary()<<endl;
    return 0;
}*/
/*#include<bits/stdc++.h> 
using namespace std; 
class sentence 
{ 
    string str; 
public: 
    sentence() {} 
    sentence (string st) 
    { 
        str = st; 
    } 
    friend sentence operator+(sentence s1, sentence s2); 
    void show() 
    { 
        cout<<str<<endl; 
    } 
}; 
 
sentence operator+(sentence s1, sentence s2) 
{ 
    sentence s; 
    s.str = s1.str + s2.str; 
    return s; 
} 
 
int main() 
{ 
    sentence s1("Operator "); 
    sentence s2("Overloading"); 
    sentence s3 = s1 + s2; 
    s3.show(); 
    return 0; 
} 
*//*
#include<iostream> 
using namespace std; 
class sentence 
{ 
    string str; 
public: 
    sentence() {} 
    sentence (string st) 
    { 
        str = st; 
    } 
    sentence operator+( sentence s2); 
    void show() 
    { 
        cout<<str<<endl; 
    } 
}; 
 
sentence sentence::operator+( sentence s2) 
{ 
    sentence s; 
    s.str = str + s2.str; 
    return s; 
} 
 
int main() 
{ 
    sentence s1("Snobar "); 
    sentence s2("Nazir"); 
    sentence s3 = s1 + s2; 
    s3.show(); 
    return 0; 
} 

/*

#include <iostream>
using namespace std;
class sto{
private:
	string name;
public:
	sto(){	}
	sto(string name2);
	sto operator +(sto obj);
	void display();
};

sto::sto(string name2){
		name=name2;
	}
sto sto::operator +(sto obj){
	sto temp;
	temp.name=name+obj.name;
	return temp;
}
void sto::display(){
	cout<<name<<endl;
}


int main(){
	sto obj1("snobar");
	sto obj2("nazir");
	sto obj3=obj1+obj2;
	 obj3.display();
	 return 0;
	
}*/
/*#include <iostream>
using namespace std;
class a{
		string name;
public:


	a(string aa){
		name=aa;
		cout<<"Parent class"<<endl;
	}
	display(){
		cout<<"Name is "<<name<<endl;
	}
};
class b: public a{
	string name;
public:
	
	b(string aa):a(aa){
		name=aa;
			cout<<"Chiled class"<<endl;
	}
	
	
};
int main(){
	b obj("snobar");
	obj.display();
	
	return 0;
	
}*//*
#include <iostream>
using namespace std;

class a{
	public:
		a(){
			cout<<"class a constractor"<<endl;
		}
			~a(){
			cout<<"class a destructor"<<endl;
		}
};
class b:public a{
	public:
		b(){
			cout<<"class b constractor"<<endl;
		}
			~b(){
			cout<<"class b destructor"<<endl;
		}
};
int main(){
	b obj;
	return 0;
}*/

//ParameterizedConsEx1.cpp
/*#include <iostream>
using namespace std;
 
class base {
protected:
    int i;
 
public:
    base(int x) { 
        i=x; 
        cout << "Constructing base\n"; 
    }
    ~base() { cout << "Destructing base\n"; }
};
 
class derived: public base {
    int j;
public:
    // derived uses x; y is passed along to base.
    derived(int x, int y): base(y){ 
        j=x; 
        cout << "Constructing derived\n"; 
    }
     
    ~derived() { cout << "Destructing derived\n"; }
     
    void show() {
        cout<<i<< " " << j << "n"; 
    }
};
 
int main()
{
    derived ob(3, 4);
    ob.show(); // displays 4 3
    return 0;
}*/
#include <iostream>
using namespace std;
class parent{
	protected:
		int a,b;
	public:
		parent(int i,int j){
		cout<<"parent class"<<endl;
			a=i;
			b=j;
		}
	~parent(){
		cout<<"parent destructor"<<endl;
	}
};
class chiled{
	protected:
		int d,f;
	public:
		chiled(int d2,int f2){
			cout<<"chiled class"<<endl;
			d=d2;
			f=f2;
		}
		
		~chiled(){
			cout<<"chiled destructor"<<endl;
		}
	
};
class chiled2:public parent,public chiled{
	
	public:
		chiled2(int k,int l):parent(5,6),chiled(k,l){
			cout<<"chiled2 class"<<endl;
		}
		
		~chiled2(){
			cout<<"chiled2 destructor"<<endl;
		}
		void display(){
			cout<<a<<"  "<<b<<" "<<d<<"  "<<f<<"  "<<endl;
		}
};

int main(){
	chiled2 obj(3,4);
	obj.display();
	return 0;
}

































