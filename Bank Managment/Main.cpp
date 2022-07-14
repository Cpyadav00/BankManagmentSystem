#include<bits/stdc++.h>
using namespace std;
#include"User.cpp"
int main()
{
	User u;
	cout<<"WELCOME TO THE BANK\n";
   char ch='y';
   while(ch!='n')
   {
	   cout<<"1.Create new user account\n";
	   cout<<"2.Display details of user\n";
	   int n;
	   cin>>n;
	   switch(n)
	   {
        case 1:
		{  
			u.addNewUser();
			break;
		}
		case 2:
		{
			 cout<<"Enter the account number to see the details\n";
		    string userid;
			cin>>userid;
			u.displayUserDetails(userid);
		}
	   }
	   	cout<<"Press 'y' to continue and 'n' to quit\n";
	   cin>>ch;
   }
return 0;	
}
