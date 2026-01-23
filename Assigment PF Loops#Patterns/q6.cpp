//Muhammad Awais Ali
//25i-2587 DS-B


#include <iostream>
using namespace std;

int main()
{
	
	int num1,num,num2;
    cout<<"Enter Size: ";
	cin>>num1;
	num=num1*2-1;
	num2=num1-1;
	
	//upper triangle
		for (int i=1; i<=num2 ; i++)
	{
		for(int j=num2-i; j>0 ;j--)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			if( j==1)
			{
				cout<<" #";
			}
			else if(j==i)
			{
				cout<<".#";
			}
			else
			{
				cout<<"..";
			}
			
		}
		cout<<endl;
	}
	
	
	//mid body
	for(int i=1 ; i<=num ; i++)
	{
		for(int j=1 ;j<=num ; j++)
		{
			if((i==num/2+1 && j==1 ) || (i==num/2+1 && j==num))
			cout<<"+";
			else if(i==j ||  j==num-i+1)
			cout<<"#";
			else
			cout<<".";
		}
		cout<<endl;
	}
	
	
	
	//lower triangle
	
		for (int i=num2; i>0 ; i--)
	{
		for(int j=num2-i; j>0 ;j--)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			if( j==1)
			{
				cout<<" #";
			}
			else if(j==i)
			{
				cout<<".#";
			}
			else
			{
				cout<<"..";
			}
			
		}
		cout<<endl;
	}
	
	
	
	
	
	
}