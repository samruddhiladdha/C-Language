#include<iostream>
using namespace std;
int main()
{
	int a=1234;
	int b=a%10;
	int c=a/10;
	a=c%10;
	int d=c/10;
	c=d%10;
	d=d/10;
	cout<<b<<"\n"<<a<<"\n"<<c<<"\n"<<d;
	
	int sum1=b+a;
	int sum2=c+d;
	
	int final=sum1*sum2;
	cout<<"\n"<<final;
	
	return 0;
}
