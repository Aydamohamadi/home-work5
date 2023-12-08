#include <iostream>
using namespace std;
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<< "Enter your salary (Toman):  ";
	double a;
	double b= 0;
	cin >> a;
	
	if(a<6000000)
	{
	 	b=a;
	}
	 if(6000000<=a && a<8000000)
	{
		b= a-(a*5/100); 
	}
	
	 if(8000000<=a && a <10000000)
	{
		b=a-(a*10/100);
	}
	 if(10000000<=a && a<14000000)
	{
		b=a-(a*15/100);
	}
	 if(14000000<=a && a<18000000)
	{
		b= a-(a*20/100);
	}
	 if(18000000<=a && a<25000000)
	{
		b = a-(a*25/100);
	}
	if(25000000<=a)
	{
		b=a-(a*35/100);
	}
	cout<<b;
	return 0;
}