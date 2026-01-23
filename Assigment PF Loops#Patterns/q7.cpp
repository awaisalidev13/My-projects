//Muhammad Awais Ali
//25i-2587 DS-B


#include <iostream>


using namespace std;

int main()
{
	int num,base;
	
	string str,result=" ";
	
	
	cout<<"Enter number: ";
	cin>>num;
	cout<<"Enter Base: ";
	cin>>base;
	
	while(num>0)
	{
		switch(num%base)
		{
			
			case 0: str = "0";
					result = str + result;
					break;
			case 1: str = "1";
					result = str + result;
					break;
			case 2: str = "2";
					result = str + result;
					break;
			case 3: str = "3";
					result = str + result;
					break;
			case 4: str = "4";
					result = str + result;
					break;
			case 5: result = "5" + result;
					break;
			case 6: result = "6" + result;
			        break;
			case 7: result = "7" + result;
					break;
			case 8: result = "8" + result;
					break;
			case 9: result = "9" + result;
					break;
			case 10:result = "A" + result;
					break;
			case 11:result = "B" + result;
					break;
			case 12:result = "C" + result;
					break;
			case 13:result = "D" + result;
					break;
			case 14:result = "E" + result;
					break;
			case 15:result = "F" + result;
					break;
			case 16:result = "G" + result;
					break;
			case 17:result = "H" + result;
					break;
			case 18:result = "I" + result;
					break;
			case 19:result = "J" + result;
					break;
			case 20:result = "K" + result;
					break;
			case 21:result = "L" + result;
					break;
			case 22:result = "M" + result;
					break;
			case 23:result = "N" + result;
					break;
			case 24:result = "0" + result;
					break;
			case 25:result = "P" + result;
					break;
			case 26:result = "Q" + result;
					break;
			case 27:result = "R" + result;
					break;
			case 28:result = "S" + result;
					break;
			case 29:result = "T" + result;
					break;
			case 30:result = "U" + result;
					break;
			case 31:result = "V" + result;
					break;
			case 32:result = "W" + result;
					break;
			case 33:result = "X" + result;
					break;
			case 34:result = "Y" + result;
					break;
			case 35:result = "Z" + result;
					break;
					
					
		}
		
		num/=base;
		
		
	}
	
	cout<<"result= "<<result;
}