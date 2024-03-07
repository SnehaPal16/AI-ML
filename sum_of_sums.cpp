#include<iostream>
using namespace std;

int main()
{
	int num,digit,temp,sum=0;
	cout<<"\nenter number:";
	cin>>num;
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	cout<<"sum is "<<sum;
	
	return 0;
}
