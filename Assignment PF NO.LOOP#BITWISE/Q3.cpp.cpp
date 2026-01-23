// Muhammad Awais Ali
// 25i-2587 DS-B


#include <iostream>
using namespace std;

void rule1();
void rule2();
void rule3();

int number,result,final_result,b0=0,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0;
int main () {

    int temp_num;

    cout<<"Enter a number: ";
    cin>>number;
    temp_num = number;
    if (number<256) {
        if (temp_num>0) {
            b0=temp_num&1;
            temp_num= temp_num>>1;
        }
        if (temp_num>0) {
            b1= temp_num&1;
            temp_num=temp_num>>1;
        }
        if (temp_num>0) {
            b2= temp_num&1;
            temp_num=temp_num>>1;
        }
        if (temp_num>0) {
            b3= temp_num&1;
            temp_num=temp_num>>1;
        }
        if (temp_num>0) {
            b4= temp_num&1;
            temp_num= temp_num>>1;
        }
        if (temp_num>0) {
            b5= temp_num&1;
            temp_num= temp_num>>1;
        }
        if (temp_num>0) {
            b6= temp_num&1;
            temp_num= temp_num>>1;
        }
        if (temp_num>0) {
            b7= temp_num&1;
            temp_num= temp_num>>1;
        }
//applying rules from here

        result=b0+b1+b2+b3+b4+b5+b6+b7;
        if (result==1 || result==2 || result==3 || result==5 || result==8 || result==0) {
            rule1();
        }
        else if (b7==1 && b0==0) {
            rule2();
        }
        else if (b7==1 && b0==1) {
            rule3();
        }
        cout<<b7<<b6<<b5<<b4<<b3<<b2<<b1<<b0;

        final_result= b7*128+b6*64+b5*32+b4*16+b3*8+b2*4+b1*2+b0*1;
        cout<<final_result<<endl;





    }
    else {
        cout<<"Enter a valid 8 bit number 0-255";
    }

}


void rule1() {

    if (b0==1)
        b0=0;
    else
        b0=1;
    if (b1==1)
        b1=0;
    else
        b1=1;
    if (b2==1)
        b2=0;
    else
        b2=1;
    if (b3==1)
        b3=0;
    else
        b3=1;
    if (b4==1)
        b4=0;
    else
        b4=1;
    if (b5==1)
        b5=0;
    else
        b5=1;
    if (b6==1)
        b6=0;
    else
        b6=1;
    if (b7==1)
        b7=0;
    else
        b7=1;

}

void rule2() {
    int temp1,temp2,temp3;

        temp1=b7;
        temp2=b6;
        temp3=b5;
        b7=b4;
        b6=b3;
        b5=b2;
        b4=temp1;
        b3=temp2;
        b2=temp3;

}

void rule3() {
    int temp1,temp2,temp3,temp4;
        temp1=b7;
        temp2=b6;
        temp3=b5;
        temp4=b4;
        b7=b3;
        b6=b2;
        b5=b1;
        b4=b0;
        b3=temp1;
        b2=temp2;
        b1=temp3;
        b0=temp4;
}

