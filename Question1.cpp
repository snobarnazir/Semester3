#include "Question1.h"

void Acumulator::add(){
	++con;
}

void print(Acumulator rect)
{
        
        cout<<"The value of con varibla :"<<rect.con<<endl;
 
}

void Acumulator2::add(){
	++con;
}
 

void print(Acumulator2 rect)
{
        
        cout<<"The value of con varibla :"<<rect.con<<endl;
 
}
 
int main ()
{
    Acumulator floor;
    floor.add();
    cout<<"This is friend function of Acumulator class . "<<endl;
    print(floor); 
	Acumulator2 floor2;
    floor2.add();
    cout<<"This is same friend function but for Acumulator2 class. "<<endl;
    print(floor2); 
    return 0;                                    
}
