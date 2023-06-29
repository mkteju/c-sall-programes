// an electio is consted by file candidate  the candidates are numbered 1to 5 and the voting is done by marking the candidate number on the ballot paper write program to read the ballots and count the vote

#include<iostream.h>
#include<conio.h>

class e1
{
	int array[5],spoilt;
	int ch;

	public:
	void set();
	void count(int);
	void disp(int);
};

void e1::set()
{
	int i;
	for(i=0;i<5;i++)
	{
		array[i]=0;
		spoilt=0;
	}
}

void e1::count(int n)
{
	switch(n)
	{
		case 1:
		array[1]++;
		break;

		case 2:
		array[2]++;
		break;

		case 3:
		array[3]++;
		break;

		case 4:
		array[4]++;
		break;

		case 5:
		array[5]++;
		break;

		default:
		spoilt++;
		break;
	}
}

void e1::disp(int n)
{
if(n<=5)
cout<<array[n];
else
cout<<spoilt;
}

void main()
{
	int ch;
	char a='y';
	e1 ob1;
	clrscr();
	cout<<"\n1.bjp";
	cout<<"\n2. con";
	cout<<"\n3.aap";
	cout<<"\n4.rjd";
	cout<<"\n5.ltd";

ob1.set();

	do
	{
		cout<<"\n enter number:";
		cin>>ch;
		ob1.disp(ch);
		ob1.count(ch);
		cout<<"\n y=votes ||n=exite:";
		cin>>a;
	}
while(a=='y'||a=='y');
getch();
}