#include<iostream.h>
#include,conio.h>
#include<ctype.h>
#include<math.h>
extern "C"
{
	double math(double x)
	{
		return sqrt(x);
	}
}
void main()
{
	double x;
	clrscr();
	cout<<"Enter the number"<<endl;
	cin>>x;
	cout<<"square root of "<<x<<" is"<<math(x)<<endl;
	getch();
}