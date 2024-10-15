#include <iostream>
using namespace std;
 class Acumulator
{
    private :
        int con=0;
    public:
	
        void add();
        friend void print(Acumulator); 
};
 class Acumulator2
{
    private :
        int con=0;
    public:
	
        void add();
        friend void print(Acumulator2); 
};