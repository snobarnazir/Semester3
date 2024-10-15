#include <iostream>
using namespace std;
class student{
	private:
		string name;
		string rollnumber;
		int marks;
	public:
		void studentinfo(string name2,string rollnumber2,int marks2){
			name=name2;
			rollnumber=rollnumber2;
			marks=marks2;
			}
		void display(){
			cout<<"The name of student is= "<<name<<endl;
			cout<<"The rollnumber= "<<rollnumber<<endl;
			cout<<"And the marks are= "<<marks<<"  "<<endl;
		}
	
};


int main(){
	student myobj;
	myobj.studentinfo("Snobar Nazir","L1FF22BSCS0731",35);
	myobj.display();

       return 0;	
} */

//CLASS ACTIVITY

#include <iostream>
using namespace std;

class cupboard{
	private:
		int length;
		int width;
	public:
		void changelength(int len){
			length=len;
		}
		
		void changewidth(int with){
			width=with;
		}
		
		int getarea(){
			     return length*width;
			 
		}
		
		void display(){
			int number2=getarea();
			cout<<number2<<endl;
		}
		
};
int main(){
	
	cupboard mycupboard,parentcupboard,siblingcupboard;
	mycupboard.changelength(10);
	mycupboard.changewidth(10);
	
	int number=mycupboard.getarea();
	
	cout<<"My cupboard= "<<number<<endl;
	cout<<"My Parentcupboard= "<<number<<endl;
    cout<<"My Siblingscupboard= "<<number<<endl;
    
    cout<<"////////////////////////////////////////////////////////////////////////////////"<<endl;
	
	cout<<"My cupboard= ";
	mycupboard.display();
	
	cout<<"My Parentcupboard= ";
	parentcupboard.display();
	
	cout<<"My Siblingscupboard= ";
	siblingcupboard.display();
 

	
	
}

























