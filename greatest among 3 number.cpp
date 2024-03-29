#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the first number:"<<endl;
	cin>>a;
	cout<<"enter the second number:"<<endl;
	cin>>b;
	cout<<"enter the third number:"<<endl;
	cin>>c;
	if((a>b)&&(a>c))
	{
		cout<<"greater no is %d:"<<a;
	}
	else if((b>a)&&(b>c))
	{
		cout<<"greater no is %d:"<<b;
	}
	else
	{
		cout<<"greater no is %d:"<<c;
	}
	
	
		
}