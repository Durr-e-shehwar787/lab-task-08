#include<iostream>
using namespace std;
int main()
{
	float num1,num2,num3;
	cout<<"enter 1st number:";
	cin>>num1;
	cout<<"enter 2nd number:";
	cin>>num2;
	cout<<"enter 3rd number:";
	cin>>num3;
	if(num1==num2&&num1==num3)
	{
		cout<<"equal";
	}
	else
	{
		cout<<"not equal";
	}
	return 0;
}