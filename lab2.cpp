#include <iostream>
#include<string>
using namespace std;


class student{
private:
	int rollnumber;
	string name;
	string adress;
	float cgpa;
	double fee;
	int semester;
public:
	void setter1(int rollnumber6){
		rollnumber = rollnumber6;
     }
	int getter1(){
		return	rollnumber;
	}
	void setter2(string name6){
		name = name6;
	}
	string getter2(){
		return	name;
	}
	void setter3(string adress6){
		adress = adress6;
	}
	string getter3(){
		return	adress;
	}
	void setter4(float cgpa6){
		cgpa = cgpa6;
	}
	float getter4(){
		return cgpa;
	}
	void setter5(double fee6){
		fee = fee6;
	}
	double getter5(){
		return fee;
	}
	void setter6(int semester6){
		semester = semester6;
	}
	int getter6(){
		return semester;
	}
	void input(int roll, string name2, string adress2, float cgpa2, double fee2, int sem){
		rollnumber = roll;
		name = name2;
		adress = adress2;
		cgpa = cgpa2;
		fee=  fee2;
		semester = sem;
	}

	void display(){
		cout << "Student rollnumber= " << rollnumber << endl;
		cout << "Student name= " << name << endl;
		cout << "Student adress= " << adress << endl;
		cout << "Student cgpa= " << cgpa << endl;
		cout << "Student fee= " << fee << endl;
		cout << "Student semester= " << semester << endl;
	}

	float increasefee(){
		float fee3;
		fee3 = fee/100*7.5;
		fee3 = fee3 + fee;
		return fee3;
	}


};
int main(){
	int rollnumber5;
	cout << "Enter Student rollnumber= " << endl;
	cin >> rollnumber5;
	string name5;
	cout << "Enter Student name= " << endl;
	cin >> name5;
	string adress5;
	cout << "Enter Student adress= " << endl;
	cin >> adress5;
	float cgpa5;
	cout << "Enter Student cgpa= " << endl;
	cin >> cgpa5;
	double fee5;
	cout << "Enter Student fee= " << endl;
	cin >> fee5;
	int semester5;
	cout << "Enter Student semester= " << endl;
	cin >> semester5;
	student myboject;
	myboject.setter1(rollnumber5);
	myboject.setter2(name5);
	myboject.setter3(adress5);
	myboject.setter4(cgpa5);
	myboject.setter5(fee5);
	myboject.setter6(semester5);
	cout << "Student rollnumber= " << endl;
	cout<<myboject.getter1()<<endl;
	cout << "Student name= " << endl;
    cout<<myboject.getter2()<<endl;
	cout << "Student adress= " << endl;
    cout<<myboject.getter3()<<endl;
	cout << "Student cgpa= "  << endl;
    cout<<myboject.getter4()<<endl;
	cout << "Student fee= "  << endl;
    cout<<myboject.getter5()<<endl;
	cout << "Student semester= "  << endl;
    cout<<myboject.getter6()<<endl;



	//myboject.input(rollnumber5, name5, adress5, cgpa5, fee5, semester5 );
   // myboject.display();
	cout << "The increase in fee is=";
	float inc;
	inc=myboject.increasefee();
	cout << inc << endl;



	
	system("pause");
	return 0;
}