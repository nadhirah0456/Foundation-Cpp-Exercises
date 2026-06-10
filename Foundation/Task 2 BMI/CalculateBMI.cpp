#include <iostream>
using namespace std;
int main()
{
	float Weight;
	float Height;
	float BMI;
	
	cout<<"Please enter your weight in kilogram = ";
	cin>>Weight;
	
	cout<<"\nPlease enter your height in metres = ";
	cin>>Height;
	
	BMI=Weight/(Height*Height);
	cout<<"\nYour BMI is "<<BMI;
	
	if (BMI<18.5 )
		cout<<"\nCategory Underweight";
	else if (BMI>=18.5 && BMI<=25)
		cout<<"\nCategory Normal";
	else if (BMI>=25.1 && BMI<=30)
		cout<<"\nCategory Overweight";
	else if (BMI>30)
		cout<<"\nCategory Obesity";
	else
		cout<<"\nInvalid input!";
		
	return 0;
}
