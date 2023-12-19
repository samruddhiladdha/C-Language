#include<iostream>
using namespace std;

int main()
{
	int l,b;
	cout<<"Length:";
	cin>>l;
	
	cout<<"Breadth:";
	cin>>b;
	
	int Area=l*b;
	cout<<"Area of rectangle:";
	cout<<Area;
	
	int Perimeter=2*(l+b);
	cout<<"\nPerimeter of rectangle:";
	cout<<Perimeter;
	
	return 0;
}
