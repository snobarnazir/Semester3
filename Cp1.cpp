#include <iostream>
using namespace std;

class author{
	
private:
	char *name;
	char *title;
	int num;
	
public:
	
	
	void setter1(char *authorname){
		name=authorname;
	}
	void setter2(char *booktitle){
           title=booktitle;
	}
	void setter3(int num2){
		num=num2;
	}
	
	
	
	char *getter1(){
		return name;
	}
	char *getter2(){
		return title;
	}
	int getter3(){
		return num;
	}
	
	
};
int main(){
	char name[50];
	    cout<<"Enter Authorname: "<<endl;
	    cin.getline(name,49);
	char title[50];
	    cout<<"Enter Bookname: "<<endl;
	    cin.getline(title,49);
	int num;
	    cout<<"Enter ISBN number: "<<endl;
	    cin>>num;
	    
	
	author myobj;
	myobj.setter1(name);
	myobj.setter2(title);
	myobj.setter3(num);
	
	cout<<"The author name is: "<<endl;
	cout<<myobj.getter1()<<endl;
	cout<<"The Book name is: "<<endl;
	cout<<myobj.getter2()<<endl;
	cout<<"The ISBN name is: "<<endl;
	cout<<myobj.getter3()<<endl;
	
	
	return 0;
}