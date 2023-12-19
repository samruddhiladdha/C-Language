#include<iostream>
using namespace std;

int main()
{
	int r;
	cout<<"Enter radius of circle";
	cin>>r;
	
	int area=3.14*r*r;
	cout<<"Area of Circle:"<<area;
	
	int circumference=2*3.14*r;
	cout<<"Circumference of Circle:"<<circumference;
	
	return 0;
}
