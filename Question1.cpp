#include"Question1.h"

		
		

Driver::Driver(char *driver_name,char *driver_contact_Number,char *driver_address,char *driver_CNIC,int trips_completed,float driver_rating) {
	driver_name=nullptr;
	driver_contact_Number=nullptr;
	driver_address=nullptr;
	driver_CNIC=nullptr;
	trips_completed=0;
	driver_rating=0;
}
void Driver::driver_nameset(char *driver_name2){
	driver_name=driver_name2;
	
}
char *Driver::driver_nameget()const{
	return driver_name;
}

void Driver::driver_contact_Numberset(char *driver_contact_Number2){
	driver_contact_Number=driver_contact_Number2;
	
}
char *Driver::driver_contact_Numberget()const{
	return driver_contact_Number;
}

void Driver::driver_addressset(char *driver_address2){
	driver_address=driver_address2;
	
}
char *Driver::driver_addressget()const{
	return driver_address;
}

void Driver::driver_CNICset(char *driver_CNIC2){
	driver_CNIC=driver_CNIC2;
	
}
char *Driver::driver_CNICget()const{
	return driver_CNIC;
}


void Driver::trips_completedset(int trips_completed2){
	trips_completed=trips_completed2;
	
}
int Driver::trips_completedget()const{
	return trips_completed;
}


void Driver::driver_ratingset(float driver_rating2){
	driver_rating=driver_rating2;
	
}
float Driver::driver_ratingget()const{
	return driver_rating;
}

void Driver::Driver_info()const{
	
	cout<<"------------------------------------------Driver Information--------------------------------------------"<<endl;
	cout<<"Driver_name= "<<driver_name<<endl;
	cout<<"Driver_contact_Number= "<<"\t"<<driver_contact_Number<<endl;
	cout<<"Driver_address= "<<driver_address<<endl;
	cout<<"Driver_CNIC= "<<driver_CNIC<<endl;
	cout<<"Drips_completed= "<<trips_completed<<endl;
	cout<<"Driver_rating= "<<driver_rating<<endl;
	
	
}
 



Rider::Rider(char *rider_name,char *rider_contact,float  rider_rating, int   trips_cancelled) {
	rider_name=nullptr;
	rider_contact=nullptr;
	rider_rating=0;
	trips_cancelled=0;
}
void Rider::rider_nameset(char *rider_name2){
	rider_name=rider_name2;
	
}
char *Rider::rider_nameget()const{
	return rider_name;
}

void Rider::rider_contactset(char *rider_contact2){
	rider_contact=rider_contact2;
	
}
char *Rider::rider_contactget()const{
	return rider_contact;
}

void Rider::rider_ratingset(float rider_rating2){
	rider_rating=rider_rating2;
	
}
float Rider::rider_ratingget()const{
	return rider_rating;
}

void Rider::trips_cancelledset(int trips_cancelled2){
	trips_cancelled=trips_cancelled2;
	
}
int Rider::trips_cancelledget()const{
	return trips_cancelled;
}
void Rider::Rider_info()const{
	cout<<"------------------------------------------Rider Information--------------------------------------------"<<endl;
	cout<<"Rider_name= "<<rider_name<<endl;
	cout<<"Rider_contact= "<<rider_contact<<endl;
	cout<<"Rider_rating= "<<rider_rating<<endl;
	cout<<"Rrips_cancelled= "<<trips_cancelled<<endl;
}

Ride::Ride(char *pickup_location,char *destination,char *vehicle_number,int tracking_id,char *category,float	base_fare,
	     float per_km_charges,float per_min_charges,char *promo_code,float discount, string  start_time,string	arrival_time){
	     	
	pickup_location=nullptr;
    destination=nullptr;
	vehicle_number=nullptr;
    tracking_id=0;
    category=nullptr; 
    base_fare=0;
    per_km_charges=0; 
    per_min_charges=0; 
    promo_code=nullptr;
    discount=0;
    start_time="Null";
    arrival_time="Null";
	     	
		 }
void Ride::pickup_locationset(char *pickup_location2){
	pickup_location=pickup_location2;
}
void Ride::destinationset(char *destination2){
	destination=destination2;
}
void Ride::vehicle_numberset(char *vehicle_number2){
	vehicle_number=vehicle_number2;
}
void Ride::tracking_idset(int tracking_id2){
	tracking_id=tracking_id2;
}
void Ride::categoryset(char *category2){
	category=category2;
}
void Ride::base_fareset(float base_fare2){
	base_fare=base_fare2;
}
void Ride::per_km_chargesset(float per_km_charges2){
	per_km_charges=per_km_charges2;
}
void Ride::per_min_chargesset(float per_min_charges2){
	per_min_charges=per_min_charges2;
	
}
void Ride::promo_codeset(char *promo_code2){
	promo_code=promo_code2;
}
void Ride::discountset(float discount2){
	discount=discount2;
}
void Ride::start_timeset(string  start_time2){
	start_time=start_time2;
}
void Ride::arrival_timeset(string	arrival_time2){
	arrival_time=arrival_time2;
}
void Ride::Ride_info()const{
		

  
    
	
}

float Ride::calculateBill()const{
	
	float total=0;
	
	string name=category;
	if(name=="Bike"){
	float base_farer= 60;
	float per_minute_chargesr= 3.67;
	float per_km_chargesr= 6.17;

	per_minute_chargesr=per_minute_chargesr*per_min_charges;
	per_km_chargesr=per_km_chargesr*per_km_charges;
	total=base_farer+per_minute_chargesr+per_km_chargesr;
    }
    else if(name=="Auto"){
	float base_farer= 50.71;
	float per_minute_chargesr= 2.79;
	float per_km_chargesr= 12.09;

	per_minute_chargesr=per_minute_chargesr*per_min_charges;
	per_km_chargesr=per_km_chargesr*per_km_charges;
	total=base_farer+per_minute_chargesr+per_km_chargesr;
    }
    else if(name=="Mini"){
	float base_farer= 65;
	float per_minute_chargesr= 3.63;
	float per_km_chargesr=  8.13;

	per_minute_chargesr=per_minute_chargesr*per_min_charges;
	per_km_chargesr=per_km_chargesr*per_km_charges;
	total=base_farer+per_minute_chargesr+per_km_chargesr;
    }
	  else if(name=="Go"){
	float base_farer= 80;
	float per_minute_chargesr= 4.54;
	float per_km_chargesr= 10.16;

	per_minute_chargesr=per_minute_chargesr*per_min_charges;
	per_km_chargesr=per_km_chargesr*per_km_charges;
	total=base_farer+per_minute_chargesr+per_km_chargesr;
    }
     else if(name=="UberX"){
	float base_farer= 100;
	float per_minute_chargesr= 8.54;
	float per_km_chargesr= 15.16;

	per_minute_chargesr=per_minute_chargesr*per_min_charges;
	per_km_chargesr=per_km_chargesr*per_km_charges;
	total=base_farer+per_minute_chargesr+per_km_chargesr;
    }
   
	if(promo_code=="pk8976"){
		total=(total/100)*25;
			
		}
	
		return total;
	

	

	
	
}
float Ride::distance()const{
		float per_km_chargesr=0;
	
	string name=category;
	if(name=="Bike"){
    per_km_chargesr= 6.17;
	per_km_chargesr=per_km_chargesr*per_km_charges;
    }
    else if(name=="Auto"){
    per_km_chargesr= 12.09;
	per_km_chargesr=per_km_chargesr*per_km_charges;

    }
     else if(name=="Mini"){
     per_km_chargesr=  8.13;
     per_km_chargesr=per_km_chargesr*per_km_charges;

    }
	  else if(name=="Go"){


	 per_km_chargesr= 10.16;
     per_km_chargesr=per_km_chargesr*per_km_charges;

    }
     else if(name=="UberX"){
	 per_km_chargesr= 15.16;
    per_km_chargesr=per_km_chargesr*per_km_charges;

    }
    return per_km_chargesr;
	
}
float Ride::time()const{
		float per_minute_chargesr=0;
		
	string name=category;
	if(name=="Bike"){
     per_minute_chargesr= 3.67;
     per_minute_chargesr=per_minute_chargesr*per_min_charges;
	
    }
    else if(name=="Auto"){

	 per_minute_chargesr= 2.79;
     per_minute_chargesr=per_minute_chargesr*per_min_charges;

    }
    else if(name=="Mini"){

	 per_minute_chargesr= 3.63;
	per_minute_chargesr=per_minute_chargesr*per_min_charges;

    }
	  else if(name=="Go"){

	 per_minute_chargesr= 4.54;
     per_minute_chargesr=per_minute_chargesr*per_min_charges;
	
    }
     else if(name=="UberX"){
    per_minute_chargesr= 8.54;
    per_minute_chargesr=per_minute_chargesr*per_min_charges;

    }
}
void Ride::Driverset(Driver Driverobj){
	Driverobj.Driver_info();
		
	}
void Ride::Riderset(Rider Riderobj){
	Riderobj.Rider_info();
	
	}
void Ride::showTrip()const{
	
	
	
	 float bill=calculateBill();
	 float bill2=distance();
	 float bill3=time();
	 	
	string name=category;
	if(name=="Bike"||name=="Go"||name=="UberX"||name=="Mini"||name=="Auto"){
	 cout<<"-----------------------------------------------Ride Information-------------------------------"<<endl;
	 cout<<"The total fare is "<<bill<<endl;
	 cout<<"The Distance fare is "<<bill2<<endl;
	 cout<<"The Time fare is "<<bill3<<endl;
	}else{
		cout<<"You did not chose the write ride "<<endl;
	}
   

   	 
  
    
	
	}

 




 int main(){


	 
   	Driver  Driverobj(nullptr,nullptr,nullptr,nullptr,0,0);  	
   	char driver_name[40] ;
	char driver_contact_Number[40] ;
	char driver_address[40] ;
	char driver_CNIC[40] ;
	int   trips_completed ;
	float driver_rating ;
cout<<"------------------------------------------Give Driver Information--------------------------------------------"<<endl;
   	
   	cout<<"Enter driver_name= "<<endl;
   	cin.getline(driver_name,39);
   	cout<<"Enter driver_contact_Number= "<<endl;
   	cin.getline(driver_contact_Number,39);
   	cout<<"Enter driver_address= "<<endl;
   	cin.getline(driver_address,39);
   	cout<<"Enter driver_CNIC= "<<endl;
   	cin.getline(driver_CNIC,39);
   	cout<<"Enter trips_completed= "<<endl;
   	cin>>trips_completed;
   	cout<<"Enter driver_rating= "<<endl;
   	cin>>driver_rating;
   	cin.ignore();
   	
   	Driverobj.driver_nameset(driver_name);
   	Driverobj.driver_contact_Numberset(driver_contact_Number);
   	Driverobj.driver_addressset(driver_address);
   	Driverobj.driver_CNICset(driver_CNIC);
   	Driverobj.trips_completedset(trips_completed);
   	Driverobj.driver_ratingset(driver_rating);
	

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Rider RiderOBJ(nullptr,nullptr,0,0);   	
   	char rider_name[40];
    char rider_contact[40];
    float  rider_rating;
    int   trips_cancelled;
cout<<"------------------------------------------Give Rider Information--------------------------------------------"<<endl;
    
    cout<<"Enter rider_name= "<<endl;
   	cin.getline(rider_name,39);
   	cout<<"Enter rider_contact= "<<endl;
   	cin.getline(rider_contact,39);
   	cout<<"Enter rider_rating= "<<endl;
   	cin>>rider_rating;
   	cout<<"Enter trips_cancelled= "<<endl;
   	cin>>trips_cancelled;
   	cin.ignore();
   	
   
   	RiderOBJ.rider_nameset(rider_name);
   	RiderOBJ.rider_contactset(rider_contact);
   	RiderOBJ.rider_ratingset(rider_rating);
   	RiderOBJ.trips_cancelledset(trips_cancelled);
	

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   	

	char	pickup_location[40];
    char	destination[40];
	char    vehicle_number[40];
    int 	tracking_id;
    char	category[40]; 
    float	base_fare;
    float   per_km_charges; 
    float	per_min_charges; 
    char	promo_code[40];
    float	discount;
    string 	start_time;
    string	arrival_time;

  cout<<"------------------------------------------Give Ride Information--------------------------------------------"<<endl;    
    cout<<"Enter pickup_location= "<<endl;
   	cin.getline(pickup_location,39);
   	cout<<"Enter destination= "<<endl;
   	cin.getline(destination,39);
   	cout<<"Enter vehicle_number= "<<endl;
   	cin.getline(vehicle_number,39);
   	cout<<"Enter tracking_id= "<<endl;
   	cin>>tracking_id;
   	cin.ignore();
   	cout<<"----------------------Chose any ride And Enter Correct Spelling And Case-------------------------------"<<endl;
   	cout<<"1. Bike"<<endl;
   	cout<<"1. Auto"<<endl;
   	cout<<"1. Mini"<<endl;
   	cout<<"1. Go"<<endl;
   	cout<<"1. UberX"<<endl;
   	
   	cin.getline(category,39);
   	cout<<"Enter the Kilometer= "<<endl;
   	cin>>per_km_charges;
   	cout<<"Enter the minutes= "<<endl;
   	cin>>per_min_charges;
   	
   	cout<<"Enter promo_code= "<<endl;
   	cin.getline(promo_code,39);
   	cin.ignore();
   	cout<<"Enter start_time= "<<endl;
   	cin>>start_time;
   
   	cout<<"Enter arival_time= "<<endl;
   	cin>>arrival_time;
   	
   	Ride RideOBJ(nullptr,nullptr,nullptr,0,nullptr,0,0,0,nullptr,0,"Null","Null");
   	RideOBJ.pickup_locationset(pickup_location);
   	RideOBJ.destinationset(destination);
   	RideOBJ.vehicle_numberset(vehicle_number);
   	RideOBJ.tracking_idset(tracking_id);
   	RideOBJ.categoryset(category);
   	RideOBJ.per_km_chargesset(per_km_charges);
   	RideOBJ.per_min_chargesset(per_min_charges);
   	RideOBJ.start_timeset(start_time);
   	RideOBJ.arrival_timeset(arrival_time);
    cin.ignore();
    
  	Driverobj.Driver_info();
   RiderOBJ.Rider_info();
    RideOBJ.showTrip();
  
   	
   	
   	
   	
   	return 0;
   }



