//Muhammad Awais Ali
//25i-2587 DS-B


#include <iostream>
using namespace std;

long long factorial(long long n);
void pattern(int i);

int main()
{
	int number,cat_number=0,i=1;
	
	cout<<"Enter a number: ";
	cin>>number;
	
	while (cat_number<number)
	{
		cat_number = factorial(2*i)/(factorial(i+1) * factorial(i));
		
		i++;		
	}
	
	
	if(cat_number == number)
	{
			cout<<"CATALAN NUMBER VERIFIED!"<<endl;
			cout<<"Catalin index (n): "<<(i-1)<<endl;
			cout<<"Pattern:"<<endl;
			pattern(i);
	}
	else
	cout<<"NOT A CATALIN NUMBER. ";
	

	

	
}

 long long factorial(long long n)
 {
 	long long 	int temp=n,i=n-1;
 		
 		while(i>0)
 		{
 			temp*= i;
 			i--;	 	
		}	
		
		return temp;	
 }
 
 
void pattern(int i)
{
	int num = (i*2) -1;
		int j=1;
		while (j<=num)
		{
			int k=1;
			while(k<=num)
			{
				if(j==1 || j==num || k==j || (k+j)-1==num)
				cout<<"#";
				else
				cout<<" ";
				k++;
			}
			cout<<endl;
		j++;
		}	
}





