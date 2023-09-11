//Nityay Kherde 
//batch 2 
//Roll No. 53

#include<iostream>
using namespace std;

class FlightRecord{
	protected:
	string flight_name;
	int flight_id;
	int luggage_capacity;
	string Arrival_time;
	string flight_departure_time;
	string flight_class;
	public:
		virtual void displaydetail(){
		}
		friend class FlightManager;
	
};
class VIPFlight:public FlightRecord{
	string vip_category;
	string vip_flight;
	public:
		VIPFlight(string name,int i,int cap,string atime,string deptime,string fclass,string vipcat,string vipfli)
		{
			flight_name=name;
			flight_id=i;
			luggage_capacity=cap;
		    Arrival_time=atime;
		    flight_departure_time=deptime;
			flight_class=fclass;
			vip_category=vipcat;
			vip_flight=vipfli;
		}
		void displaydetail()
		{
			cout<<"Your Flight name is "<<flight_name<<endl;
			cout<<"Your Flight id is "<<flight_id<<endl;
			cout<<"Your Luggage capacity is "<<luggage_capacity<<endl;
		    cout<<"Your Flight Arrival time is "<<Arrival_time<<endl;
		    cout<<"Your Flight Departure time is "<<flight_departure_time<<endl;
			cout<<"Your Flight Class is "<<flight_class<<endl;
			cout<<"Your vip category is "<<vip_category<<endl;
			cout<<"Your flight  is "<<vip_flight<<endl;
		}
		friend class FlightManager;
		
};
class VVIPFlight:public FlightRecord{
	string vvip_category;
	string vvip_flight;
	public:
		VVIPFlight(string name,int i,int cap,string atime,string deptime,string fclass,string vvipcat,string vvipfli)
		{
			flight_name=name;
			flight_id=i;
			luggage_capacity=cap;
		    Arrival_time=atime;
		    flight_departure_time=deptime;
			flight_class=fclass;
			vvip_category=vvipcat;
			vvip_flight=vvipfli;
			
		}
		void displaydetail()
		{
			cout<<"Your Flight name is "<<flight_name<<endl;
			cout<<"Your Flight id is "<<flight_id<<endl;
			cout<<"Your Lagguage capacity is "<<luggage_capacity<<endl;
		    cout<<"Your Flight Arrival time is "<<Arrival_time<<endl;
		    cout<<"Your Flight Departure time is "<<flight_departure_time<<endl;
			cout<<"Your Flight Class is "<<flight_class<<endl;
			cout<<"Your vip category is "<<vvip_category<<endl;
			cout<<"Your flight  is "<<vvip_flight<<endl;
		}
		friend class FlightManager;
	
};
class PublicFlight:public FlightRecord{
	string pub_category;
	string pub_flight;
	public:
		PublicFlight(string name,int i,int cap,string atime,string deptime,string fclass,string vvipcat,string vvipfli)
		{
			flight_name=name;
			flight_id=i;
			luggage_capacity=cap;
		    Arrival_time=atime;
		    flight_departure_time=deptime;
			flight_class=fclass;
			pub_category=vvipcat;
			pub_flight=vvipfli;
			
		}
		void displaydetail()
		{
			cout<<"Your Flight name is "<<flight_name<<endl;
			cout<<"Your Flight id is "<<flight_id<<endl;
			cout<<"Your Luggage capacity is "<<luggage_capacity<<endl;
		    cout<<"Your Flight Arrival time is "<<Arrival_time<<endl;
		    cout<<"Your Flight Departure time is "<<flight_departure_time<<endl;
			cout<<"Your Flight Class is "<<flight_class<<endl;
			cout<<"Your vip category is "<<pub_category<<endl;
			cout<<"Your flight  is "<<pub_flight<<endl;
		}
	friend class FlightManager;
};
class FlightManager
{ 	private:
	  int numFlights;
    FlightRecord** flights;  
	public:
	void UpdateAtVip( int index,FlightRecord* vipptr[]) {
        string name, fclass, category, atime, dtime;
        int id, cap;

        cout << "Enter Flight name: ";
        cin >> name;
        cout << "Enter Flight id: ";
        cin >> id;
        cout << "Enter Flight capacity: ";
        cin >> cap;
        cout << "Enter Flight class: ";
        cin >> fclass;
        cout << "Enter VIP category: ";
        cin >> category;
        cout << "Enter arrival time: ";
        cin >> atime;
        cout << "Enter departure time: ";
        cin >> dtime;

        VIPFlight* vipFlight = new VIPFlight(name, id, cap, atime, dtime, fclass, category, "");
        vipptr[index] = vipFlight;

        cout << "Flight inserted successfully in VIP category." << endl;
	}
	void UpdateAtVVip( int index,FlightRecord* vvipptr[])
	{
        string name, fclass, category, atime, dtime;
        int id, cap;

        cout << "Enter Flight name: ";
        cin >> name;
        cout << "Enter Flight id: ";
        cin >> id;
        cout << "Enter Flight capacity: ";
        cin >> cap;
        cout << "Enter Flight class: ";
        cin >> fclass;
        cout << "Enter VIP category: ";
        cin >> category;
        cout << "Enter arrival time: ";
        cin >> atime;
        cout << "Enter departure time: ";
        cin >> dtime;

        VIPFlight* vvipFlight = new VIPFlight(name, id, cap, atime, dtime, fclass, category, "");
        vvipptr[index] = vvipFlight;

        cout << "Flight inserted successfully in VVIP category." << endl;
	}
	void UpdateAtPublic( int index,FlightRecord* pubptr[]) 
	{
        string name, fclass, category, atime, dtime;
        int id, cap;

        cout << "Enter Flight name: ";
        cin >> name;
        cout << "Enter Flight id: ";
        cin >> id;
        cout << "Enter Flight capacity: ";
        cin >> cap;
        cout << "Enter Flight class: ";
        cin >> fclass;
        cout << "Enter VIP category: ";
        cin >> category;
        cout << "Enter arrival time: ";
        cin >> atime;
        cout << "Enter departure time: ";
        cin >> dtime;

        VIPFlight* PubFlight = new VIPFlight(name, id, cap, atime, dtime, fclass, category, "");
        pubptr[index] = PubFlight;

        cout << "Flight inserted successfully in VVIP category." << endl;
	}
	void InsertAtVip(FlightRecord* vipptr[], int& numFlights) 
	{
        if (numFlights >= 10) {
            cout << "Cannot insert more flights. The list is full." << endl;
            return;
        }
        string name, fclass, category, atime, dtime;
        int id, cap;

        cout << "Enter Flight name:  ";
        cin >> name;
        cout << "Enter Flight id: ";
        cin >> id;
        cout << "Enter Flight capacity: ";
        cin >> cap;
        cout << "Enter Flight class: ";
        cin >> fclass;
        cout << "Enter VIP category: ";
        cin >> category;
        cout << "Enter arrival time: ";
        cin >> atime;
        cout << "Enter departure time: ";
        cin >> dtime;

        VIPFlight* vipFlight = new VIPFlight(name, id, cap, atime, dtime, fclass, category, "");
        vipptr[numFlights] = vipFlight;
        numFlights++;

        cout << "Flight inserted successfully in VIP category." << endl;
        
    }
	 void InsertAtVVip(FlightRecord* vvipptr[], int& numFlights) 
	 {
	 	if (numFlights >= 10) {
            cout << "Cannot insert more flights. The list is full." << endl;
            return;
        }
        string name, fclass, category, atime, dtime;
        int id, cap;

        cout << "Enter Flight name: ";
        cin >> name;
        cout << "Enter Flight id: ";
        cin >> id;
        cout << "Enter Flight capacity: ";
        cin >> cap;
        cout << "Enter Flight class: ";
        cin >> fclass;
        cout << "Enter VVIP category: ";
        cin >> category;
        cout << "Enter arrival time: ";
        cin >> atime;
        cout << "Enter departure time: ";
        cin >> dtime;

        VVIPFlight* vvipFlight = new VVIPFlight(name, id, cap, atime, dtime, fclass, category, "");
       vvipptr[numFlights] = vvipFlight;
       numFlights++;
        cout << "Flight inserted successfully in VVIP category." << endl;
    }

    void InsertAtpublic(FlightRecord* pubptr[], int& numFlights) 
	{
    	if (numFlights >= 10) {
        cout << "Cannot insert more flights. The list is full." << endl;
        return;
        }
        string name, fclass, category, atime, dtime;
        int id, cap;

        cout << "Enter Flight name: ";
        cin >> name;
        cout << "Enter Flight id: ";
        cin >> id;
        cout << "Enter Flight capacity: ";
        cin >> cap;
        cout << "Enter Flight class: ";
        cin >> fclass;
        cout << "Enter Public category: ";
        cin >> category;
        cout << "Enter arrival time: ";
        cin >> atime;
        cout << "Enter departure time: ";
        cin >> dtime;

        PublicFlight* pubFlight = new PublicFlight(name, id, cap, atime, dtime, fclass, category, "");
        pubptr[numFlights] = pubFlight;
		numFlights++;
        cout << "Flight inserted successfully in Public category." << endl;
	}
    void DeleteVipFlight(FlightRecord* vipptr[],int index, int numFlights)
	{
    if (index < 0 || index >= numFlights)
	{
        cout << "Invalid index. Flight not found." << endl;
        return;
    }

    if (vipptr[index] != NULL)
	{
        delete vipptr[index];
        vipptr[index] = NULL;

        for (int i = index; i < numFlights - 1; i++)
		{
            vipptr[i] = vipptr[i + 1];
        }

        vipptr[numFlights - 1] = NULL;

        cout << "Flight deleted successfully from VIP category." << endl;
    } else {
        cout << "No VIP Flight found at index " << index << "." << endl;
    }
}
    void DeleteVVipFlight(FlightRecord* vvipptr[],int index, int numFlights){
    if (index < 0 || index >= numFlights)
	{
        cout << "Invalid index. Flight not found." << endl;
        return;
    }

    if (vvipptr[index] != NULL)
	{
        delete vvipptr[index];
        vvipptr[index] = NULL;

        for (int i = index; i < numFlights - 1; i++)
		{
            vvipptr[i] = vvipptr[i + 1];
        }

        vvipptr[numFlights - 1] = NULL;

        cout << "Flight deleted successfully from VVIP category." << endl;
    } else {
        cout << "No VVIP Flight found at index " << index << "." << endl;
    }
}
	void DeletePublicFlight(FlightRecord* pubptr[],int index, int numFlights){
    if (index < 0 || index >= numFlights) {
        cout << "Invalid index. Flight not found." << endl;
        return;
    }
    if (pubptr[index] != NULL) {
        delete pubptr[index];
        pubptr[index] = NULL;

        for (int i = index; i <numFlights - 1; i++)
		{
            pubptr[i] = pubptr[i + 1];
        }
        pubptr[numFlights - 1] = NULL;

        cout << "Flight deleted successfully from VVIP category." << endl;
    } else {
        cout << "No VVIP Flight found at index " << index << "." << endl;
    }
}
	void getSortedOnArrivalTime(FlightRecord* flights[], int numFlights)
	{
    if (numFlights == 0) {
        cout << "No flights to sort." << endl;
    } else {
        for (int i = 0; i < numFlights - 1; i++)
		{
            for (int j = 0; j < numFlights - i - 1; j++) {
                if (flights[j]->Arrival_time > flights[j + 1]->Arrival_time) {
                    FlightRecord* temp = flights[j];
                    flights[j] = flights[j + 1];
                    flights[j + 1] = temp;
                }
            }
        }

        cout << "Flights sorted based on Arrival time." << endl;
    }
}

};

int main()
{
	const int  totalseats_VIP= 5;
	FlightRecord *vipptr[totalseats_VIP];
	vipptr[0] =new  VIPFlight("Ramesh ",3588,50,"8:00","5:00","business","economy","Emirites");
	vipptr[1] =new  VIPFlight("neil",3588,50,"8:00","5:00","business","economy","Emirites");
	vipptr[2] = new VIPFlight("Mukesh", 3590, 50, "9:00", "6:00", "business", "economy", "Emirates");	
	vipptr[3] = new VIPFlight("Rajesh", 3591, 50, "9:30", "6:30", "first", "premium", "Etihad");
	vipptr[4] = new VIPFlight("Dinesh", 3592, 50, "10:00", "7:00", "business", "economy", "Emirates");
	
	const int  totalseats_VVIP= 5;
	FlightRecord *vvipptr[totalseats_VVIP];
	vvipptr[0]	=new  VVIPFlight("Ram ",3588,50,"8:00","5:00","business","economy","Emirites");
	vvipptr[1] = new VVIPFlight("Suresh", 1256, 30, "10:30", "7:30", "first class", "deluxe", "Etihad");
    vvipptr[2] = new VVIPFlight("Priya", 7894, 40, "12:15", "9:45", "business", "economy", "Qatar Airways");
    vvipptr[3] = new VVIPFlight("Amit", 2365, 20, "14:45", "11:30", "first class", "deluxe", "British Airways");
    vvipptr[4] = new VVIPFlight("Neha", 4152, 35, "17:00", "14:30", "business", "economy", "Singapore Airlines");
	
	const int  totalseats_Public= 5;
	FlightRecord *pubptr[totalseats_Public];
	pubptr[0]=new  PublicFlight("Ram ",3588,50,"8:00","5:00","business","economy","Emirites");
	pubptr[1] = new PublicFlight("Emma", 1256, 120, "10:30", "18:45", "economy", "economy", "Delta Airlines");
	pubptr[2] = new PublicFlight("John", 7894, 200, "14:15", "21:30", "business", "economy", "Lufthansa");
	pubptr[3] = new PublicFlight("Sarah", 6732, 75, "12:45", "19:20", "economy", "economy", "British Airways");
	pubptr[4] = new PublicFlight("Michael", 9321, 150, "16:00", "23:30", "business", "business", "United Airlines");
	FlightManager *manage;
	int numFlights = 5;

	
	int choice,i;
	do{
			cout<<"Enter 1 TO Get the details of passeneger at VIP flight"<<endl;
			cout<<"Enter 2 TO Get the details of passeneger at VVIP flight"<<endl;
			cout<<"Enter 3 TO Get the details of passeneger at Public flight"<<endl;
			cout<<"Enter your choice"<<endl;
			cin>>choice;
	switch(choice)
	{
		case 1:
			{ 
                cout << "TOTAL SEATS OCCUPIED DETAILS :" << endl;
                for (int i = 0; i < numFlights; i++) {
                   	cout<<"PASSENGER DETAILS "<< i+1 ;
                    vipptr[i]->displaydetail();
            }
            
			cout << "WELCOME TO THE FLIGHT MANAGEMENT SYSTEM " << endl;
			cout <<"NUMBER OF SEATS IN VIP CLASS= 10 AVAILABLE SEATS=5"<<endl;
			int flightChoice,j;
                cout << "IF YOU WANT TO BOOK A SEAT ENTER NUM 0 To 20 :: TO UPADTE THE DETAILS PUT -1=";
                cin >> flightChoice;
                if (flightChoice >= numFlights) 
				{
                   manage[flightChoice].InsertAtVip(vipptr,numFlights );
                }
                else {
                		cout<<"WHICH SEAT NO. DETAILS TO BE UPDATED"<<endl;	
                		cin>>j;
                    	manage[j].UpdateAtVip(j,vipptr);
                    	
                }
                	char returnch;
                	cout<<"Do you want to sort the list by arrival time?"<<endl;
                	cin>>returnch;
                	if(returnch=='y')
                	{
                		manage[j].getSortedOnArrivalTime(vvipptr,numFlights);
					}
               char returnChoice;
                    cout << "Do you want to delete any details? (y/n): ";
                    cin >> returnChoice;
                    if (returnChoice == 'y') {
                    	manage[i].DeleteVipFlight(vipptr,i,10);
                    }
                    else{break;}

                break;
			}
		case 2:
			{ 
                cout << "TOTAL SEATS OCCUPIED DETAILS :" << endl;
                for (int i = 0; i < numFlights; i++) {
                   	cout<<"PASSENGER DETAILS "<< i+1 ;
                    vvipptr[i]->displaydetail();
            }
            
			cout << "WELCOME TO THE FLIGHT MANAGEMENT SYSTEM " << endl;
			cout <<"NUMBER OF SEATS IN VVIP CLASS= 10 AVAILABLE SEATS=5"<<endl;
			int flightChoice,j;
                cout << "IF YOU WANT TO BOOK A SEAT ENTER NUM 0 To 20 :: TO UPADTE THE DETAILS PUT -1=";
                cin >> flightChoice;
                if (flightChoice >= numFlights) 
				{
                   manage[flightChoice].InsertAtVVip(vvipptr,numFlights );
                }
                else {
                		cout<<"WHICH SEAT NO. DETAILS TO BE UPDATED"<<endl;	
                		cin>>j;
                    	manage[j].UpdateAtVVip(j,vvipptr);
                    	
                }
                	char returnch;
                	cout<<"Do you want to sort the list by arrival time?"<<endl;
                	cin>>returnch;
                	if(returnch=='y')
                	{
                		manage[j].getSortedOnArrivalTime(vipptr,numFlights);
					}
				}
               char returnChoice;
                    cout << "Do you want to delete any details? (y/n): ";
                    cin >> returnChoice;
                    if (returnChoice == 'y') {
                    	manage[i].DeleteVVipFlight(vvipptr,i,10);
                    }
                    else{break;}

                break;
			
		case 3:
			{ 
                cout << "TOTAL SEATS OCCUPIED DETAILS :" << endl;
                for (int i = 0; i < numFlights; i++) {
                   	cout<<"PASSENGER DETAILS "<< i+1 ;
                    pubptr[i]->displaydetail();
            }
            
			cout << "WELCOME TO THE FLIGHT MANAGEMENT SYSTEM " << endl;
			cout <<"NUMBER OF SEATS IN VIP CLASS= 10 AVAILABLE SEATS=5"<<endl;
			int flightChoice,j;
                cout << "IF YOU WANT TO BOOK A SEAT ENTER NUM 0 To 20 :: TO UPADTE THE DETAILS PUT -1=";
                cin >> flightChoice;
                if (flightChoice >= numFlights) 
				{
                   manage[flightChoice].InsertAtpublic(pubptr,numFlights );
                }
                else {
                		cout<<"WHICH SEAT NO. DETAILS TO BE UPDATED"<<endl;	
                		cin>>j;
                    	manage[j].UpdateAtPublic(j,pubptr);
                    	
                }
                	char returnch;
                	cout<<"Do you want to sort the list by arrival time?"<<endl;
                	cin>>returnch;
                	if(returnch=='y')
                	{
                		manage[j].getSortedOnArrivalTime(pubptr,numFlights);
					}
               char returnChoice;
                    cout << "Do you want to delete any details? (y/n): ";
                    cin >> returnChoice;
                    if (returnChoice == 'y') {
                    	manage[i].DeletePublicFlight(pubptr,i,10);
                    }
                    else{break;}

                break;
			}
	}
	}while(choice !=0);
	return 0;
}
