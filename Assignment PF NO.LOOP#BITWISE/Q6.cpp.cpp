//Muhammad Awais Ali
//25i-2587 DS-B


#include <iostream>
using namespace std;

void rule1();
void rule2();
void rule3();

unsigned int result_code,A,B,a3=0,a2=0,a1=0,a0=0,b3=0,b2=0,b1=0,b0=0,r3,r2,r1,r0;
int main() {



    cout<<"Enter the first number: ";
    cin>>A;
    cout<<"Enter the second number: ";
    cin>>B;


    // bits extraction
    if (( A<=15) && (B<=15)){
        int temp_A=A,temp_B=B;
        if (temp_A>0) {
            a0=temp_A&1;
            temp_A=temp_A>>1;
        }
        if (temp_A>0) {
            a1=temp_A&1;
            temp_A=temp_A>>1;
        }
        if (temp_A>0) {
            a2=temp_A&1;
            temp_A=temp_A>>1;
        }
        if (temp_A>0) {
            a3=temp_A&1;
            temp_A=temp_A>>1;
        }
        if (temp_B>0) {
            b0=temp_B&1;
            temp_B=temp_B>>1;
        }
        if (temp_B>0) {
            b1=temp_B&1;
            temp_B=temp_B>>1;
        }
        if (temp_B>0) {
            b2=temp_B&1;
            temp_B=temp_B>>1;
        }
        if (temp_B>0) {
            b3=temp_B&1;
            temp_B=temp_B>>1;
        }



        //conditions start applying // sequence of bits [num2= b3b2b1b0   num1=a3a2a1a0]
        if (((a0&b0) == (a0^b0)) && ((a1&b1) == (a1^b1)) && ((a2&b2) == (a2^b2)) && ((a3&b3) == (a3^b3))) {
            rule1();
        }
        else if (((A | B) == 15 ) && (a0==b0)) {
            rule2();
        }

         // taking xor of every digit and converting back it into the decimal form
        else if ((8*(a3 ^ 1) + 4*(a2 ^ 0) + 2*(a1 ^ 1) + 1*(a0 ^ 0)) > (8*(b3 & 1) + 4*(b2 & 1) + 2*(b1 & 0) + 1*(b0 & 0))){
            rule3();
        }
        else {
            if (A>B) {
                int sum,r3,r2,r1,r0;
                sum= A+B;
                r0=sum&1;
                sum=sum>>1;
                r1=sum&1;
                sum=sum>>1;
                r2=sum&1;
                sum=sum>>1;
                r3=sum&1;
                result_code= 8*r3+4*r2+2*r1+1*r0;
            }
            else {
                int sub= A-B,
                r0=sub&1;
                sub=sub>>1;
                r1=sub&1;
                sub=sub>>1;
                r2=sub&1;
                sub=sub>>1;
                r3=sub&1;
                result_code= 8*r3+4*r2+2*r1+1*r0;
            }
        }
        if ((((result_code>>3)&1) == 1) || (((result_code>>4)&1) == 1)) {
            cout<<"HIGH";
        }
        else {
            cout<<"LOW";
        }

        }
    else{
        cout<<"Enter the number in appropriate range (0-15)";
    }
}

///////////////////// rule 1 function

void rule1() {
    if (a3==1)
        a3=0;
    else
        a3=1;
    if (a2==1)
        a2=0;
    else
        a2=1;
    if (a1==1)
        a1=0;
    else
        a1=1;
    if (a0==1)
        a0=0;
    else
        a0=1;

    result_code=8*a3+4*a2+a1*2+a0*1;
}

/////////////////////////////////// rule 2 function

void rule2() {
    result_code = ((A<<1) | (B>>1));
}

////////////////////////////////// rule 3 function

void rule3() {
    result_code= 8*(a3^b3) + 4*(a2^b2) + 2*(a1^b1) + 1*(a0^b0);
}