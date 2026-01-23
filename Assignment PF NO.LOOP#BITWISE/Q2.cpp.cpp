// Muhammad Awais Ali
// 25i-2587  DS-B


#include <iostream>
using namespace std;

void bits();
int law1();
int law2();
int law3();

int total, number, temp_num,length=0,rev_bit,b32,b31,b30,b29,b28,b27,b26,b25,b24,b23,b22,b21,b20,b19,b18,b17,b16,b15,b14,b13,b12,b11,b10,b9,b8,b7,b6,b5,b4,b3,b2,b1;


int main() {

    cout<<"Enter a number: ";
    cin>>number;
    bits();
    if (law2()==1) {
        if (law2()==1) {
            if (law3()==1) {
                cout<<"TRAPPED";
            }
            else {
                cout<<"NOT TRAPPED";
            }


        }
        else
        cout<<"NOT TRAPPED";

    }
    else
        cout<<"NOT TRAPPED";



}



////////////////////////////////////////
///////////////////////////////////////
//////////////////////////////////////
void bits() {
    temp_num = number;

    if (temp_num>0) {
        length++;
        b1=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b2=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b3=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b4=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b5=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b6=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b7=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b8=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b9=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b10=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b11=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b12=temp_num&1;
        temp_num= temp_num>>1;
    }
    if (temp_num>0) {
        length++;
        b13=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b14=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b15=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b16=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b17=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b18=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b19=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b20=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b21=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b22=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b23=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b24=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b25=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b26=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b27=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b28=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b1=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b29=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b30=temp_num&1;
        temp_num= temp_num>>1;
    }
    if (temp_num>0) {
        length++;
        b31=temp_num&1;
        temp_num= temp_num>>1;
    }

    if (temp_num>0) {
        length++;
        b32=temp_num&1;
        temp_num= temp_num>>1;
    }


}


int law1() {

    if (number & 0b1 == 1)
        return 1;
    else
        return 0;


}

int law2() {

    total = b1+b2+b3+b4+b5+b6+b7+b8+b9+b10+b11+b12+b13+b14+b15+b16+b17+b18+b19+b20+b21+b22+b23+b24+b25+b26+b27+b28+b29+b30+b31+b32;

    if (total<=2)
        return 0;
    else if  (total%3==0 && total!=3)
        return 0;
    else if (total%4==0 && total!=4)
        return 0;
    else if (total%5==0 && total!=5)
        return 0;
    else if (total%6==0 && total!=6)
        return 0;
    else if (total%7==0 && total!=7)
        return 0;
    else if (total%8==0 && total!=8)
        return 0;
    else if (total%9==0 && total!=9)
        return 0;
    else if (total%10==0 && total!=10)
        return 0;
    else if (total%11==0 && total!=11)
        return 0;
    else if (total%12==0 && total!=12)
        return 0;
    else if (total%13==0 && total!=13)
        return 0;
    else if (total%14==0 && total!=14)
        return 0;
    else if (total%15==0 && total!=15)
        return 0;
    else if (total%16==0 && total!=16)
        return 0;
    else if (total%17==0 && total!=17)
        return 0;
    else if (total%18==0 && total!=18)
        return 0;
    else if (total%19==0 && total!=19)
        return 0;
    else if (total%20==0 && total!=20)
        return 0;
    else if (total%21==0 && total!=21)
        return 0;
    else if (total%22==0 && total!=22)
        return 0;
    else if (total%23==0 && total!=23)
        return 0;
    else
        return 1;


}


int law3() {

    if (length==32) {
        rev_bit=rev_bit+b1;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b20;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b21;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b22;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b23;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b24;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b25;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b26;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b27;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b28;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b29;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b30;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b31;
        rev_bit = rev_bit*10;
        rev_bit=rev_bit+b32;

    }
    if (length == 31) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b20;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b21;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b22;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b23;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b24;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b25;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b26;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b27;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b28;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b29;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b30;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b31;

    }
     if (length == 30) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
         rev_bit=rev_bit+b4;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b5;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b6;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b7;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b8;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b9;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b10;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b11;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b12;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b13;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b14;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b15;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b16;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b17;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b18;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b19;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b20;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b21;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b22;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b23;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b24;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b25;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b26;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b27;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b28;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b29;
         rev_bit= rev_bit*10;
         rev_bit=rev_bit+b30;

    }
    if (length == 29) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b20;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b21;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b22;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b23;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b24;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b25;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b26;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b27;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b28;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b29;

    }

    if (length == 28) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b20;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b21;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b22;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b23;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b24;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b25;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b26;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b27;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b28;

    }
    if (length == 27) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b20;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b21;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b22;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b23;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b24;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b25;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b26;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b27;

    }
    if (length == 26) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b20;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b21;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b22;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b23;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b24;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b25;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b26;

    }
    if (length == 25) {

        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b20;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b21;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b22;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b23;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b24;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b25;

    }
    if ( length == 24) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b20;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b21;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b22;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b23;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b24;
    }
    if (length == 23) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b20;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b21;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b22;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b23;

    }
    if (length == 22) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b20;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b21;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b22;

    }
    if ( length == 21 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b20;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b21;

    }
    if ( length == 20 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b20;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b21;

    }
    if (length == 20 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b20;

    }
    if (length == 19 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b19;

    }
    if (length == 18 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b18;
    }
    if ( length == 17 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b17;

    }
    if ( length == 16 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b16;
    }
    if ( length == 15 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b15;
    }
    if ( length == 14 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b14;
    }
    if ( length == 13 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b13;
    }
    if ( length == 12 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b12;
    }
    if ( length == 11 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b11;
    }
    if ( length == 10 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b10;
    }
    if ( length == 9 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b9;
    }
    if ( length == 8 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b8;
    }
    if ( length == 7 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b7;
    }
    if ( length == 6 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b6;
    }
    if (length == 5 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b5;
    }
    if (length == 4) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b4;
    }
    if (length == 3 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b3;
    }
    if (length == 2 ) {
        rev_bit=rev_bit+b1;
        rev_bit= rev_bit*10;
        rev_bit=rev_bit+b2;
    }
    if (length == 1) {
        rev_bit=rev_bit+b1;
    }

    int real_bits=0;
    real_bits = real_bits +b32;
    real_bits = real_bits *10;
    real_bits = real_bits+b31;
    real_bits = real_bits*10;
    real_bits = real_bits+b30;
    real_bits = real_bits*10;
    real_bits = real_bits+b29;
    real_bits = real_bits*10;
    real_bits = real_bits+b28;
    real_bits = real_bits*10;
    real_bits = real_bits+b27;
    real_bits = real_bits*10;
    real_bits = real_bits+b26;
    real_bits = real_bits*10;
    real_bits = real_bits+b25;
    real_bits = real_bits*10;
    real_bits = real_bits+b23;
    real_bits = real_bits*10;
    real_bits = real_bits+b22;
    real_bits = real_bits*10;
    real_bits = real_bits+b21;
    real_bits = real_bits*10;
    real_bits = real_bits+b20;
    real_bits = real_bits*10;
    real_bits = real_bits+b19;
    real_bits = real_bits*10;
    real_bits = real_bits+b18;
    real_bits = real_bits*10;
    real_bits = real_bits+b17;
    real_bits = real_bits*10;
    real_bits = real_bits+b16;
    real_bits = real_bits*10;
    real_bits = real_bits+b15;
    real_bits = real_bits*10;
    real_bits = real_bits+b14;
    real_bits = real_bits*10;
    real_bits = real_bits+b13;
    real_bits = real_bits*10;
    real_bits = real_bits+b12;
    real_bits = real_bits*10;
    real_bits = real_bits+b11;
    real_bits = real_bits*10;
    real_bits = real_bits+b10;
    real_bits = real_bits*10;
    real_bits = real_bits+b9;
    real_bits = real_bits*10;
    real_bits = real_bits+b8;
    real_bits = real_bits*10;
    real_bits = real_bits+b7;
    real_bits = real_bits*10;
    real_bits = real_bits+b6;
    real_bits = real_bits*10;
    real_bits = real_bits+b5;
    real_bits = real_bits*10;
    real_bits = real_bits+b4;
    real_bits = real_bits*10;
    real_bits = real_bits+b3;
    real_bits = real_bits*10;
    real_bits = real_bits+b2;
    real_bits = real_bits*10;
    real_bits = real_bits+b1;

    if (real_bits == rev_bit)
        return 0;
    else
        return 1;


}