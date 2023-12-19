#include<iostream>
using namespace std;

int main()
{
	int eng,maths,bio,chem,phy;
	
	cout<<"Marks of eng:";
	cin>>eng;
	
	cout<<"Marks of maths:";
	cin>>maths;
	
	cout<<"Marks of bio:";
	cin>>bio;
	
	cout<<"Marks of chem:";
	cin>>chem;
	
	cout<<"Marks of phy:";
	cin>>phy;
	
	int total=eng+maths+bio+chem+phy;
	cout<<total;
	return 0;
}
