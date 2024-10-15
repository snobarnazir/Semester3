#include<iostream>
using namespace std;
template <typename T>
T sum(T num1,T num2){
	return num1+num2;
	
}
int main(){
	cout<<"Sum of Int type variables    ="<<sum(2,3)<<endl;
	cout<<"Sum of Double type variables ="<<sum(23.45,34.56)<<endl;
	cout<<"Sum of Float type variables  ="<<sum(222222,322222)<<endl;
	cout<<"Sum of Float type variables  ="<<sum('a','s')<<endl;

	return 0;
}