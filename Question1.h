
#include<iostream>
using namespace std;
class Product{
	protected:
		char *name;
		float price;
		int quantity;
	public:
		Product(){}
		Product(char *name2,float price2,int quantity2);
	    ~Product();
		void nameset(char *name2);
		void priceset(float price2);
		void quantityset(int quantity2);
		char *nameget();
		float priceget();
		int quantityget();
	
};
 ///////////////////////////////////////End Of Product Class///////////////////////////////////////////////////////////////////////

class Electronics:public Product{
	private:
		char *brand;
		char *colour;
		char *size;
	public:
	Electronics(){}
	Electronics(char *brand2,char *colour2,char *size2,char *name2,float price2,int quantity2);
	~Electronics();
	void display();
	void coveragewarrenty();
	void ElectronicsInfo(); 
	void brandset(char  *brand2);
	void colourset(char   *colour2);
	void sizeset(char  *size2);
	char  *brandset();
	char  *colourset();
	char  *sizeset();
	

	float Electronicsprice(int num);

	
		 
}; 
 // /////////////////////////////////////End Of Electronics Class///////////////////////////////////////////////////////////////////////
 
class Clothing:public Product{
 	private:
		char *brand;
		char *colour;
		char *size;
	public:
	Clothing(){}
	Clothing(char *brand2,char *colour2,char *size2,char *name2,float price2,int quantity2);
	~Clothing();
	void display();
	void Clothinginfo();
	float Clothingprice(int num);
	void brandset(char  *brand2);
	void colourset(char   *colour2);
	void sizeset(char  *size2);
	char  *brandset();
	char  *colourset();
	char  *sizeset();
	
		
};
 ///////////////////////////////////////End Of Clothing Class///////////////////////////////////////////////////////////////////////

class Book:public Product {
	private:
		char *authorname;
		float ISBNnumber;
		
		
	public:
		Book(){}
		Book(char *authorname2,float ISBNnumber2,char *name,float price,int quantity);
		~Book();
		void bookinfo();
	    float Bookprice(int num);
	    void display();
};
 ///////////////////////////////////////End Of Book Class///////////////////////////////////////////////////////////////////////

class Customer {
	protected:
		char *name;
		char *email;
		char *address;
	public:
		Customer(){}
		Customer(char *name2,char *email2,char *address2);
	    ~Customer();
	    void nameset(char *name2);
	    void emailset(char *email2);
	    void addressset(char *address2);
	    char *nameget();
	    char *emailget();
	    char *addressget();
	    
};
 ///////////////////////////////////////End Of Customer Class///////////////////////////////////////////////////////////////////////

class RegularCustomer:public Customer{
	
	public:
		RegularCustomer(){}
		RegularCustomer(char *name,char *email,char *address):Customer(name,email,address){}
	    void RegularCustomerinfo();
	    void RegularCustomerdisplay();
};

 ///////////////////////////////////////End Of RegularCustomer Class///////////////////////////////////////////////////////////////////////

class PremiumCustomer:public Customer{
		public:
		PremiumCustomer(){}
		PremiumCustomer(char *name,char *email,char *address):Customer(name,email,address){}
		void PremiumCustomerinfo();
	    void PremiumCustomerdisplay();
};

class ShoppingCart{
	private:
		int item;
	
	
	
	public:
		void CustomerInfo();
		

};
 ///////////////////////////////////////End Of PremiumCustomer Class///////////////////////////////////////////////////////////////////////