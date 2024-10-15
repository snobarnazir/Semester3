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
		
		