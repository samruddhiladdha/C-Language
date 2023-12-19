#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter first no.:";
	cin>>a;
	cout<<"Enter the second no.:";
	cin>>b;
	int c=a%10;
	cout<<"Last digit of first no.:"<<c;
	int d=b%10;
	cout<<"\nLast digit of second no.:"<<d;	
	int sum=c+d;
	cout<<"\nSum:"<<sum;
	
	return 0;
}
