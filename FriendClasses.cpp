#include <iostream>
using namespace std;
 
class CostCalculator;
 
class Rectangle
{
    private :
        int length;
        int width;
    public:
    	Rectangle(int a,int b){
    		length=a;
    		width=b;
		}
    	
        void setData(int len, int wid)
        { 
            length = len;
            width = wid; 
        }
 
        int getArea()
        {
            return length * width ;
        }
	
        friend class CostCalculator; //friend of class Rectangle
};
 
 
//friend class costCalculator can access private member of class Rectangle

class CostCalculator
{
    public :
    	void getlost();
        double getCost (Rectangle rect);
       
};
void CostCalculator::getlost(){
	
	 getCost(Rectangle rect) {
            double cost;
            cost = rect.length * rect.width * 5; 
            return cost;
        }
	
}

 
int main ()
{
    Rectangle floor(0,0);
    floor.setData(20,3);
    CostCalculator calc;
    cout << "Expense " << calc.getCost(floor) << endl;
    return 0;
}*/
#include <iostream>
using namespace std ;
class information;
class rectangle{
private:
	int len;
	int with;
public:
	rectangle(){}
	rectangle(int l,int w){
	len=l;
	with=w;
		
	}
	int getarea(){
		return len*with;
	}
	void display(){
		cout<<"I am a display function"<<getarea()<<endl;
	}
	friend class information;
};

class information{
	
	public:
		void dis(){
		rectangle rect(2,3);
		rect.display();	
		}
};
int main(){
	information obj;
	obj.dis();
}



















