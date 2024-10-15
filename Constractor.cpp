 #include <iostream>
using namespace std;

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;                                                                                                                                                                                
   }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
  return 0;
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
               

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
  return 0;
}
*/
#include <iostream>
using namespace std;
 class myclass{
 	
 	public:
 		string brand;
 		string model;
 		int year;
 	myclass(string x,string y,int z);
 		
 };
 myclass::myclass(string x,string y,int z){
 		
 		brand=x;
 		model=y;
 		year=z;
	 }

int main(){
	myclass obj1("jhgku","ytri76",324);
	myclass obj2("jtj67t","3333333345",453);
	cout<<obj1.brand<<" "<<obj1.model<<"  "<<obj1.year<<endl;
	
	
	return 0;
}











