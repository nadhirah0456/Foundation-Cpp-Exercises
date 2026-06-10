#include <iostream>
using namespace std;

//declaring a function
int add(int n1,int n2,int n3)
{
	return (n1+n2+n3);
}

int main()
{
	int num1=9;
	int num2=8;
	int num3=5;
	int sum;
	
	sum=add(9,8,5);
	
	cout<<"The total of all the three numbers is "<<sum;
	
	return 0;
}
