#include <iostream>
using namespace std;
class data{
	private:
		int length;
		int with;
	public:
		data(int length2,int with2);
		data(data &obj);
		display();
      
};