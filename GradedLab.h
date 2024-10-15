#include <iostream>
using namespace std;
class Library{
private:
	char *tile;
	char *name;
	int year;
	float ISBN;
	

public:
	    
       	Library(char *tile2,char *name2,int year2,float ISBN2);
       	void getinputfromuser();
        
        void display();

};
