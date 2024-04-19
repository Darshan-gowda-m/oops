#include<iostream.h>
#include<conio.h>
double power(double n,int p=2)
{
	double res=1,i;
	for(i=0;i<p;i++)
	{
		res=res*n;
	}
	return res;
}
 main()
{
	double n,res;int p;
	clrscr();
	cout<<"enter the number"<<endl;
	cin>>n;
	cout<<"enter its powerr"<<endl;
	cin>>p;
	res=power(n,p);
	cout<<n<<"raised to power "<<p<<" is "<<res<<endl;
	res=power(n);
	cout<<n<<" raised to power 2 is "<<res<<endl;
	getch();
	return 0;
}