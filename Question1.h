#include <iostream>
using namespace std;

class Driver{
private:
	char *driver_name ;
	char *driver_contact_Number ;
	char *driver_address ;
	char *driver_CNIC ;
	int   trips_completed ;
	float driver_rating ;
public:
	 Driver(char *driver_name,char *driver_contact_Number,char *driver_address,char *driver_CNIC,int trips_completed,float driver_rating);
	
    void driver_nameset(char *driver_name2);
    char *driver_nameget()const;
    
    void driver_contact_Numberset(char *driver_contact_Number2);
    char *driver_contact_Numberget()const;
    
    void driver_addressset(char *driver_address2);
    char *driver_addressget()const;
    
    void driver_CNICset(char *driver_CNIC2);
    char *driver_CNICget()const;
    
    void trips_completedset(int trips_completed2);
    int trips_completedget()const;
    
    void driver_ratingset(float driver_rating);
    float driver_ratingget()const;
    
    
    void Driver_info()const;
     friend class Ride;
   };
class Rider{
private:
	char *rider_name;
    char *rider_contact;
    float  rider_rating;
    int   trips_cancelled;
public:
    Rider(char *rider_name,char *rider_contact,float  rider_rating, int   trips_cancelled);
	
    void rider_nameset(char *rider_name2);
    char *rider_nameget()const;
    void rider_contactset(char *rider_contact2);
    char *rider_contactget()const;
    void rider_ratingset(float rider_rating2);
    float rider_ratingget()const;
    void trips_cancelledset(int trips_cancelled2);
    int trips_cancelledget()const;
    void Rider_info()const;
    
    friend class Ride;
};


class Ride{
	
private:
		

	char	*pickup_location;
    char	*destination;
	char    *vehicle_number;
    int 	tracking_id;
    char	*category; //(provided below)
    float	base_fare;
    float   per_km_charges; //(float, provided below)
    float	per_min_charges; // (float, provided below)
    char	*promo_code;
    float	discount;
    string 	start_time;// (preferably string that stores the time in 24hr clock e.g 1620 for 4:20PM)
    string	arrival_time;// (preferably string that stores the time in 24hr clock e.g 1658 for 4:58PM)

	
public:
	Ride(char *pickup_location,char *destination,char *vehicle_number,int tracking_id,char *category,float	base_fare,
	     float per_km_charges,float per_min_charges,char *promo_code,float discount, string  start_time,string	arrival_time);
	void  pickup_locationset(char *pickup_location2);  
	void  destinationset(char *destination2);
    void  vehicle_numberset(char *vehicle_number2); 
	void  tracking_idset(int tracking_id2);
	void  categoryset(char *category2);
	void  base_fareset(float	base_fare2);
	void  per_km_chargesset(float per_km_charges2);
	void  per_min_chargesset(float per_min_charges2);
	void  promo_codeset(char *promo_code2);
	void  discountset(float discount2);
	void  start_timeset(string  start_time);
	void  arrival_timeset(string	arrival_time2);
	float calculateBill()const;
	void Driverset(Driver); 
	void Riderset(Rider);
	void showTrip()const; 
	float distance()const;
	void Ride_info()const;
	float time()const;

	
 
};		
		