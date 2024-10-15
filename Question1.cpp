
#include "Question1.h"

Product::Product(char *name2,float price2,int quantity2){
			name=name2;
			price=price2;
			quantity=quantity2;
		}
void Product::nameset(char *name2){
	name=name2;
}
void Product::priceset(float price2){
	price=price2;
}
void Product::quantityset(int quantity2){
	quantity=quantity2;
}	
char *Product::nameget(){
	return name;
}
float Product::priceget(){
	return price;
}
int Product::quantityget(){
	return quantity;
}
Product::~Product(){
	delete name;
	delete nameget();
	
}
///////////////////////////////////////End Of Product Class///////////////////////////////////////////////////////////////////////
		
Electronics::Electronics(char *brand2,char *colour2,char *size2,char *name2,float price2,int quantity2):Product(name2,price2,quantity2){
		brand=brand2;
		colour=colour2;
		size=size2;
	}
Electronics::~Electronics(){
	delete brand;
	delete colour;
	delete size;
}
void Electronics ::brandset(char  *brand2) {
	brand=brand2;
}
void Electronics::colourset(char   *colour2) {
		colour=colour2;
	}
void Electronics ::sizeset(char  *size2){
	size=size2;
}
char  *Electronics ::brandset(){
	return brand;
}
char  *Electronics ::colourset() {
	return colour;
}
char  *Electronics::sizeset(){
	return	size;
	}
void Electronics::coveragewarrenty(){
	char option='n';
	int year=0;
	double amount=0;
	
	cout<<"Do you want to see the warranty coverage y/n. "<<endl;
	cin>>option;
	cout<<"Enter the year for warrenty . "<<endl;
	cin>>year;
	
	if(option=='y'){

	
	if(year==1){
		amount=price*1;
		cout<<"You will get full warranty coverage"<<amount<<endl;
	}
		if(year==2){
		amount=price*0.5;
		cout<<"You will get full warranty coverage"<<amount<<endl;
	}
	else{
		cout<<"Your are out of warranty coverage "<<endl;
	}
	}
	else{
		cout<<"Thanks for chossing our website for shopping. "<<endl;
	}

	
	
}	
void Electronics::display(){
	cout<<"The Product Name : "<<name<<endl;
	cout<<"The Product Brand : "<<brand<<endl;
	cout<<"The Product Colour : "<<colour<<endl;
	cout<<"The Product Size : "<<size<<endl;
	cout<<"The Product Price : "<<price<<endl;
	cout<<"The Product Quantity: "<<quantity<<endl;
	coveragewarrenty();
}

float Electronics::Electronicsprice(int num){
		if(num==1){
		float name=5000;
		return name;
	}
		if(num==2){
		float name=25000;
		return name;
	}
		if(num==3){
		float name=7000;
		return name;
	}
		if(num==4){
		float name=15000;
		return name;
	}
}
void Electronics::ElectronicsInfo(){
	char Electronicsname[20];
	int  Electronicsnumber;
	char ElectronicsBrand[30];
	char ElectronicsColour[30];
	char ElectronicsSize[30];
	
	int ElectronicsQuantity;
	cout<<"We have following items :"<<endl;
	cout<<"1.Iron "<<endl;
	cout<<"2.Washingmachine "<<endl;
	cout<<"3.Fans "<<endl;
	cout<<"4.Watercooler "<<endl;
	cout<<"Enter Electronicsname: "<<endl;
	cin>>Electronicsname;
	cout<<"Enter Electronicsnumber: "<<endl;
	cin>>Electronicsnumber;
	cin.ignore();
	cout<<"Enter ElectronicsBrand: "<<endl;
	cin.getline(ElectronicsBrand,29);
	cout<<"Enter ElectronicsColour: "<<endl;
	cin.getline(ElectronicsColour,29);
	cout<<"Enter ElectronicsSize: "<<endl;
	cin.getline(ElectronicsSize,29);
	cout<<"Enter ElectronicsQuantity: "<<endl;
	
	cin>>ElectronicsQuantity;
		float ElectronicsPrice=0;
	 for(int i=0;i<ElectronicsQuantity;i++){
	 ElectronicsPrice=ElectronicsPrice+Electronicsprice(Electronicsnumber);
      }
		
	Electronics obj(ElectronicsBrand,ElectronicsColour,ElectronicsSize,Electronicsname,ElectronicsPrice,ElectronicsQuantity);
     obj.display();
		
	}	
///////////////////////////////////////End Of Electronics Class///////////////////////////////////////////////////////////////////////

Clothing::Clothing(char *brand2,char *colour2,char *size2,char *name2,float price2,int quantity2):Product(name2,price2,quantity2){
		brand=brand2;
		colour=colour2;
		size=size2;
	}
void Clothing::display(){
	cout<<"The Product Name : "<<name<<endl;
	cout<<"The Product Brand : "<<brand<<endl;
	cout<<"The Product Colour : "<<colour<<endl;
	cout<<"The Product Size : "<<size<<endl;
	cout<<"The Product Price : "<<price<<endl;
	cout<<"The Product Quantity: "<<quantity<<endl;
	
}
Clothing::~Clothing(){
	delete brand;
	delete colour;
	delete size;
}
void Clothing ::brandset(char  *brand2) {
	brand=brand2;
}
void Clothing::colourset(char   *colour2) {
		colour=colour2;
	}
void Clothing ::sizeset(char  *size2){
	size=size2;
}
char  *Clothing ::brandset(){
	return brand;
}
char  *Clothing ::colourset() {
	return colour;
}
char  *Clothing::sizeset(){
	return	size;
	}
float Clothing::Clothingprice(int num){
		if(num==1){
		float name=5000;
		return name;
	}
		if(num==2){
		float name=6000;
		return name;
	}
		if(num==3){
		float name=7000;
		return name;
	}
		if(num==4){
		float name=8000;
		return name;
	}
}
void Clothing::Clothinginfo(){
	char Gender[20];
	char Clothingbrand[20];
	char Clothingcolour[20];
	char Clothingsize[20];
	char Clothingstuff[20];
	int  Clothingquantity;
	float price=0;
    int num,num2;
	cout<<"We have following Clothing Stuff :"<<endl;
	cout<<"1.Linen "<<endl;
	cout<<"2.Cotton"<<endl;
	cout<<"3.Silk "<<endl;
	cout<<"4.Wool "<<endl;
	cout<<"Enter Stuff name: "<<endl;
	cin.getline(Clothingstuff,19);
	cout<<"Please enter the number of stuff:"<<endl;
	cin>>num;
	cout<<"Enter Gender: "<<endl;
	cout<<"1.Male "<<endl;
	cout<<"1.Female "<<endl;
	cin>>Gender;
	cout<<"Also enter the gender number: "<<endl;
	cin>>num2;
	cin.ignore();
	cout<<"Enter Clothingbrand: "<<endl;
	cin.getline(Clothingbrand,19);
	cout<<"Enter Clothingcolour: "<<endl;
	cin.getline(Clothingcolour,19);
	cout<<"Enter Clothingsize: "<<endl;
	cin.getline(Clothingsize,19);
	
	cout<<"Enter ClothingQuantity: "<<endl;
	cin>>Clothingquantity;
	
		float clothingPrice=0;
	 for(int i=0;i<Clothingquantity;i++){
	 clothingPrice=clothingPrice+Clothingprice(num);
      }
      if(num2==1){
      	clothingPrice=clothingPrice+500;
	  }
      
	Clothing	obj(Clothingbrand,Clothingcolour,Clothingsize,Clothingstuff,clothingPrice,Clothingquantity);
	obj.display();
		
	}
	





///////////////////////////////////////End Of Clothing Class///////////////////////////////////////////////////////////////////////	

Book::Book(char *authorname2,float ISBNnumber2,char *name,float price,int quantity):Product(name,price,quantity){
	authorname=authorname2;
	ISBNnumber=ISBNnumber2;
	}
Book::~Book(){
	delete authorname;
}
float Book::Bookprice(int num){
		if(num==1){
		float name=500;
		return name;
	}
		if(num==2){
		float name=600;
		return name;
	}
		if(num==3){
		float name=700;
		return name;
	}
		if(num==4){
		float name=800;
		return name;
	}
}
void Book::display(){
	cout<<"BookName :"<<name<<endl;
	cout<<"BookAuthor :"<<authorname<<endl;
	cout<<"BookISBN :"<<ISBNnumber<<endl;
	cout<<"BookQuantity :"<<quantity<<endl;
	cout<<"BookPrice: "<<price<<endl;
}
void Book::bookinfo(){
	char Bookname[30];
	char Bookauthor[30];
	float BookISBNnumber;
	
	int Numberofbooks;
	int num;
	char con='n';
	cout<<"We have books of following Authors: "<<endl;
	cout<<"1.HD Cartlon "<<endl;
	cout<<"2.Sarah J Mas "<<endl;
	cout<<"3.Rina Kent "<<endl;
	cout<<"4.Ana Haung "<<endl;
	cout<<"Enter Bookauthor: "<<endl;
	cin.getline(Bookauthor,29);
	cout<<"Also Enter Bookauthor number: "<<endl;
	cin>>num;
	cin.ignore();
	cout<<"Enter Bookname: "<<endl;
	cin.getline(Bookname,29);
    cout<<"Enter BookISBNnumber: "<<endl;
	cin>>BookISBNnumber;
	cout<<"Enter Numberofbooks: "<<endl;
	cin>>Numberofbooks;
	
		float BookPrice=0;
	 for(int i=0;i<Numberofbooks;i++){
	 BookPrice=BookPrice+Bookprice(num);
      }
       Book obj(Bookauthor,BookISBNnumber,Bookname,BookPrice,Numberofbooks);
       obj.display();



}
///////////////////////////////////////End Of Product Class///////////////////////////////////////////////////////////////////////


Customer::Customer(char *name2,char *email2,char *address2){
	name=name2;
	email=email2;
	address=address2;
}
Customer::~Customer(){
	delete name;
	delete email;
	delete address;
}
 void Customer::nameset(char *name2){
 	name=name2;
 }
 void Customer::emailset(char *email2){
 	email=email2;
 }
 void Customer::addressset(char *address2){
 	address=address2;
 }
 char *Customer::nameget(){
 	return name;
 }
 char *Customer::emailget(){
 	return email;
 }
 char *Customer::addressget(){
 	return address;
 }

 
 
 
 
 ///////////////////////////////////////End Of Product Class///////////////////////////////////////////////////////////////////////

 

void RegularCustomer::RegularCustomerdisplay(){
 	
 	cout<<"RegularCustomerName: "<<name<<endl;
 	cout<<"RegularCustomerEmail: "<<email<<endl;
 	cout<<"RegularCustomerAddress: "<<address<<endl;
 }
 void RegularCustomer::RegularCustomerinfo(){
 	char RegularCustomerName[30];
 	char RegularCustomerEmail[30];
 	char RegularCustomerAddress[30];
 	
 	cout<<"Enter RegularCustomerName: "<<endl;
 	cin.getline(RegularCustomerName,29);
 	cout<<"Enter RegularCustomerName: "<<endl;
 	cin.getline(RegularCustomerEmail,29);
 	cout<<"Enter RegularCustomerName: "<<endl;
 	cin.getline(RegularCustomerAddress,29);
 	RegularCustomer obj(RegularCustomerName,RegularCustomerEmail,RegularCustomerAddress);
 	obj.RegularCustomerdisplay();
 }
///////////////////////////////////////End Of Product Class///////////////////////////////////////////////////////////////////////


void PremiumCustomer::PremiumCustomerdisplay(){
 	
 	cout<<"PremiumCustomerName: "<<name<<endl;
 	cout<<"PremiumCustomerEmail: "<<email<<endl;
 	cout<<"PremiumCustomerAddress: "<<address<<endl;
 	cout<<"Congratulations you got your loyalty points."<<endl;

 }
 void PremiumCustomer::PremiumCustomerinfo(){
 	char PremiumCustomerName[30];
 	char PremiumCustomerEmail[30];
 	char PremiumCustomerAddress[30];
 	
 	cout<<"Enter PremiumCustomerName: "<<endl;
 	cin.getline(PremiumCustomerName,29);
 	cout<<"Enter PremiumCustomerEmail: "<<endl;
 	cin.getline(PremiumCustomerEmail,29);
 	cout<<"Enter PremiumCustomerAddress: "<<endl;
 	cin.getline(PremiumCustomerAddress,29);
 	
 	PremiumCustomer obj(PremiumCustomerName,PremiumCustomerEmail,PremiumCustomerAddress);
 	obj.PremiumCustomerdisplay();
 }
 ///////////////////////////////////////End Of Product Class///////////////////////////////////////////////////////////////////////

	
void ShoppingCart::CustomerInfo(){
	int num2;
	int item;
	char con='n';	
   
	cout<<"------------------------Welcome To RABONAS Online Shopping System-------------------------- "<<endl;
		cout<<"We have following item's to sell What would you like to buy ?"<<endl;
		do{
	cout<<"1.Electronics "<<endl;
	cout<<"2.Clothes "<<endl;
	cout<<"3.Books "<<endl;
	cout<<"Please enter the number of item :"<<endl;
	cin>>item;
	cin.ignore();
	if(item==1){
	Electronics obj;
	obj.ElectronicsInfo();             
	}
	if(item==2){
		Clothing obj2;
		obj2.Clothinginfo();
	}
	if(item==3){
		Book obj2;
		obj2.bookinfo();
	}
	else {
		cout<<"Please enter the correct number of item"<<endl;
	}
	cout<<"Do you want to try again y/n"<<endl;
	cin>>con;
	}while(con=='y');

	 do{
  
   cout<<"Please enter your CustomerNumber type "<<endl;
   cout<<"1.RegularCustomer"<<endl;
   cout<<"2.PremiumCustomer"<<endl;
   cin>>num2;
   cin.ignore();
   if(num2==1){
   	RegularCustomer obj;
   	obj.RegularCustomerinfo();
   	obj.RegularCustomerdisplay();
   }
    if(num2==2){
    PremiumCustomer obj;
   	obj.PremiumCustomerinfo();
   	obj.PremiumCustomerdisplay();
   }
   else {
   	cout<<"Enter the correct Customer number "<<endl;
   }
   	cout<<"Do you want to try again y/n"<<endl;
	cin>>con;
	}while(con=='y');
	
 

}
	
int main(){
	
	ShoppingCart obj;
	obj.CustomerInfo();
	
	cout<<"------------------------Thanks for shopping from  RABONAS Online Shopping System-------------------------- "<<endl;
	return 0;
}		
		
		
		
		
		