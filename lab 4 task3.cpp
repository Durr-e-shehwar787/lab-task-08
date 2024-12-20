#include<iostream>
using namespace std;
int main()
{
   	int n, i=1;
     int factorial = 1;
     cout << "Enter a positive integer: ";
    cin >> n;
     if(n<0)
    {
    	cout<<"invalid integer";
	}
	else
	{
		while(i<=n)
		{
			factorial=factorial*i;
			i++;
		}
		cout<<"factorial= "<<factorial;
	}
   return 0;
}