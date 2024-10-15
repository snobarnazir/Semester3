#include <iostream>
using namespace std;
class student{
	private :
		char *name;  
	    char *registrationNo;    
	    char *city ;
	public:
		student(){	}	
	    student(char *name2,char *registrationNo2,char *city2){
	    	name=name2;
	    	registrationNo=registrationNo2;
	    	city=city2;
		}
		~student(){
			delete name;
			delete registrationNo;
			delete city;
		}
		student(student &obj){
			name=obj.name;
			registrationNo=obj.registrationNo;
			city=obj.city;
		}
		void nameset(char *name2){
			name=name2;
		}
		void registrationNoset(char *registrationNo2){
			registrationNo=registrationNo2;
		}
			void cityset(char *city2){
			city=city2;
		}
		char *nameget(){
			return name;
		}
		char *registrationNoget(){
			return registrationNo;
		}
		char *cityget(){
			return city;
		}
		void display1(){
			cout<<"Name :           "<<name<<endl;
			cout<<"RegistrationNo : "<<registrationNo<<endl;
			cout<<"City :           "<<city<<endl;
		}

};
class Instructor {
	private :
		char *name;   
	    char *education ;    
	    
	public:
		Instructor(){}
	    Instructor (char *name2,char *education2){
	    	name=name2;
	    	education =education2;
	    	
		}
		~Instructor (){
			delete name;
			delete education ;
			
		}
		Instructor (Instructor &obj){
			name=obj.name;
			education =obj.education;
		}
		void nameset(char *name2){
			name=name2;
		}
		void educationset(char *education2){
			education=education2;
		}
		
		char *nameget(){
			return name;
		}
		char *educationget(){
			return education;
		}
	
		void display2(){
			cout<<"Name :           "<<name<<endl;
			cout<<"education :      "<<education<<endl;
		
		}

};

class Course:public student, public Instructor{
	private :
		char *name;   
	    char *instractor ; 
		int studentsnum;   
	    
	public:
			Course(){	}
		Course(char *name2,char *registrationNo2,char *city2):student(name2,registrationNo2,city2){
				name=name2;
	    	
		}
		Course(	char *name3,char *instractor3):Instructor(name3,instractor3){	}
	  
		~Course  (){
			delete name;
			delete instractor ;
			
		}
		Course  (Course  &obj){
			name=obj.name;
			instractor =obj.instractor;
		 studentsnum=obj.studentsnum;
		}
		void nameset2(char name2[20]){
			name=name2;
		}
		void instractorset(char *instractor2){
			instractor=instractor2;
		}
			void studentsnumset(int studentsnum2){
			studentsnum=studentsnum2;
		}
		
		char *nameget2(){
			return name;
		}
		char *instractorget(){
			return instractor;
		}
		int studentsnumget(){
			return studentsnum;
		}
	
		void display(){
			cout<<"Name :           "<<name<<endl;
			cout<<"Instractor :      "<<instractor<<endl;
			cout<<"Studentsnum :      "<<studentsnum<<endl;
		
		}
	/*	void input2(){
		char name2[20];   
	    char instractor2[20] ;
	    int numberofstudent;
			cout<<"Course Name : "<<endl;
			cin.getline(name2,19);
			nameset2(name2);
			cout<<"Instractor Name : "<<endl;
			cin.getline(instractor2,19);
			instractorset(instractor2);
			cout<<"numberofstudent: "<<endl;
			cin>>numberofstudent;
			cin.ignore();
			
			cout<<"Course Name= "<<nameget2()<<endl;
			cout<<"Instractor Name= "<<instractorget()<<endl;
	cout<<"-------------------------------------------------------------------------------------------"<<endl;
			student obj;
			
			int j=1;
			if(numberofstudent<30){
						for(int i=0;i<numberofstudent;i++){
				char studentname[20];
				char registration[20];
				cout<<"Enter the studentname "<<j<<endl;
				cin.getline(studentname,19);
				
				cout<<"Enter the registration "<<j<<endl;
				cin.getline(registration,19);
				obj.nameset(studentname);
				obj.registrationNoset(registration);
				cout<<"Student Name=  "<<obj.nameget()<<endl;
			    cout<<"Registration Number= "<<obj.registrationNoget()<<endl;
			
				
				
				j++;
			}
			}
		else{
			cout<<"You cannot enter more than 30 Student."<<endl;
		}
	
		
		cout<<"-------------------------------------------------------------------------------------------"<<endl;
		}
*/
};
int main(){
	
      char  name1[20]="Ali";
      char  name2[20]="Ahmad";
      char  name3[20]="Ammar";
      
      char  registration1[20]="L1F1YBSCS1ABC";
	  char  registration2[20]="L1F1YBSCS2ABC";
	  char  registration3[20]="L1F1YBSCS3ABC";
	
	  char  city1[20]="Lahore";
	  char  city2[20]="Islamabad";
	  char  city3[20]="Lahore";
	  
	  char  teachername[20]="SAMRA ZAFAR";
	  char  education[20]="MPHIL";
	
	student obj1(name1,registration1,city1);
	student obj2(name2,registration2,city2);
	student obj3(name3,registration3,city3);
	
	Instructor obj4(teachername,education);
	
	Course  oopLabSecC41(name1,registration1,city1);
    Course	oopLabSecC42(name2,registration2,city2);
	Course  oopLabSecC43(name3,registration3,city3);
	Course  oopLabSecC44(teachername,education);
	
	oopLabSecC43.nameset2("OOPFall2023SecC4Lab");
	cout<<"Lab Name"<<oopLabSecC43.nameget2()<<endl;
	
	oopLabSecC44.display2();
	oopLabSecC41.display1();
	oopLabSecC42.display1();
	oopLabSecC43.display1();
	
	return 0;
	
}





