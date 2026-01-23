//Muhammad Awais Ali
//25i-2587 DS-B


#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"The Sphinx's Code is ready. You have 5 tries."<<endl;
        int code=1356,b1,b2,b3,b4;
        b1=code%10;code/=10;
        b2=code%10;code/=10;
        b3=code%10;code/=10;
        b4=code%10;code/=10;

        int num,a1,a2,a3,a4;
        for(int i = 1 ; i<=5 ; i++)
        {
            int bp=0, wp=0;
            string bp_summary, wp_summary;

            cout<<"Guess "<<i<<" (4 digits 1-6): ";
            cin>>num;
            if(num<9999 && num>999)
            {
                a1=num%10;num/=10;
                a2=num%10;num/=10;
                a3=num%10;num/=10;
                a4=num;

                if((a1>0 && a1<7) && (a2>0 && a2<7) && (a3>0 && a3<7) && (a4>0 && a4<7))
                {
                    if(a1==b1)
                    {
                        bp++;
                        bp_summary= to_string(a1) + " is at poistion 1,";
                    }
                    if(a2==b2)
                    {
                        bp++;
                        bp_summary+= to_string(a2) + " is at postition 2, ";
                    }
                    if(a3==b3)
                    {
                        bp++;
                        bp_summary+= to_string(a3) + " is at postition 3, ";
                    }
                    if(a4==b4)
                    {
                        bp++;
                        bp_summary+= to_string(a4) + " is at postition 4, ";
                    }


                    if(a1==b2 || a1 == b3 || a1==b4)
                    {
                        wp++;
                        wp_summary = to_string(a1) + ", ";
                    }
                    if(a2==b1 || a2==b3 || a2==b4)
                    {
                        wp++;
                        wp_summary += to_string(a2) + ", ";
                    }
                    if(a3==b1 || a3==b2 || a4==b3)
                    {
                        wp++;
                        wp_summary += to_string(a3) + ", ";
                    }
                    if(a4==b1 || a4==b2 || a4==b3)
                    {
                        wp++;
                        wp_summary += to_string(a4) + ", ";
                    }
                    

                    if(bp<4)
                    {
                        if(bp>0)
                        {   
                            cout<<"Black Pegs: "<<bp<<"(The "<<bp_summary<<" )"<<endl;
                        }
                        else 
                        {
                            cout<<"Black pegs: "<<bp;
                        }
                        if(wp>0)
                        {
                            cout<<"White Pegs: "<<wp<<"(The "<<wp_summary<<"is in the code but wrong spot"<<endl;
                        }
                        else
                        {
                            cout<<"White pegs: "<<wp;
                        }
                    }
                    else if(bp==4)
                    {
                        cout<<"Black Pegs: 4"<<endl<<"You Cracked the code!"<<endl;
                        break;
                    }

                }
                else
                {
                    cout<<"Value out of range entered!. Failed."<<endl;
                    break;                 
                }


            }
            else
            {
                cout<<"Enter a valid 4 digit number!. Game failed."<<endl;
                break;
            }

        }

}