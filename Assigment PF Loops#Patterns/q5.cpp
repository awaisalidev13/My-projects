//Muhammad Awais Ali
//25i-2587 DS-B


#include <iostream>
using namespace std;


bool prime(int n);

int main()
{
    int number,sq;
    cout<<"Enter a number: ";
    cin>>number;
    sq=number*number;

    for(int i = 1 ; i<=number ; i++)
    {
        for(int j=1 ; j<=number ; j++)
        {
            if(sq==1)
            cout<<" .";
            else if(prime(sq))
            cout<<" P";
            else
            cout<<" C";
            sq--;
        }
        cout<<endl;
    }

}


bool prime(int n)
{
    int temp=0;
    for (int i = 2 ; i<n ; i++)
    {
        if(n%i==0)
        {
            temp++;
        }

    }

    if(temp>0)
    return 0;
    else 
    return 1;
}