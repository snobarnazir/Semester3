/*#include<iostream>
using namespace std;

   class Counter{
   	
  private:
          int cnt;

  public:

        Counter(){
      	cnt=0;
       } 


       void operator ++  (){
           	cnt=cnt+20;
           } 

        void show_count()
 {
  cout<<"Value inside cnt is "<<cnt<<endl;

 }

};
  int main()
           {

                 Counter c;        
                c.show_count();                 
				++c;                                          
                c.show_count();                      
                ++c;                                       
                c.show_count(); 
				return 0;       

}*/
#include <iostream>
using namespace std;
class counter{
	private:
		int count;
	public:
	counter(){
		count=0;
	}
	counter  operator ++(int){
	counter temp;	
		count=count+20;
	temp.count=count;
	return temp;
		
	}
	void display(){
		cout<<"The number is "<<count<<endl;
	}
};
int main(){
	counter obj;
	counter obj2;
	obj2.display();
	obj2=obj++;
	obj2.display();
	obj2=obj++;
	obj2.display();
	obj2=obj++;
	
	return 0;
	
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*#include<iostream.h>

class Counter
{
  private:

  int cnt;

  public:

  Counter()   //default constructor
  {
	cnt=0;
  }   // end of constructor



  void operator ++  (int)   // member function to overload postfix ++
  {
	cnt=cnt+1;
  } // end of member function to overload unary ++ operator

 void show_count()
 {
  cout<<"Value inside cnt is "<<cnt<<endl;

 }// end of show_count

};//end of class Counter
main()
{

Counter c;        //declaring an object of Counter Class 

c.show_count();  // it will show zero
c++;             // calls the function operator ++(), increment one ,inside cnt through overloaded operator ++
c.show_count();  // it will show one

c++;
c.show_count();  //it will show two

}*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*#include<iostream>

class Counter
{
  private:

  int cnt;

  public:

  Counter()   //default constructor
  {
	cnt=0;
  }   // end of constructor



  Counter operator ++  ()   // member function to overload ++
  {
	Counter temp;
	cnt=cnt+1;
	temp.cnt=cnt;
	return temp;
  } // end of member function to overload unary ++ operator

 void show_count()
 {
  cout<<"Value inside cnt is "<<cnt<<endl;

 }// end of show_count

};//end of class Counter
main()
{

Counter x,y,sum;
x.show_count();  // calling show_count() before performing  increment. shows 0
y.show_count();  // calling show_count() before performing  increment. shows 0
y=++x;           // increment one in 'x' an assigning its value to 'y'

x.show_count();  // after increment x have '1'
y.show_count();  // after increment y have '1'

}*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream.h>
#include<conio.h>

class Add
{
  private:
  int a,b;

 public:
  Add()
  {
	a=0;
	b=0;
  } //end of constructor


  void setab()
  {
	cout<<"Enter a";
	cin>>a;
	cout<<"Enter b";
	cin>>b;
  }//end of setab

  void showab()
  {
	cout<<"inside a is"<<a<<endl;
	cout<<"inside b is"<<b<<endl;


  }//end of showab


  Add operator +(Add p)
  {
	 Add temp;
	 temp.a=a+p.a;
	 temp.b=b+p.b;
	 return temp;
  }

};// end of class Add


main()
{
 Add x,y,z;
 x.setab();
 y.setab();
 z=x+y;
 x.showab();
 y.showab();
 z.showab();
 getch();

}//end of main*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class String
{
 private:
 char str[50];

 public:

 String()
 {
  str[0]='\0';

 }//end of constructor

 void setString()
 {
  cout<<"Enter String";
  gets(str);
 }

 void showString()
 {
  cout<<str<<endl;
 }

 int operator==(String s)
 {
  if(strlen(s.str)==strlen(str))
  {
  return 1;
  }
  else
  {
  return 0;
  }

 }


};
/*
main()
{
 String s1,s2;
 s1.setString();
 s2.setString();
 cout<<"Inside s1 is....="<<s1.showString();

 cout<<"Inside s2 is....="<<s2.showString();

 if(s1==s2)
 {
  cout<<"Both strings are equal"<<endl;
 }
 else
 {
 cout<<"Both strings are not equal"<<endl;

 }


}
*/



