//Muhammad Awais Ali
//25i-2587 DS-B


#include <iostream>
#include <cmath>
using namespace std;

int lucas(int n,int&m);
void pattern(int n);

int main()
{
    int num,lucas_number,check=0;
    cout<<"Enter a number: ";
    cin>>num;

    lucas_number = lucas(num,check);
    if(check==1)
    pattern(lucas_number);

    else 
    cout<<"Not a lucas number;";
}


int lucas(int n,int&m)
{int number=0,a=2,b=1,temp=0,temp2;

    while(a<=n)
    {
        if(a>10)
        number = a+number*100;
        else
        number = a+number*10;
        temp = b;
        b=b+a;
        temp2=a;
        a=temp;
    }
    if(temp2==n)
    m =1;

    return number;
}


void pattern(int n)
{
    ///for checking lenght
    int temp = n,len=0;
    while (temp!=0)
    {
        temp/=10;
        len++;
    }  
    ///for reversing the number
    int temp2=n,reverse=0,a,b=1;
    while(temp2!=0)
    {
        int a = temp2%10;
        if(b==1)
        { }
        else
        reverse = a + reverse*10;
        temp2 = temp2/10;
        b++;
    }
    /////////////////
    

    for(int i=1 ; i<=len ; i++)
    {
        int div=1,div2=1;
        for(int j=len-i;j>0;j--)
        {
            cout<<" ";
        }

        for(int j=0;j<i;j++)
        {
            div = div*10;
        }
        for(int j=len ; j>i ;j--)
        {
            div2 = div2*10;
        }

        cout<<n%div;
        if(i==1)
        reverse/div2;
        else
        cout<<(reverse/div2);
        cout<<endl;
    }


        ///for reversing the number
    temp2=n,reverse=0,a,b=1;
    while(temp2!=0)
    {
        int a = temp2%10;
        if(b==1)
        { }
        else
        reverse = a + reverse*10;
        temp2 = temp2/10;
        b++;
    }
    /////////////////

    for(int i=len;i>0;i--)
    {
        for(int j = len ; j>i ;j--)
        {
            cout<<" ";
        }
        int div=1,div2=1;
        for(int j=0;j<i;j++)
        {
            div = div*10;
        }
        for(int j=len ; j>i ;j--)
        {
            div2 = div2*10;
        }
        cout<<n%div;
        if(i==1)
        reverse/div2;
        else
        cout<<(reverse/div2);
        cout<<endl;
    }
    

    
}