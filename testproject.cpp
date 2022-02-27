#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char q7;
	cout<<"Hello, Welcome to the ORDER COFFEE NOW App"<<endl<<endl;
	cout<<"Please create a new account"<<endl;
	cout<<"Choose a username : ";
	string user;
	
	getline(cin,user);
	
	cout<<"Please enter the password : ";
	string pass;
	getline(cin,pass);
	
	cout<<endl<<"Please enter your information "<<endl;
	cout<<"Usersname : ";
	string username;
	getline(cin,username);
	cout<<"Password : ";
	string password;
	getline(cin,password);
	
	while(user!=username || pass!=password){
		cout<<"Wrong username or password\nPlease try again"<<endl;
		cout<<endl<<"Username :";
		getline(cin,username);
		cout<<"Password :";
		getline(cin,password);
	}
	cout<<endl<<"Welcome to the ORDER COFFEE NOW app"<<endl<<endl;
	cout<<"Congralutation You have won free balance of Rs.400*"<<endl<<endl;
	double balance=400;
	cout<<"Would You like to add more money to your balance ?"<<endl;
	string q1;
	getline(cin,q1);
	{
		if(q1=="yes")
		{
			cout<<"Enter the amount you want to add : ";
			double add;
			cin>>add;
			balance+=add;
			cout<<"Your new balance is :"<<balance<<"Rs"<<endl;
		} 
		else
		{
			cout<<"alright"<<endl<<endl;	
		}
	}
	do
	{
		cout<<"Would you like to order some coffee now?"<<endl;
		string q2;
		cin>>q2;
		
		if(q2=="yes"){
			cout<<"\nPlease select type of coffee you want :"<<endl;
			string coffeeType[]={"Normal coffee","cold coffee","cappuccino","hot velvet coffee",
			"filter coffee","vanilla latte","vanilla cappuccino","cafe latte","inverted cappuccino",
			"cafe mocha","iced coffee","cold cafe mocha","vegan shake","lemon green coffee",
			"cold velvet coffee with coffee jelly"};
			double coffeePrices[]={30.00,45.00,50.00,70.00,40.00,100.00,100.00,85.00,85.00,100.00,
			80.00,100.00,120.00,150.00,150.00};
			
			for(int i=0;i<15;i++)
			{
				cout<<(i+1)<<".  "<<coffeeType[i]<<"  --  "<<coffeePrices[i]<<" Rs"<<endl;
			}
			cout<<"\nEnter you choice : ";
			int q3;
			cin>>q3;
			while(q3>15 || q3<0){
				cout<<"This is not a valid input please try again"<<endl;
				cin>>q3;
	
			}
			for(int i=0;i<15;i++)
			{
				if((q3-1)==i){
					cout<<"\nYou have ordered the :"<<coffeeType[i]<<"   "<<endl;
					cout<<"\nEnter how many cup/s of "<<coffeeType[i]<<" You want : ";
					int q4;
					cin>>q4;
					double bill=coffeePrices[i]*q4;
					cout<<"\nYour total bill will be : "<<coffeePrices[i]<<" * "<<q4<<" = "<<bill<<" Rs ."<<endl;
					balance=balance-bill;
					if(balance<0)
					{
						cout<<"\nOpps! insufficent balance in the wallet pay remaining "<<balance<<" using either \n\n1.UPI\n2.DEBIT/CREDIT CARD\n3.NET BANKING\n4.COD "<<endl;
						string paymentType[]={"1. UPI","2. DEBIT/CREDIT CARD","3. NET BANKING","4. CASH ON DELIVERY"};
						cout<<"select for paying remaining amount :"<<endl;
						int q5;
						cin>>q5;
						for(int i=1;i<5;i++)
						{
							if(q5==i)
							{
								cout<<"you have selected "<<paymentType[i-1]<<endl;
								cout<<"enter remaining amount  = "<<endl;
								int q6;
								cin>>q6;
								balance=balance+q6;
							}
						}
					}
					cout<<"Your current remaining balance is : "<<balance<<" Rs "<<endl;
				}
			}	
		}
		else{
			cout<<"ok have a good day :)"<<endl;
		}
		cout<<"Would you like to order more press 'y'"<<endl;
		cin>>q7;
	}while(q7=='y');
	
	cout<<"\n\nThanks for using our App Have a great Day :)\nvisit again :) :) :) :)";
	return 0;
}
