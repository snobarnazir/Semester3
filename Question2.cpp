//#include "Question2.h"


#include <iostream>
using namespace std;
class AL_Baraka {
	private:
		char *title;
		int account_number;
		char *account_type;
		double balance;
	public:
		AL_Baraka(char *title2,int account_number2,char *account_type2,double balance2);
		void display();
		void deposit();
		void withdraw();
};


	AL_Baraka::AL_Baraka(char *title2,int account_number2,char *account_type2,double balance2){
		    title=title2;
		    account_number=account_number2;
		    account_type=account_type2;
		    balance=balance2;
			
		}
		

	void AL_Baraka::display(){
		cout<<"-------------------------Your BankAccount Information------------------------------"<<endl;
		cout<<"Your name is           :"<<title<<endl;
		cout<<"Your account_number is :"<<account_number<<endl;
		cout<<"Your account_type is   :"<<account_type<<endl;
		cout<<"Your balance is        :"<<balance<<endl;
			
		}		
	void AL_Baraka::deposit(){
			double depositmoney;
			cout<<"Enter the money that you want to deposit :"<<endl;
			cin>>depositmoney;
			if(depositmoney>=0){
			cout<<"Amount deposited successfully:  "<<balance + depositmoney<<endl;	
			}
			else{
				cout<<"Your deposited money is not worth of adding ."<<endl;
			}
			
	    	}


	void AL_Baraka::withdraw(){
			double withdrawmoney;
			cout<<"Enter the money that you want to withdraw :"<<endl;
			cin>>withdrawmoney;
			
			
			   if(balance>withdrawmoney){
				cout<<"Withdrawal successfully:  "<<balance-withdrawmoney<<endl;
			}
		    
		    else{
				cout<<"You are broke and you do not have that much money "<<endl;
			}
			
		    }
	



int main(){
	    char title[50];
		int account_number;
		char account_type[50];
		double balance;
		char con='n';
		
		
		do{
			
		
			cout<<"Enter your name: "<<endl;
			cin.getline(title,49);
			cout<<"Enter account type: "<<endl;
            cin.getline(account_type,49);
            cout<<"Enter account number:  "<<endl;
			cin>>account_number;
			cout<<"Enter account balance: "<<endl;
			cin>>balance;

			
		if(balance>0){
			AL_Baraka myobj(title,account_number,account_type,balance);
			myobj.display();
			

			cout<<"Do you want to deposit any money y/n :"<<endl;
			cin>>con;
			if(con=='y'){
				myobj.deposit();	
			}
			

			cout<<"Do you want to withdraw any money y/n :"<<endl;
			cin>>con;
			if(con=='y'){
				myobj.withdraw();	
			}
        }
        

        else{
        	cout<<"Your balance is insufficient to carryout our service ."<<endl;
	    	}
        	
        	cout<<"Do you want to use our service once more y/n :"<<endl;
        	cin>>con;
			cin.ignore();
		}while(con=='y');
		
		cout<<"-------------------------------Thanks For Visiting Our Bank------------------------------"<<endl;
	
		
	
	return 0;
}
