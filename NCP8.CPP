// write a program to illustrate the use of this pointer
#include<iostraem.h>
#include<conio.h>

class t
{
	int a;

	public:
	void setdata(int a)
	{
		this->a=a;
	}

	void disp()
	{
		cout<<a;
	}

};

void main()
{
t t1;
clrscr();
t1.setdata(23);
t1.disp();
getch();
}