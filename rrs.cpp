
#include <iostream>
using namespace std;

class Railway{
    
    string train_number;
    string train_name;
    string start,dest;
    long price;
    string timet;
    
    
    public:
    
    Railway( ){
        train_number="123se";
        train_name="faluknama";
        start="CONTAI";
        dest="KGP";
        price=230;
        
        timet="12:50";
    }
    void ticketBooking(){
        cout<<"ticket booked"<<endl;
        
    }
    void foodSupply(){
       cout<<"veg meal"<<endl;  
    }
    void viewTrain(){
         cout<<"train name: " <<train_name<<endl;
           cout<<"train number: " <<train_number<<endl;
        
    }
    void impAnnouncement()
    {
         cout<<"No important Announcement"<<endl;
        
    }
    void cancelBooking()
    {
        
       cout<<"no cancellation of ticket"<<endl; 
    }
    void typeofSeat()
    {
        cout<<" AC-3 tier"<<endl; 
    }
    void admin()
    {
        cout<<"your journey is confirmed"<<endl;
    }
    
    void viewMenu(){
    printf("\n\t\t\t*************\n");
	printf("\t\t\t****RAILWAY RESERVATION SYSTEM**\n");
	printf("\t\t\t*************\n");
	printf("\n\t\t\t<<<<<<<<<<WELCOME USERS>>>>>>>>>>\n");
	printf("\n\n\t\t\t\t      MENU\n");
	printf("\t\t\t             **");
	printf("\n\t\t\t[1] VIEW INFORMATION\n");
	printf("\n\t\t\t[2] BOOK TICKET\n");
	printf("\n\t\t\t[3] CANCEL TICKET\n");
	printf("\n\t\t\t[4] ADMIN");
	printf("\n\n\t\t\t[5] EXIT\n");
	printf("\n\t\t\t************");
	printf("\n\t\t\t************");
    cout<<endl;
    cout<<endl;
    }
    
    
};
int main()
{
    
    
   Railway r1;
   r1.viewMenu();
   r1.viewTrain();
   r1.admin();
   r1.typeofSeat();
   r1.ticketBooking();
   r1.foodSupply();
   r1.cancelBooking();
   r1.impAnnouncement();
	string train = "Darjeeling mail" PNR = "306654", dept = "18-30-00", arr="06-00-00";
	long price = 599;
	
   
}
