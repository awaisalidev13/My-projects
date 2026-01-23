//Muhammad Awais Ali
//25i-2587 DS-B


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int number;
	
	cout<<"Enter a  number: ";
	cin>>number;
	
	for(int i = 1 ; i<=number ; i++ )
	{
		for(int j=1 ; j<=number ; j++)
		{
			int value  =  min(abs(i-j), abs(i+j-number-1));
			
			cout<<value<<" ";
			
		    }
		    cout<<endl;
		
	    }
	    
	
}