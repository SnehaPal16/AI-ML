#include<iostream>
using namespace std;

int x=0,y=0,n,i;
void move(char c[],int n)
{
	for(i=0;i<n;i++)
	{
		if(c[i]=='u')
	{
		y++;
	}
	else if(c[i]=='d')
	{
		y--;
	}
	else if(c[i]=='l')
	{
		x--;
	}
	else
	{
		x++;
	}
	}
	cout<<x<<y;
}

int main()
{
	
	char *c;
	cout<<"\nenter number of movements :";
	cin>>n;
	c=new char[n];
	cout<<"\nenter movements :";
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	move(c,n);
	delete [] c;
	return 0;
}
