#include <iostream>
using namespace std;
class fraction{
	private:
	 int numerator;
    int denominator;
   
	public:
		fraction(){};
		fraction(int num, int den);
		fraction operator +(fraction obj1);
		fraction operator -(fraction obj2);
		fraction operator /(fraction obj3);
		fraction operator *(fraction obj4);
	    void display();
};
