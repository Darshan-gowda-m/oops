#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void check(char alpha,char &res)
{
	if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')
	{
		res=alpha-1;
		cout<<alpha<<" is a vowel and its predessor is "<<res<<endl;
	}
	else
	{
		res=alpha+1;
		cout<<alpha<<"  is a consonant and successor is"<<res<<endl;
	}
}
void main()
{
	char a,res;
	clrscr();
	cout<<"enter alphabet:";
	cin>>a;
	if(!isalpha(a))
	{
		cout<<"not a character\n";
	}
	else
	{
		check(a,res);
	}
	getch();
	return 0;
}