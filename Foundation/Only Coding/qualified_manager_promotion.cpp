#include <iostream>
using namespace std;
int main ()
{
    int year;
    int training;
    char position;
    
    cout<<"Are you qualified for a Manager promotion?";
    
    cout<<"\n\nEnter the number of year: ";
    cin>>year;
    
    cout<<"\nEnter the number of training received: ";
    cin>>training;
    
    cout<<"\nEnter your current post(J/j-Junior,S/s-Senior,A/a-Asst. Manager): ";
    cin>>position;
    
    if (training < 5)
    {
        if (year < 10)
        {
            if (position == 'J' || position == 'j' || position == 'S' || position == 's' || position == 'A' || position == 'a')
            {
                cout<<"\nNeed more training."<<"\nNeed more experience.";
            }
            else 
            {
                cout<<"\nBecome Assistant Manager first."<<"\nNeed more training."<<"\nNeed more experience";
            }
        }
    }
    else if (training >= 5)
    {
        if (year < 10)
        {
            if (position == 'J' || position == 'j' || position == 'S' || position == 's' || position == 'A' || position == 'a')
            {
                cout<<"\nNeed more experience.";
            }
        }
        else if (year >= 10)
        {
            if (position == 'A' || position == 'a')
            {
                cout<<"\nQualified to be promoted to Manager!";
            }
            else
            {
                cout<<"\nBecome Assistant Manager first.";
            }
        }
    }
    else 
    {
        cout<<"\nOpss you do not qualified!";
    }
    
    return 0;
}

