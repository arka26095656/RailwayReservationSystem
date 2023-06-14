/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream.h>
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
    void ticketBooking(int PNR){
        cout<<"ticket booked"<<endl;
        
    }
    void foodSupply(int regId){
       cout<<"veg"<<endl;  
    }
    void viewTrain(){
         cout<<"train name: " <<train_name<<endl;
           cout<<"train number: " <<train_number<<endl;
        
    }
    void impAnnouncement()
    {
         cout<<"N.A"<<endl;
        
    }
    void cancelBooking()
    {
        
        
    }
    void typeofSeat()
    {
        
    }
    void admin()
    {
        
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
	printf("\n\t\t\tENTER YOUR CHOICE: ");
	scanf("%d",&ch);
    }
    
    
};
int main()
{
    
    
   	printf("\t\t\t****RAILWAY RESERVATION SYSTEM**\n");
   	
}