#include <iostream>
using namespace std;
int main ()
{
    int adult_price=10;
    int children_price=5;
    int adult;
    int children;
    int payment;
    int balance;
    int total_amount;
    
    cout<<"Please enter the total of adult = ";
    cin>>adult;
    
    cout<<"\nPlease enter the total of children = ";
    cin>>children;
    
    total_amount=(adult*adult_price)+(children*children_price);
    
    cout<<"\nYour total amount of your ticket is RM"<<total_amount;
    
    cout<<"\nPlease enter the amount you pay = RM";
    cin>>payment;
    
    balance=payment-total_amount;
    
    cout<<"\nYour balance money is RM "<<balance;
    
    return 0;
}

