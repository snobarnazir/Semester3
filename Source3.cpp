#include "Header3.h"

  Rectangle::Rectangle(double length2,double width2){
	length=length2;
	width=width2;

     }
 
   void Rectangle::display(){
   	cout<<"length = "<<length<<" width= "<<width<<endl;
   }



int main(){
        double length;
        double width;
        cout<<"Enter the length of Rectangle"<<endl;
        cin>>length;
        cout<<"Enter the width of Rectangle"<<endl;
        cin>>width;
        Rectangle obj(length,width);
        Rectangle obj2=obj;
        obj2.display();
	

    system("pause");
	return 0;
}
