#include <iostream>
#include <cmath>
using namespace std;

//display a number
void displayNum(int n1,int n2)
{
    cout<<"\nYou've entered number 1 is "<<n1<<" and number 2 is "<<n2<<'.';
}

int displayBig(int n1,int n2)
{
    if (n1>n2)
    {
        cout<<"\n\nThe larger number is number 1 which is "<<n1<<'.';
    }
    else if (n2>n1)
    {
        cout<<"\n\nThe larger number is number 2 which is "<<n2<<'.';
    }
    else 
    {
        cout<<"\n\nThese 2 numbers is equal.";
    }
}

int displayPower(int n1,int n2)
{
	int power;
	power=pow(n1,n2);
	return power;
}

int displayOperation(int n1,int n2)
{
	int result;
	
	switch(result)
	{
		case 1:cout<<"\nResult of number "<<n1<<" and number "<<n2<<" is "<<n1+n2<<'.';
			break;
		case 2:cout<<"\nResult of number "<<n1<<" and number "<<n2<<" is "<<n1-n2<<'.';
			break;
		case 3:cout<<"\nResult of number "<<n1<<" and number "<<n2<<" is "<<n1*n2<<'.';
			break;
		case 4:cout<<"\nResult of number "<<n1<<" and number "<<n2<<" is "<<n1/n2<<'.';
			break;
		default:cout<<"\nPlease try again!";
	}
	
	return result;
}

void displayFarewell()
{
	cout<<"\n\nThank you for using this program!";
}

int main()
{
    int num1;
    int num2;
    int po;
    int operation;
    
    cout<<"Here is our works on Assignment 2, Programming II. My name is Irdina and my partner's name is Jannah!";
    cout<<"\n\nLet's try our program:";
    cout<<"\n\nEnter number 1: ";
    cin>>num1;
    cout<<"\nEnter number 2: ";
    cin>>num2;
    
    //calling the function 
    displayNum(num1,num2);
    displayBig(num1,num2);
    
    po=pow(num1,num2);
    cout<<"\n\n"<<num1<<" to the power of "<<num2<<" is "<<po<<'.';
    
    cout<<"\n\nChoose ONE Operator:"<<"\n(1)ADDITION"<<"\n(2)SUBSTRACTION"<<"\n(3)MULTIPLICATION"<<"\n(4)DIVISION";
    cout<<"\n\nOperation to perform: ";
    cin>>operation;
    
    displayOperation(num1,num2);
    displayFarewell();
    
    
    
    return 0;
}

