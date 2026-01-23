//Muhammad Awais Ali
//25i-2587 DS-B


#include <iostream>
using namespace std;


int sum;

int main()
{
	int n,temp=0;
	cout<<"Enter size: ";
	cin>>n;
	
		for(int i=1;i<=n;i++)
		{
				for(int j=n-i;j>0;j--)
				{
					cout<<"  ";	
				}
				for(int j=1;j<=i;j++)
				{
					if((n/4) + 4 ==j)
					{
						if(temp==0)
						{
							cout<<"[]";
							temp++;
						}
						else
						{
							cout<<"**";
						}
						
					}
					else cout<<"**";
				}
				for(int j=1;j<=n;j++)
				{
					cout<<"**";
				}
				for(int j=1;j<=i;j++)
				{
						
					cout<<"**";

				}
				for(int j=n-i;j>0;j--)
				{
					cout<<"    ";	
				}
				for(int j=n/2;j<=i;j++)
				{
						
					cout<<"**";

				}
				
				cout<<endl;	
		}
		for(int i=n;i>0;i--)
		{
				for(int j=n-i;j>0;j--)
				{
					cout<<"  ";	
				}
				for(int j=1;j<=i;j++)
				{
					if(j<4){
					
					if((n/4) + 6 ==i)
					{
							cout<<"  ";
			
					}
					else 
					{cout<<"**";}
				    }
					else cout<<"**";
				
				}
				for(int j=1;j<=n;j++)
				{
					cout<<"**";
				}
				for(int j=1;j<=i;j++)
				{
						
					cout<<"**";

				}
				for(int j=0;j<n-i;j++)
				{
					cout<<"    ";	
				}
				for(int j=n/2;j<=i;j++)
				{
						
					cout<<"**";

				}
				cout<<endl;	
		}
}
