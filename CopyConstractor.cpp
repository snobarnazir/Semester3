#include <iostream>
using namespace std;

// declare a class
class Wall {
  private:
    double length;
    double height;

  public:

    // initialize variables with parameterized constructor
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(Wall &obj) {
      length = obj.length;
      height = obj.height;
    }
    


    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create an object of Wall class
  Wall wall1(10.5, 8.6);


  // copy contents of wall1 to wall2
  Wall wall2 = wall1;

  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}
*/
#include <iostream>
using namespace std;
class parent {
private:
	int lenght;
	int withd;
public :
	parent(){}
	parent(int l,int w){
		lenght=l;
		withd=w;
	}
	parent(parent &obj){
		lenght=obj.lenght;
		withd=obj.withd;
	}
	void display(){
		cout<<lenght<<endl;
		cout<<withd<<endl;
	}
	
};
int main(){
	parent obj(2,3);
	parent obj2=obj;
	obj2.display();
	
	return 0;
}



















