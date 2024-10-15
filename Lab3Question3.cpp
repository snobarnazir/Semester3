#include <iostream>
using namespace std;
class circle{

private:
	double radius;
	double pl=3.14;
public:
	circle(){
	radius=0.0;	
	}
	circle(double circleradius){
	}
	
	void setradius(double circleradius2){
    	radius=circleradius2;
	}
	double getradius(){
         return	radius;
	}
	double getareaa(){
		double area;
		area=radius*pl;
		return area;
	}
	
	double getdiameter(){
		double diameter;
		diameter=radius*2;
		return diameter;
	}
	double getcircumferance(){
		double circum;
		circum=2*radius*pl;
		return circum;
	}
	
};

int main(){
	double radius;
	cout<<"Enter the radius: "<<endl;
	cin>>radius;
	
	circle myobj;
	myobj.setradius(radius);
	
	cout<<"The radius is: "<<endl;
	cout<<myobj.getradius()<<endl;
	cout<<"The Area is: "<<endl;
	cout<<myobj.getareaa()<<endl;
	cout<<"The Diameter is: "<<endl;
	cout<<myobj.getdiameter()<<endl;
	cout<<"The Circumferance is: "<<endl;
	cout<<myobj.getcircumferance()<<endl;
	
	return 0;
}
















