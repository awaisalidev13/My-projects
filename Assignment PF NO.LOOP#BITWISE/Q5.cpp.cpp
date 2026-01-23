// Muhammad Awais Ali
// 25i-2587 DS-B


#include <iostream>
using namespace std;

int test1();
int test2();
int test3();

char ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10;

int main() {



    cout<<"Enter security Access code of length 10 :";
    cin>>ch1>>ch2>>ch3>>ch4>>ch5>>ch6>>ch7>>ch8>>ch9>>ch10;





    if (test1() == 1) {
        if (test2()==1) {
            if (test3()==1) {
                cout<<"ACCESS GRANTED";
            }
            else {
                cout<<"Enter a valid token. No digit entered";
            }

        }
        else {
            cout<<"Enter valid token. No lower case letter";
        }
    }
    else {
        cout<<"Enter a valid token. NO upper case letter";
    }
}


int test1() {
    if (  (ch1>=65 && ch1<=90) || (ch2>=65 && ch2<=90) || (ch3>=65 && ch3<=90)  || (ch4>=65 && ch4<=90) || (ch5>=65 && ch5<=90) || (ch6>=65 && ch6<=90) || (ch7>=65 && ch7<=90) || (ch8>=65 && ch8<=90) || (ch9>=65 && ch9<=90) || (ch10>=65 && ch10<=90)  ){

        return 1;
    }
    else
        return 0;
}


int test2() {
    if (  (ch1>=97 && ch1<=122) || (ch2>=97 && ch2<=122) || (ch3>=97 && ch3<=122)  || (ch4>=97 && ch4<=122) || (ch5>=97 && ch5<=122) || (ch6>=97 && ch6<=122) || (ch7>=97 && ch7<=122) || (ch8>=97 && ch8<=122) || (ch9>=97 && ch9<=122) || (ch10>=97 && ch10<=122)  ) {
        return 1;
    }
    else
        return 0;


}


int test3() {
    if (  (ch1>=48 && ch1<=57) || (ch2>=48 && ch2<=57) || (ch3>=48 && ch3<=57)  || (ch4>=48 && ch4<=57) || (ch5>=48 && ch5<=57) || (ch6>=48 && ch6<=57) || (ch7>=48 && ch7<=57) || (ch8>=48 && ch8<=57) || (ch9>=48 && ch9<=57) || (ch10>=48 && ch10<=57)  ) {
        return  1;
    }
    else
        return 0;

}
