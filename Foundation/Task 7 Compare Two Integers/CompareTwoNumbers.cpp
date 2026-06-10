#include <iostream>
using namespace std;
int main()
{
	int Number_1;
	int Number_2;
	
	cout<<"Please enter the first number = ";
	cin>>Number_1;
	cout<<"\nPlease enter the second number = ";
	cin>>Number_2;
	
	if (Number_1>Number_2)
		cout<<"\n"<<Number_1<<" is larger";
	else if (Number_1<Number_2)
		cout<<"\n"<<Number_2<<" is larger";
	else if (Number_1=Number_2)
		cout<<"\nThese numbers are equal";
	else
		cout<<"\nInvalid input!";
		
	return 0;
}
