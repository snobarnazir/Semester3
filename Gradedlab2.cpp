#include "GradedLab.h"

 Library::Library(char *tile2,	char *name2,int year2,float ISBN2){
	   tile=tile2;
	  name=name2;
	  year=year2;
	  ISBN=ISBN2;
	
	}

	
void Library::getinputfromuser(){

       
		cout << "Enter the tile :" << endl;
		cin.getline(tile, 29);
		cout << "Enter the name :" << endl;
		cin.getline(name, 29);
		cout << "Enter the year :" << endl;
		cin>>year;
		cout << "Enter the ISBN:" << endl;
		cin>>ISBN;
		cin.ignore();
		
	
	

	}


void Library::display(){
	
		cout << "tile " << tile << endl;
		cout << "name " << name << endl;
		cout << "year " << year << endl;
		cout << "ISBN  " <<ISBN<< endl;
		
		

}



int main(){
	char tile[30];
	char name[30];
	int year=0;
	float ISBN=0;
	int n;
	
		Library myobt(tile,name,year,ISBN);

    	myobt.getinputfromuser();
    	
	    myobt.display();
	    
	    cout<<"How many times do you want to copy it "<<endl;
	    cin>>n;
	    cin.ignore();
	    int j=2;
	    for(int i=0;i<n;i++){
	    cout<<"Book "<<j<<endl;
	    Library myobt2=myobt;
	    myobt2.display();
	    j++;
	    	
		}
		

	
	
	

   
	return 0;
}
