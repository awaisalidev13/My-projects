//Muhammad Awais Ali
//25i-2587 DS-B




#include <iostream>
using namespace std;

int num,length=1;
int sum=0, result=0;

void sequence();
void pattern();

int main()
{
    

    cout<<"Enter the magic number: ";
    cin>>num;
    cout<<"Number: 0";
    sequence();

    if(result == 1)
    {
        pattern();
    }

    
}


void sequence()
{
    int temp1=0,temp2=0, a=0, b=0, c=1;
    
    while(a<num)
    { 
        temp1=c;
        temp2=b;
        c = c+b+a;
        a= temp2;
        if(a>num)
        {
            break;
        }
        b=temp1;
        cout<<a;
        sum = sum+a; 
        length++;  
    }


    if (a==num)
    {   
        cout<<endl<<"Valid: Tribonacci number "<<endl;
        cout<<endl<<"SUM IS : "<<sum<<endl;
        result=1;
    }
    else
    {
        cout<<endl<<"Invalid : Not Tribonacci number "<<endl;
        result=0;
    }
}

void pattern()
{
 if(sum<10)
    {  int i=1;
        while(i<=length)
        {
            int j=i;
            while(length-j>0)
            {
                cout<<" ";
                j++;
            }

            int k=1;
            while(k<=i)
            {
                cout<<sum;
                k++;
            }
            cout<<endl;
            i++;
        }
    }
 else
 {
    int i=1;
        while(i<=length)
        {
            int j=i;
            while(length-j>0)
            {
                cout<<"  ";
                j++;
            }

            int k=1;
            while(k<=i)
            {
                cout<<sum;
                k++;
            }
            cout<<endl;
            i++;
        }

 }
}