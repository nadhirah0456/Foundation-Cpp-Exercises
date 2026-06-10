#include <iostream>
using namespace std;
int main()
{
	int Numerical_grade;
	
	cout<<"What is your numerical grade ?\n=";
	cin>>Numerical_grade;
	
	if (Numerical_grade>=90 && Numerical_grade<=100)
		cout<<"\nGrade A";
	else if (Numerical_grade>=80 && Numerical_grade<=89)
		cout<<"\nGrade B";
	else if (Numerical_grade>=70 && Numerical_grade<=79)
		cout<<"\nGrade C";
	else if (Numerical_grade>=60 && Numerical_grade<=69)
		cout<<"\nGrade D";
	else if (Numerical_grade>=0 && Numerical_grade<=59)
		cout<<"\nGrade F";
	else
		cout<<"\nInvalid input";
		
	return 0;
}
