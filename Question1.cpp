#include <iostream>
using namespace std;
class BOOKISSUE{
	protected:
		char *studentadm;
		int booknumber;
	public:
		int input();
		void studentadmset(char *studentadm2);
		char *studentadmget();
		void booknum(int booknumber);
		int booknum2();
		void booknum2(int booknumber2);
	
};
void BOOKISSUE::studentadmset(char *studentadm2){
	studentadm=studentadm2;
}
char *BOOKISSUE::studentadmget(){
	return studentadm;
	
}
void  BOOKISSUE::booknum2(int booknumber2){
		booknumber=booknumber2;
			}
int BOOKISSUE::booknum2(){
	return booknumber;
}
void BOOKISSUE::booknum(int booknumber){

	if(booknumber==1){
		cout<<"Book no. : b001 "<<endl;
		cout<<"Book Name : God Of Fury"<<endl;
		cout<<"Author Name : Rina Kent"<<endl; 
		
	}
		if(booknumber==2){
		cout<<"Book no. : b002 "<<endl;
		cout<<"Book Name : Haunting Adeline"<<endl;
		cout<<"Author Name : H.D.Cartlon"<<endl; 
		
	}
		if(booknumber==3){
		cout<<"Book no. : b003 "<<endl;
		cout<<"Book Name : Twisted Love"<<endl;
		cout<<"Author Name : Ana Huang"<<endl; 
		
	}
	
}
BOOKISSUE::input(){
	char san2[30];
	cout<<"Enter Student Admission Number :"<<endl;
	cin.getline(san2,29);
	studentadmset(san2);
	
	char con='y';
do{
	cout<<"Enter Book Number :"<<endl;
	cout<<"Here are the options for you from (1-3):"<<endl;
	cout<<"1.b001"<<endl;
	cout<<"2.b002"<<endl;
	cout<<"3.b003"<<endl;
	cin>>booknumber;
	if(booknumber>0&&booknumber<4){
	booknum(booknumber);
	booknum2(booknumber);
	cout<<"Book Issued Successfully"<<endl;
	cout<<"Please Note: Write the current date in backside of your book and submit within 1-5 days fine Rs.1 for each day after 15 days period."<<endl;
	}
	else{
		cout<<"Please enter the correct option number"<<endl;
	}
	cout<<"Do you want to try again to select a Book y/n"<<endl;
	cin>>con;
}while(con=='y');


		
	
}
 class BOOKDEPOSIT:public BOOKISSUE{
 	private:
 		char *studentadm;
 	public:
 		void deposit();
	
};
void BOOKDEPOSIT::deposit(){
	BOOKISSUE obj;
	char *studentaddmissinid;
	char *studentaddmissinid2=obj.studentadmget();
	
	char studentid[30];
	cout<<"Enter The student admission no. "<<endl;
	cin.getline(studentid,29);
	studentaddmissinid=studentid;
	cout<<studentaddmissinid<<endl;
	cout<<studentaddmissinid2<<endl;
	
	
/*	if(studentaddmissinid==studentaddmissinid2){
		int num=booknum2();
		booknum(num);
		
	}
	else{
	cout<<"Please enter you correct student admission no."<<endl;	
	}
	
	
*/	
}
class ADMINISTRATIONMENU{
	
};


 

int main(){
	int option;
	char condition='n';
do{
		cout<<"===================================LIBRARY MANAGEMENT SYSTEM======================================"<<endl;
	cout<<"MADE BY : SNOBAR NAZIR"<<endl;
	cout<<"UNIVERSITY OF CENTRAL PUNJAB"<<endl;
	cout<<"-------------------------------------MAIN MANUE----------------------------------------------------"<<endl;
	cout<<"01. BOOK ISSUE"<<endl;
	cout<<"02. BOOK DEPOSIT"<<endl;
	cout<<"03. ADMINISTRATION MENU"<<endl;
	cout<<"04. EXIT"<<endl;
	cout<<"Please Select Your Option  (1-4)"<<endl;
	cin>>option;
	cin.ignore();
	if(option>0&&option<5){
		if(option==1){
			BOOKISSUE obj;
			obj.input();
			
		}
		if(option==2){
			BOOKDEPOSIT obj;
			obj.deposit();
			
		}
		if(option==3){
			
		}
	
		
	}
	else{
		cout<<"We do not have any records for this student admission number"<<endl;
		
	}
		cout<<"Do you want to exit y/n"<<endl;
		cin>>condition;
		cin.ignore();
}while(condition=='n');
     cout<<"=========================================Thanks For Cooperating====================================="<<endl;

	
  return 0;	
}