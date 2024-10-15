 /*#include <iostream>
using namespace std;
template <class T>
class Number {
   private:
    T num;
  public:
    Number(T n);  
    T getNum();
   
};
template <class T>
T Number<T>::getNum() {
    return num;
}
template <class T>
Number<T>::Number(T n) {
	num=n;
}


int main() {

    Number<int> numberInt(7);
    Number<double> numberDouble(7.7);

    cout << "Int Number = " << numberInt.getNum() << endl;
    cout << "Double Number = " << numberDouble.getNum() << endl;

    return 0;
}*/
#include <iostream>
using namespace std;
template <class snobar>
class addtition{
private:
	snobar num;
	snobar num2;
public:
	addtition(snobar num,snobar num2);
	snobar add();
		
	
};
template <class snobar>
addtition<snobar>::addtition(snobar num,snobar num2){
	this->num=num;
	this->num2=num2;
		
	}
template <class snobar>
snobar addtition<snobar>::add(){
	return num+num2;
}
int main(){
	addtition<int> obj(7,7);
	addtition<double> obj1(7.3,7.3);
	cout<<obj.add()<<endl;
	cout<<obj1.add()<<endl;
	return 0;
}


