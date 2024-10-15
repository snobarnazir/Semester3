#include <iostream>
using namespace std;
/*
class parent{
	public :
	void virtual print()=0;
};
class child:public parent {
	public :
	void print ( ){
			cout<<"baby"<<endl;
		}
};
int main(){
	parent *obj;
	child  obj2;
	obj=&obj2;
	obj->print();
	return 0;
}*/
class parent{
	private:
		int age=22;
	public:
		void virtual  print ()=0;
};
class chiled:public parent{
	public:
		void print(){
			cout<<"baby"<<endl;
		}
};
int main(){
	parent *obj;
	chiled obj2;
	obj=&obj2;
	obj->print();
	return 0;
}








