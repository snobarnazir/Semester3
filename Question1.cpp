#include "Question1.h"
fraction::fraction(int num, int den)
    {
        numerator = num;
        denominator = den;
    }
    
    
fraction fraction::operator +(fraction frac1 ){
    fraction result;
    result.numerator = (frac1.numerator * denominator) + (numerator * frac1.denominator);
    result.denominator = frac1.denominator * denominator;
    return result;
}

fraction fraction::operator -(fraction frac1 ){
    fraction result;
    result.numerator = (frac1.numerator * denominator) - (numerator * frac1.denominator);
    result.denominator = frac1.denominator * denominator;
    return result;
}

fraction fraction::operator *(fraction frac1 ){
    fraction result;
    result.numerator = frac1.numerator *numerator;
    result.denominator = frac1.denominator * denominator;
    return result;
}
fraction fraction::operator /(fraction frac1 ){
    fraction result;
    result.numerator = frac1.denominator *numerator;
    result.denominator = frac1.numerator * denominator;
    return result;
}

void fraction::display(){
	cout<<numerator<<"/"<<denominator<<endl;
}

 
int main ()
{
	  int num1, num2, deno1, deno2;
         cout << "Enter the numerator of the  fraction1: " <<endl;
         cin >> num1;
         cout << "Enter the denominator of the fraction1:  " <<endl;
         cin >> deno1;
         cout << "Enter the numerator of the  fraction2: " <<endl;
         cin >> num2;
         cout << "Enter the denominator of the second fraction2:  " <<endl;
         cin >> deno2;
         fraction obj1(num1,deno1);
         fraction obj2(num2,deno2);
         
         cout<<"Fraction 1:" ;
         obj1.display();
         cout<<"Fraction 2:";
         obj2.display();
         
         fraction  obj3=obj1+obj2;
         cout<<"The addition is:";
         obj3.display();
         
         
           obj3=obj1-obj2;
          cout<<"The subtraction is:";
         obj3.display();
         
        obj3=obj1*obj2;
        cout<<"The multiplication is:";
        obj3.display();
        
        obj3=obj1/obj2;
        cout<<"The division is :";
        obj3.display();
         
        return 0;                               
}
