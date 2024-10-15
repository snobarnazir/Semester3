#include<iostream>
using namespace std;

class Cents
{
  private:
  int a,b;

  public:
  Cents()
  {
	a=0;
	b=0;
  } 


  void setab()
  {
	cout<<"Enter a";
	cin>>a;
	cout<<"Enter b";
	cin>>b;
  }

  void showab()
  {
	cout<<"inside a is"<<a<<endl;
	cout<<"inside b is"<<b<<endl;


  }


  Cents operator +(Cents p)
  {
	 Cents temp;
	 temp.a=a+p.a;
	 temp.b=b+p.b;
	 return temp;
  }

};


main()
{
 Cents x,y,z;
 x.setab();
 y.setab();
 z=x+y;
 x.showab();
 y.showab();
 z.showab();
 return 0;

}