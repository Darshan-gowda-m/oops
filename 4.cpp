#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char line[50];
	int word=0,digit=0,ch=0;
	clrscr();
	cout<<"enter the line \n";
	gets(line);
	int len=strlen(line);
	for(int i=0;i<len;i++)
	{
		if(isalpha(line[i]))
			ch++;
		else if(isalpha(line[i]))
			digit++;
		if(isspace(line[i])&&!isspace(line[i]-1))
			word++;
	}
	if(!isspace(line[len-1]))
		word++;
	cout<<"character="<<ch<<endl;
	cout<<"digits="<<digit<<endl;
	cout<<"words="<<word<<endl;
	getch();
}