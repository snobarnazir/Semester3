#include<iostream>
using namespace std;

class ElectricityBill{
private:
        float unit;
        char *name;
    public:
    	ElectricityBill(char *name2,float units){
    		unit=units;
    		name=name2;
		}
       

void bill(){
       
        float bill=0;
        if(unit<=100){
        	bill=500+unit*40;
		}
		
		
        else if(unit>100 && unit<=300){
        	
                bill=500+100*40+(unit-100)*50;
				}
				
			
		 else if(unit>300){
        	bill=500+100*40+200*50+(unit-300)*60;
		}
		
               
        if(bill>250){
        	bill=(bill+(bill*(15/100)));
		}
		         cout<<"Name  = "<<name<<"\t"<<endl;
                cout<<"Units = "<<unit<<"\t"<<endl;
                cout<<"Bill  = "<<bill<<"\t"<<endl;
        
    }
};
int main()
{
	
    

        int customer;
        char name[50];
        float unit;
        char con='n';
     do{
     	
     	cout<<"Enter the Number of customers : "<<endl;
        cin>>customer;


        if(customer>=1){
        	
        for(int i=0; i<customer; i++){


        	int j=1;
        	cout<<"Customer no: "<<i+j<<endl;
        	
        	cin.ignore();
        	cout<<"Enter Name : "<<endl;
              cin.getline(name,49);
            cout<<"No. Of Units : "<<endl;
                cin>>unit;
                

                if(unit>=0){
            ElectricityBill	myobj(name,unit);
        	myobj.bill();
        }
        
		
		else{
        	cout<<"Please enter the correct units"<<endl;
		}
				}
       
		}
	else {
			cout<<"Please enter the correct customer number"<<endl;
		}
		cout<<"Do you want to continue y/n"<<endl;
		cin>>con;
	 } while(con=='y');  
      
      cout<<"-----------------------------Thanks for the corporation--------------------------------"<<endl;
        return 0;
}



