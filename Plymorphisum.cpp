/*#include <iostream>
using namespace std;
 

class GFG_Base {
 
public:
     
 
  virtual   void print(){
        cout << "Called GFG_Base print function"<<endl;
    }
};
 

class GFG_Child : public GFG_Base {
 
public:
    
 
    void print()
    {
        cout << "Called GFG_Child print Function"<<endl;
    }
};
 
int main()
{

    GFG_Base* base;
    
    GFG_Base base2;
    GFG_Child child;
    
    child.print();
    base2.print();
    base = &base2;
    base->print();
    
    base = &child;
    base->print();
}

2.*/
#include <bits/stdc++.h>
using namespace std;
 
class base {
public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }
 
    void show() { cout << "show base class" << endl; }
};
 
class derived : public base {
public:
    // print () is already virtual function in
    // derived class, we could also declared as
    // virtual void print () explicitly
    void print() { cout << "print derived class" << endl; }
 
    void show() { cout << "show derived class" << endl; }
};
 
// Driver code
int main()
{
    base *bptr;
    derived d;
    bptr = &d;
 
    // Virtual function, binded at
    // runtime (Runtime polymorphism)
    bptr->print();
 
    // Non-virtual function, binded
    // at compile time
    bptr->show();
 
    return 0;
}