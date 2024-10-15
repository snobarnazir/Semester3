#include <iostream>
using namespace std;
 
class Rectangle
{
    private :
        int length;
        int width;
    public:
	
        void setData(int len, int wid)
        { 
            length = len;
            width = wid; 
        }
 
        int getArea()
        {
            return length * width ;
        }
	
        friend double getCost(Rectangle); //friend of class Rectangle
       
};
 
//friend function getCost can access private member of class
double getCost (Rectangle rect)
{
  
    double cost;
    //cost = rect.getArea();
  
    cost=rect.length * rect.width * 5; 
      
    return cost;
}

 
int main ()
{
    Rectangle floor;
    floor.setData(20,3);
    cout << "Expense " <<getCost(floor) << endl;  //getcost is not 
   
    return 0;                                      //not associated                   //with any object of class floor
}


/*#include <iostream>
 
using namespace std;
 
class Box
{
  Private: 
   double width;
   friend void printWidth( Box box ); //friend function might be private it works
public:
   
   void setWidth( double wid );
};

// Member function definition
void Box::setWidth( double wid )
{
    width = wid;
}

// Note: printWidth() is not a member function of any class.
void printWidth( Box box )   // it has no association with class using ::
{
    Because printWidth() is a friend of Box, it can
    directly access any member of this class 
   cout << "Width of box : " << box.width <<endl;
}
 
// Main function for the program
int main( )
{
   Box box;
 
   // set box width without member function
   box.setWidth(10.0);
   
   // Use friend function to print the wdith.
   printWidth( box );
 
   return 0;
}
*/






















