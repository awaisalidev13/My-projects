// muhammad Awais Ali
// 25i-2587 DS-B


#include<iostream>
#include<cmath>
using namespace std;
//////////////////////////// use unsigned so that only positive value is taken
unsigned int number;
///////////////////////////// functions for different test cases
int test1();
int test2();
int test3();
int test4();
/////////////////////////////
int main()
{

    bool t1=0;
    cout<<"Enter a number: ";
    cin>>number;

    if (test1()==1) {
        cout<<"TEST 1 PASS."<<endl;
        t1=1;
    }
    else {
        cout<<"TEST 1 FAIL."<<endl;
    }
    if (test2()==1) {
        cout<<"TEST 2 PASS."<<endl;
    }
    else {
        cout<<"TEST 2 FAIL."<<endl;
    }
    if (test3()==1) {
        cout<<"TEST 3 PASS."<<endl;
    }
    else {
        cout<<"TEST 3 FAIL."<<endl;
    }

    if (test4()==1) {
        cout<<"TEST 4 PASS."<<endl;
        t1=1;
        }
    else {
        cout<<"TEST 4 FAIL."<<endl;
    }
    if ( t1 && test2() && test3())
        cout <<"THE NUMBER IS SPECIAL."<<endl;
    else {
        cout<<"THE NUMBER IS NOT SPECIAL."<<endl;
    }


    return 0;


}
/////////////////////////////////////    the nested if structure represents working of a loop but as soon condition hits the further IF are not executed
///////////////////////////////////      This will run test1
int test1()
{
    unsigned  int sum=0,a = number;
    if (a>0){
        sum = sum + a%10;
        a=a/10;
        if(a>0){
            sum =sum+a%10;
            a=a/10;
            if(a>0){
                sum =sum+a%10;
                a=a/10;
                if(a>0){
                    sum=sum+a%10;
                    a=a/10;
                    if(a>0){
                        sum = sum +a%10;
                        a=a/10;
                        if(a>0){
                            sum=sum+a%10;
                            a=a/10;
                            if(a>0){
                                sum=sum+a%10;
                                a=a/10;
                                if(a>0){
                                    sum=sum+a%10;
                                    a=a/10;
                                    if(a>0){
                                        sum=sum+a%10;
                                        a=a/10;
                                        if(a>0){
                                            sum=sum+a%10;
                                            a=a/10;
                                            if(a>0){
                                                sum=sum+a%10;
                                                a=a/10;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (sum%2==0)
        return 0;
    else
        return 1;

}
///////////////////////////////
////////////////////////////////          this will run test2
int test2()
{
    int sum=0;
    unsigned  int a = number;
    if (a>0){
        sum = sum + pow(a%10,2);
        a=a/10;
        if(a>0){
            sum = sum + pow(a%10,2);
            a=a/10;
            if(a>0){
                sum = sum + pow(a%10,2);
                a=a/10;
                if(a>0){
                    sum = sum + pow(a%10,2);
                    a=a/10;
                    if(a>0){
                        sum = sum + pow(a%10,2);
                        a=a/10;
                        if(a>0){
                            sum = sum + pow(a%10,2);
                            a=a/10;
                            if(a>0){
                                sum = sum + pow(a%10,2);
                                a=a/10;
                                if(a>0){
                                    sum = sum + pow(a%10,2);
                                    a=a/10;
                                    if(a>0){
                                        sum = sum + pow(a%10,2);
                                        a=a/10;
                                        if(a>0){
                                            sum = sum + pow(a%10,2);
                                            a=a/10;
                                            if(a>0){
                                                sum = sum + pow(a%10,2);
                                                a=a/10;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (number%sum==0)
        return 1;
    else
        return 0;

}

///////////////////////////
//////////////////////////              this will run test3
int test3() {
    if (number>=10)
        return 1;
    else {
        return 0;
    }
}
/////////////////////////
/////////////////////////              this will run test4
int test4() {
    unsigned int num,result = 0, a = number;
    if(a>0){
        num=a%10;
        result = result*10 + num;
        a=a/10;
        if(a>0){
            num=a%10;
            result = result*10 + num;
            a=a/10;
            if(a>0){
                num=a%10;
                result = result*10 + num;
                a=a/10;
                if(a>0){
                    num=a%10;
                    result = result*10 + num;
                    a=a/10;
                    if(a>0){
                        num=a%10;
                        result = result*10 + num;
                        a=a/10;
                        if(a>0){
                            num=a%10;
                            result = result*10 + num;
                            a=a/10;
                            if(a>0){
                                num=a%10;
                                result = result*10 + num;
                                a=a/10;
                                if(a>0){
                                    num=a%10;
                                    result = result*10 + num;
                                    a=a/10;
                                    if(a>0){
                                        num=a%10;
                                        result = result*10 + num;
                                        a=a/10;
                                        if(a>0){
                                            num=a%10;
                                            result = result*10 + num;
                                            a=a/10;
                                            if(a>0){
                                                num=a%10;
                                                result = result*10 + num;
                                                a=a/10;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (result==number)
        return 1;
    else
        return 0;
}