#include<iostream>
using namespace std;
int main()
{
int choice,a=0,b=0,c=0,i,j=1;
do 
{
	cout<<"\n****Welcome to Election/Voting 2019***\n";
	cout<<"1.Cast the Vote\n";
	cout<<"2.Find the Count\n";
	cout<<"3.Find leading Candidate\n";
	cout<<"0.Exit\n";
	cout<<"enter your choice";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"press 1 for candidate 1\n";
			cout<<"press 2 for candidate 2\n";
			cout<<"press 3 for candidate 3\n";
			cin>>i;
			if(i==1)
			a++;
			else if(i==2)
			b++;
			else
			c++;
			break;
		case 2:
		     cout<<"\nvotes for candidate 1 "<<a;
		     cout<<"\nvotes for candidate 2 "<<b;
		     cout<<"\nvotes for candidate 3 "<<c;
		     break;
		case 3:
			if(a>b&&a>c)
            cout<<"leading candidate is 1\n";
            else if(b>c)	
			cout<<"leading candidate is 2\n";
			else
			cout<<"leading candidate is 3\n";  
			break;
		case 4:
			j--;
			break;
		default:
			cout<<"invalid choice";
			break;
			
		    
					
	}
	
}while(j>0);
     return 0;		 	
}
	
	

