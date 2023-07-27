#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int mainMenu();
class Management{
	public:
		Management()
		{
			mainMenu();
		}
};

class Details
{
	public:
		static string name,gender;
		int phoneNo;
		int age;
		string add;
		static int cID;
		char arr[100];
		
		void information()
		{
			cout<<"\nEnter the customer ID:";
			cin>>cID;
			cout<<"\nEnter the name:";
			cin>>name;
			cout<<"\nEnter the age:";
			cin>>age;
			cout<<"\nAddress:";
			cin>>add;
			cout<<"\nGender:";
			cin>>gender;
			cout<<"\nYour details are saved with us\n"<<endl;
			cin>>cID;
			
		}
};

int Details :: cID;
string Details::name;
string Details::gender;

class registration 
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights()
		{
			string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
			for(int a=0;a<6;a++)
			{
				cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
			}
			
			cout<<"\nWelcome to the Airlines!"<<endl;
			cout<<"Press the number of country of which you want to book the flight:";
			cin>>choice;
			switch(choice)
			{
				case 1:
					{
					
					cout<<"____________Welcome to the Dubai Emirates_____________\n"<<endl;
					cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
					cout<<"Following are the flights\n"<<endl;
					
					cout<<"1. DUB - 498"<<endl;
					cout<<"\t08-01-2022 8:00AM 10hrs Rs.14000"<<endl;
					cout<<"1. DUB - 658"<<endl;
					cout<<"\t09-01-2022 4:00AM 12hrs Rs.10000"<<endl;
					cout<<"1. DUB - 508"<<endl;
					cout<<"\t11-01-2022 11:00AM 11hrs Rs.9000"<<endl;
					
					cout<<"\nSelect the flight you want to book:";
					cin>>choice1;
					if(choice1==1)
					{
						charges=14000;
						cout<<"You have successfully booked the flight DUB - 498"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2)
					{
						charges=10000;
						cout<<"You have successfully booked the flight DUB - 658"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3)
					{
						charges=9000;
						cout<<"You have successfully booked the flight DUB - 508"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
						
					}
					else
					{
						mainMenu();
					}
				}
				case 2:
				{
					cout<<"____________Welcome to the Canadian Airlines_____________\n"<<endl;
					cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
					cout<<"Following are the flights\n"<<endl;
					
					cout<<"1. CA - 198"<<endl;
					cout<<"\t09-01-2022 2:00PM 20hrs Rs.34000"<<endl;
					cout<<"1. CA - 158"<<endl;
					cout<<"\t10-01-2022 6:00AM 23hrs Rs.30000"<<endl;
					cout<<"1. CA - 208"<<endl;
					cout<<"\t14-01-2022 12:00AM 21hrs Rs.40000"<<endl;
					
					cout<<"\nSelect the flight you want to book:";
					cin>>choice1;
					if(choice1==1)
					{
						charges=34000;
						cout<<"You have successfully booked the flight CA - 198"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2)
					{
						charges=30000;
						cout<<"You have successfully booked the flight CA - 158"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3)
					{
						charges=40000;
						cout<<"You have successfully booked the flight CA - 208"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
						
					}
					else
					{
						mainMenu();
					}
				}
				
				case 3:
					{
					cout<<"____________Welcome to the UK Airlines_____________\n"<<endl;
					cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
					cout<<"Following are the flights\n"<<endl;
					
					cout<<"1. UK - 199"<<endl;
					cout<<"\t014-01-2022 10:00AM 14hrs Rs.44000"<<endl;
					cout<<"1. UK - 567"<<endl;
					cout<<"\t22-01-2022 12:00AM 20hrs Rs.50000"<<endl;
					
					
					cout<<"\nSelect the flight you want to book:";
					cin>>choice1;
					if(choice1==1)
					{
						charges=44000;
						cout<<"You have successfully booked the flight UK - 199"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2)
					{
						charges=50000;
						cout<<"You have successfully booked the flight UK - 567"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
						
					}
					else
					{
						mainMenu();
					}
					}
					
				case 4:
					{
						cout<<"____________Welcome to the USA Airlines_____________\n"<<endl;
					cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
					cout<<"Following are the flights\n"<<endl;
					
					cout<<"1. USA - 567"<<endl;
					cout<<"\t015-01-2022 9:00AM 22hrs Rs.37000"<<endl;
					cout<<"1. USA - 658"<<endl;
					cout<<"\t16-01-2022 6:00AM 22hrs Rs.39000"<<endl;
					cout<<"1. USA - 508"<<endl;
					cout<<"\t17-01-2022 10:00AM 21hrs Rs.42000"<<endl;
					
					cout<<"\nSelect the flight you want to book:";
					cin>>choice1;
					if(choice1==1)
					{
						charges=37000;
						cout<<"You have successfully booked the flight USA - 567"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2)
					{
						charges=39000;
						cout<<"You have successfully booked the flight USA - 658"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3)
					{
						charges=42000;
						cout<<"You have successfully booked the flight USA - 508"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
						
					}
					else
					{
						mainMenu();
					}
					}
					
					
				case 5:
					{
					cout<<"____________Welcome to the Australia Airlines_____________\n"<<endl;
					cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
					cout<<"Following are the flights\n"<<endl;
					
					cout<<"1. AS - 698"<<endl;
					cout<<"\t18-01-2022 9:00AM 20hrs Rs.44000"<<endl;
					cout<<"1. AS - 158"<<endl;
					cout<<"\t19-01-2022 4:00AM 22hrs Rs.34000"<<endl;
					cout<<"1. AS - 708"<<endl;
					cout<<"\t20-01-2022 10:00AM 21hrs Rs.42000"<<endl;
					
					cout<<"\nSelect the flight you want to book:";
					cin>>choice1;
					if(choice1==1)
					{
						charges=44000;
						cout<<"You have successfully booked the flight AS - 698"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2)
					{
						charges=34000;
						cout<<"You have successfully booked the flight AS - 158"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3)
					{
						charges=42000;
						cout<<"You have successfully booked the flight AS - 708"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
						
					}
					else
					{
						mainMenu();
					}	
					}
					
					
				case 6:
					{
					cout<<"____________Welcome to the European Airlines_____________\n"<<endl;
					cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
					cout<<"Following are the flights\n"<<endl;
					
					cout<<"1. EU - 898"<<endl;
					cout<<"\t21-01-2022 2:00AM 18hrs Rs.36000"<<endl;
					cout<<"1. EU - 958"<<endl;
					cout<<"\t22-01-2022 6:00AM 19hrs Rs.37000"<<endl;
					cout<<"1. EU - 608"<<endl;
					cout<<"\t23-01-2022 10:00AM 20hrs Rs.31000"<<endl;
					
					cout<<"\nSelect the flight you want to book:";
					cin>>choice1;
					if(choice1==1)
					{
						charges=36000;
						cout<<"You have successfully booked the flight EU - 898"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2)
					{
						charges=37000;
						cout<<"You have successfully booked the flight EU - 958"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3)
					{
						charges=31000;
						cout<<"You have successfully booked the flight EU - 608"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
						
					}
					else
					{
						mainMenu();
					}	
					
					
				
					}
					default:
						{
							cout<<"Invalid input, shifting you to the main menu !"<<endl;
							mainMenu();
							break;
						}
			}
	
}
};

float registration :: charges;
int registration :: choice;

class ticket : public registration, Details
{
	public:
		void Bill()
		{
			string destination="";
			ofstream outf("records.txt");
			{
				outf<<"_______________________XYZ Airlines________________"<<endl;
				outf<<"_______________________Ticket________________"<<endl;
				outf<<"_______________________________________________"<<endl;
				
				outf<<"Customer ID:"<<Details::cID<<endl;
				outf<<"Customer name:"<<Details::name<<endl;
				outf<<"CUstomer Gender:"<<Details::gender<<endl;
				outf<<"\tDescription "<<endl<<endl;
				
				if(registration::choice=1)
				{
					destination ="Dubai";
				}
				else if(registration ::choice=2)
				{
					destination = "Canada";
				}
				else if(registration ::choice=3)
				{
					destination = "UK";
				}
				else if(registration ::choice=4)
				{
					destination = "USA";
				}
				else if(registration ::choice=5)
				{
					destination = "Australia";
				}
				else if(registration ::choice=6)
				{
					destination = "Europe";
				}
				
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight cost:\t\t"<<registration ::charges<<endl;
			}
			outf.close();
}
void disBill()
{
	ifstream ifs("records.txt");
	{
		if(!ifs)
		{
			cout<<"File error!"<<endl;
		}
		while(!ifs.eof())
		{
			ifs.getline(arr,100);
			cout<<arr<<endl;
		}
	}
	ifs.close();	
}
};

int mainMenu()
{
	int l_choice;
	int s_choice;
	int back;
	cout<<"\t________________XYZ Airlines \n"<<endl;
	cout<<"\t_______________Main menu_______________"<<endl;
	
	cout<<"\t________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t"<<endl;
	
	cout<<"\t\t press 1 to add the Customer Details   \t|"<<endl;
	cout<<"\t\t press 2 for Flight Registration       \t|"<<endl;
	cout<<"\t\t press 3 for Ticket and Charges        \t|"<<endl;
	cout<<"\t\t press 4 to Exit                       \t|"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
	cout<<"\t__________________________________________________"<<endl;
	
	cout<<"Enter the choice:";
	cin>>l_choice;
	
	Details d;
	registration r;
	ticket t;
	switch(l_choice)
	{
		case 1:
			{
				cout<<"____________customers_______________\n"<<endl;
				d.information();
				cout<<"Press any key to go back to Main menu";
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
				break;
			}
		case 2:
			{
				cout<<"________Book a flight using this system_________\n"<<endl;
				r.flights();
				break;
			}
		case 3:
			{
			cout<<"____________GET YOUR TICKET_______\n"<<endl;
			t.disBill();
			
			cout<<"Your ticket is printed, you can collect it\n"<<endl;
			cout<<"Press 1 to display your ticket";
			
			cin>>back;
			if(back==1)
			{
				t.disBill();
				cout<<"Press any key to go back to main menu";
				cin>>back;
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
			}
			else
			{
				mainMenu();
			}
			break;
		}
		
	case 4:
		{
			cout<<"\n\n\n\t_________Thank-you"<<endl;
			break;
		}
		
	default:
		{
			cout<<"Invalid input,Please try again!\n"<<endl;
			mainMenu();
			break;
		}
}
return 0;
}

int main()
{

	Management Mob_j;
	return 0;
}
