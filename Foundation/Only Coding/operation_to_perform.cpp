#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int operation;
    int answer;
    
    cout<<"Please type in first number: ";
    cin>>num1;
    
    cout<<"\nPlease type in second number: ";
    cin>>num2;
    
    cout<<"\nChoose the operation that you are going to perform: \n1 for ADDITION\n2 for SUBSTRACTION\n3 for MULTIPLICATION\n4 for DIVISION";
    
    cout<<"\nOperation to perform: ";
    cin>>operation;
    
    switch (operation)
    {
        case 1:cout<<"\nThe addition of "<<num1<<" and "<<num2<<" is "<<num1+num2;
                answer = num1 + num2;
               break;
        case 2:cout<<"\nThe substraction of "<<num1<<" and "<<num2<<" is "<<num1-num2;
               break;
        case 3:cout<<"\nThe multiplication of "<<num1<<" and "<<num2<<" is "<<num1*num2;
               break;
        case 4:cout<<"\nThe division of "<<num1<<" and "<<num2<<" is "<<num1/num2;
               break;
        default:cout<<"\nPlease try again!";
    }
    
    return 0;

}

