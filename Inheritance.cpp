#include <iostream>
using namespace std;



class A{
public:
        A() {
            cout<<"i am constructor of base class"<<endl;
			 }
};  


class B: public A
{
public:
B(){
cout<<"i am constructor of derived class";
}

};
 int main()
{
        B obj_b;
        return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ParameterizedConsEx1.cpp
#include <iostream>
using namespace std;
 
class base {
protected:
    int i;
 
public:
    base(int x) { 
        i=x; 
        cout << "Constructing base\n"; 
    }
    ~base() { cout << "Destructing base\n"; }
};
 
class derived: public base {
    int j;
public:
    // derived uses x; y is passed along to base.
    derived(int x, int y): base(y){ 
        j=x; 
        cout << "Constructing derived\n"; 
    }
     
    ~derived() { cout << "Destructing derived\n"; }
     
    void show() {
        cout<<i<< " " << j << "n"; 
    }
};
 
int main()
{
    derived ob(3, 4);
    ob.show(); // displays 4 3
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ParameterizedConsEx2.cpp
#include <iostream>
using namespace std;
 
class Base1 {
protected:
    int i;
public:
    Base1(int x) { i=x; cout << "Constructing Base1n"; }
    ~Base1() { cout << "Destructing Base1\n"; }
};
 
class Base2 {
protected:
    int k;
public:
    Base2(int x) { k=x; cout<<"Constructing Base2n"; }
    ~Base2() { cout<<"Destructing Base2\n"; }
};
 
class Derived: public Base1, public Base2 {
    int j;
public:
    Derived(int x, int y, int z): Base1(y), Base2(z)
    { 
        j=x; cout<<"Constructing Derived\n"; 
    }
    ~Derived() { cout<<"Destructing Derived\n"; }
    void show() { cout<<"i="<<i<<",j="<<j<<",k="<<k <<"n"; 
    }
};
int main()
{
    Derived ob(3, 4, 5);
    ob.show(); // displays 4 3 5
    return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////
//ParameterizedConsEx3.cpp
#include <iostream>
using namespace std;
 
class Base1 {
protected:
    int i;
public:
    Base1(int x) { i=x; }
};
 
class Base2 {
protected:
    int j;
public:
    Base2(int x) { j=x; }
};
 
class Derived: public Base1, public Base2 {
public:
    /* Derived constructor uses no parameter,
    but still must be declared as taking them to
    pass them along to base classes.
    */
    Derived(int x, int y): Base1(x), Base2(y)
    { }
    void show(){ 
        cout <<"i+j="<<i+j<<"n"; 
    }
};
 
int main(){
    Derived ob(3, 4);
    ob.show();
}
//////////////////////////////////////////////////////////////////////////////////////////////////

class Rectangle
{
private :
    float length;
    float width;
public:
    Rectangle ()
    {
        length = 0;
        width = 0;
    }
    
    Rectangle (float len, float wid)
    { 
        length = len;
        width = wid; 
    }

    float area()
    {
        return length * width ;
    }
};

class Box : public Rectangle
{
private :
    float height;    
public:
    Box ()
    {
        height = 0;
    }

    Box (float len, float wid, float ht) : Rectangle(len, wid)
    {
        height = ht;
    }

    float volume()
    {
        return area() * height;
    }
};

int main ()
{
    Box bx;
    Box cx(4,8,5);
    cout << bx.volume() << endl;
    cout << cx.volume() << endl;
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class mother
{
public:
    void display ()
    {
        cout << "mother: display function\n";
    }
};

class daughter : public mother
{
public:
    void display ()
    {
        cout << "daughter: display function\n\n";
    }
};

int main ()
{
    daughter rita;
    rita.display();
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

class parent //parent class
{
    public:
    parent() //constructor
    {
        cout << "Parent class Constructor\n";
    }

    ~parent()//destructor
    {
        cout << "Parent class Destructor\n";
    }
};

class child : public parent//child class
{

    public:
    child() //constructor
    {
    cout << "Child class Constructor\n";
    }

    ~ child() //destructor
    {
    cout << "Child class Destructor\n";
    }
};

int main()
{
    //automatically executes both child and parent class
    //constructors and destructors because of inheritance
    child c;

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

class parent
{

    int x;
    public:

    // parameterized constructor
    parent(int i)
    {
        x = i;
        cout << "Parent class Parameterized Constructor\n";
    }
};

class child: public parent
{

    int y;
    public:

    // parameterized constructor
    child(int j) : parent(j)  //Explicitly calling
    {
        y = j;
        cout << "Child class Parameterized Constructor\n";
    }
};

int main()
{
    child c(10);

    return 0;
}