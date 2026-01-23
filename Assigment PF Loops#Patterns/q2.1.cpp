//Muhammad Awais Ali
//25i-2587 DS-B


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int number,temp;
	
	cout<<"Enter a odd number: ";
	cin>>number;
	
	temp = number/2+1;
	
	 
	if(number%2==1)
	{
				for(int i=1 ; i<=number ; i++)
			{
				for(int j=1 ; j<=number ; j++)
				{
					int value = max(abs(i-temp), abs(j-temp));
					cout<< value<<" ";
				}
				cout<<endl;
			}
    }
    else 
    cout<<"Enter a valid ODD number. ";
}