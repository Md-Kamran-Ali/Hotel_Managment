# include<iostream>
using namespace std;
int main()
{
	int nroom=0,qpasta=0,qburger=0,qnoodle=0,qshake=0,qchicken=0; // number of rooms & quantity of food items intially available in hotel
	int sroom=0,spasta=0,sburger=0,snoodle=0,sshake=0,schicken=0; // number of rooms & quantity of food items sold
	int troom=0,tpasta=0,tburger=0,tnoodle=0,tshake=0,tchicken=0; // total price earned by selling rooms  and food items
	int choice,q,n;
	cout<<"\t\t\t\t ****Number of rooms & Quantity of food items we have****";
	cout<<"\n\n\t Number of rooms:";
	cin>>nroom;
	cout<<"\n\t Quantity of Pasta:";
	cin>>qpasta;
	cout<<"\n\t Quantity of Burger:";
	cin>>qburger;
	cout<<"\n\t Quantity of Noodles:";
	cin>>qnoodle;
	cout<<"\n\t Quantity of Chocolate Shakes:";
	cin>>qshake;
	cout<<"\n\t Quantity of Chicken Roll:";
	cin>>qchicken;
	k:
	cout<<"\n\n\n\t\t\t\t Please select you choice from the Menu Options";
	cout<<"\n\n\n\t\t\t\t\t\t\t Menu";
	cout<<"\n\n\n\t\t\t\t\t Items/Room \t\t\t Price";
	cout<<"\n\n\t\t\t\t\t 1.Rooms \t\t\t 3000/day";
	cout<<"\n\n\t\t\t\t\t 2.Pasta \t\t\t 50/each";
	cout<<"\n\n\t\t\t\t\t 3.Burger \t\t\t 100/each";
	cout<<"\n\n\t\t\t\t\t 4.Noodles \t\t\t 150/each";
	cout<<"\n\n\t\t\t\t\t 5.Chocolate Shakes \t\t 170/each";
	cout<<"\n\n\t\t\t\t\t 6.Chicken Roll \t\t 250/each";
	cout<<"\n\n\t\t\t\t\t 7.Information regarding Sales and Collections";
	cout<<"\n\n\t\t\t\t\t 8.Exit";
	cout<<"\n\n\t\t\t\t\t\t";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				cout<<"\n\t\t\t\t\t\t Enter the number of rooms you want:";
				cout<<"\n\t\t\t\t\t\t";
				cin>>n;
				if(nroom-sroom<n)
				cout<<"\n\t\t\t\t\t\t Only "<<nroom-sroom<<" rooms available in hotel";
				else
				{
					cout<<"\n\t\t\t\t\t"<<n<<" rooms have been allocated to you";
					sroom+=n;
					troom=troom+3000*n;
				}
				break;	
			}
			case 2:
			{
				cout<<"\n\t\t\t\t\t\t Enter the number of pastas you want:";
				cout<<"\n\t\t\t\t\t\t";
				cin>>n;
				if(qpasta-spasta<n)
				cout<<"\n\t\t\t\t\t\t Only "<<qpasta-spasta<<" Pasta/Pastas available in hotel";
				else
				{
					cout<<"\n\t\t\t\t\t"<<n<<" Pasta/Pastas have have been ordered";
					spasta+=n;
					tpasta=tpasta+50*n;
				}
				break;	
			}
				case 3:
			{
				cout<<"\n\t\t\t\t\t\t Enter the number of Burgers you want:";
				cout<<"\n\t\t\t\t\t\t";
				cin>>n;
				if(qburger-sburger<n)
				cout<<"\n\t\t\t\t\t\t Only "<<qburger-sburger<<" Burger/Burgers available in hotel";
				else
				{
					cout<<"\n\t\t\t\t\t"<<n<<" Burger/Burgers have have been ordered";
					sburger+=n;
					tburger=tburger+100*n;
				}
				break;	
			}
				case 4:
			{
				cout<<"\n\t\t\t\t\t\t Enter the number of Noodles you want:";
				cout<<"\n\t\t\t\t\t\t";
				cin>>n;
				if(qnoodle-snoodle<n)
				cout<<"\n\t\t\t\t\t\t Only "<<qnoodle-snoodle<<" Noodle/Noodles available in hotel";
				else
				{
					cout<<"\n\t\t\t\t\t"<<n<<" Noodle/Noodles have have been ordered";
					snoodle+=n;
					tnoodle=tnoodle+150*n;
				}
				break;	
			}
				case 5:
			{
				cout<<"\n\t\t\t\t\t\t Enter the number of Chocolate Shakes you want:";
				cout<<"\n\t\t\t\t\t\t";
				cin>>n;
				if(qshake-sshake<n)
				cout<<"\n\t\t\t\t\t\t Only "<<qshake-sshake<<" Chocolate Shakes are available in hotel";
				else
				{
					cout<<"\n\t\t\t\t\t"<<n<<" Chocolate shakes have  been ordered";
					sshake+=n;
					tshake=tshake+170*n;
				}
				break;	
				
			}
				case 6:
			{
				cout<<"\n\t\t\t\t\t\t Enter the number of Chicken rolls you want:";
				cout<<"\n\t\t\t\t\t\t";
				cin>>n;
				if(qchicken-schicken<n)
				cout<<"\n\t\t\t\t\t\t Only "<<qchicken-schicken<<" Chicken rolls available in hotel";
				else
				{
					cout<<"\n\t\t\t\t\t"<<n<<" Chicken rolls have have been ordered";
					schicken+=n;
					tchicken=tchicken+250*n;
				}
				break;
			}
			case 7:
				{
				 cout<<"\n\t\t\t\t\t Details of Sales and Collections ";
				 cout<<"\n\n\t\t\t\t\t Number of rooms we had "<<nroom;
				 cout<<"\n\t\t\t\t\t Number of rooms we gave for rent "<<sroom;
				 cout<<"\n\t\t\t\t\t Available rooms "	<<nroom-sroom;
				 cout<<"\n\t\t\t\t\t\ Total rooms collection for the day:"<<troom;
				 
				 
				 cout<<"\n\n\t\t\t\t\t Number of Pastas we had "<<qpasta;
				 cout<<"\n\t\t\t\t\t Number of Pastas we sold "<<spasta;
				 cout<<"\n\t\t\t\t\t Available Pastas "	<<qpasta-spasta;
				 cout<<"\n\t\t\t\t\t\ Total Pastas collection for the day:"<<tpasta;
				 
			     cout<<"\n\n\t\t\t\t\t Number of Burgers we had "<<qburger;
				 cout<<"\n\t\t\t\t\t Number of Burgers we sold "<<sburger;
				 cout<<"\n\t\t\t\t\t Available Burgers "	<<qburger-sburger;
				 cout<<"\n\t\t\t\t\t\ Total Burgers collection for the day:"<<tburger;
				 
				 cout<<"\n\n\t\t\t\t\t Number of Noodles we had "<<qnoodle;
				 cout<<"\n\t\t\t\t\t Number of Noodles we sold "<<snoodle;
				 cout<<"\n\t\t\t\t\t Available Noodles "	<<qnoodle-snoodle;
				 cout<<"\n\t\t\t\t\t\ Total Noodles collection for the day:"<<tnoodle;
				 
				 cout<<"\n\n\t\t\t\t\t Number of Chocolate Shakes we had "<<qshake;
				 cout<<"\n\t\t\t\t\t Number of Chocolate Shakes we sold "<<sshake;
				 cout<<"\n\t\t\t\t\t Available Chocolate Shakes "	<<qshake-sshake;
				 cout<<"\n\t\t\t\t\t\ Total Chocolate Shakes collection for the day:"<<tshake;
				 
				 
				 cout<<"\n\n\t\t\t\t\t Number of Chicken rolls we had "<<qchicken;
				 cout<<"\n\t\t\t\t\t Number of Chicken rolls we sold "<<schicken;
				 cout<<"\n\t\t\t\t\t Available Chicken rolls "	<<qchicken-schicken;
				 cout<<"\n\t\t\t\t\t\ Total Chicken rolls collection for the day:"<<tchicken;
				 
				 break;
				 
				}
				case 8:
					break;
					default:{
						cout<<"\n\t\t\t\t\t\t\t Please select the number mentioned above in the menu ";
						break;}
			
	}
	if(choice!=8)
	goto k;
	return 0;
	
}
