 #include <iostream>
using namespace std;


/*class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}*/
class employee{
	
	private :
		
		int salary;
	public:
	
	void setter(int s){
		salary=s;
	}
	
	int getter(){
		return salary;
	}	
		
};

int main(){
	employee myobj;
	myobj.setter(50000);
	cout<<myobj.getter()<<endl;
	return 0;
}




















