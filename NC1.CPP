// w a p to calculate the area of circle ,rectangle,and square using function overloding //
#include<iostream.h>
#include<conio.h>
void area (int);
void area (int,int);
void areaa(int);
void main()
{
	int r,l,b,s;
	clrscr();
	cout<<"enter radius of circle:";
	cin>>r;
	area(r);

	cout<<"\n\n enter length of rectangle:";
	cin>>l;
	cout<<"enter breadth of rectangle:";
	cin>>b;
	area(l,b);

	cout<<"\n \n enter side of square :";
	cin>>s;
	area(s);
	getch();
}

void area(int a)
{
cout<<"area of circle is:"<<3.14<<a*a;
}

void area(int a,int b)
{
	cout<<"area of rectangle is"<<a*b;
}

void areaa(int a)
{
	cout<<"area of square is :"<<a*a;
}

