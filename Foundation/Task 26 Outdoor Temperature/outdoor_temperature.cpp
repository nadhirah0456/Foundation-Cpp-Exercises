#include <iostream>
using namespace std;
int main()
{
    float temperature;
    char weather;
    
    cout<<"Please enter your outdoor temperature in fahrenheit: ";
    cin>>temperature;
    
    cout<<"\nPlease enter is it raining/snowing (Y - yes or N - no): ";
    cin>>weather;
    
    if (weather == 'Y' || weather == 'y')
    { 
        if (temperature >= 80)
        {
            cout<<"\nYou should watch movie!";
        }
        else if (temperature < 80)
        {
            cout<<"\nYou should play raquetball!";
        }
        else if (temperature < 32)
        {
            cout<<"\nYou should go skiing!";
        }
        
    }
    else if (weather == 'N' || weather =='n')
    {
        if (temperature >= 80)
        {
            cout<<"\nYou should play beach volleyball!";
        }
        else if (temperature < 80)
        {
            cout<<"\nYou should go running!";
        }
        else if (temperature < 32)
        {
            cout<<"\nYou should go ice fishing!";
        }
    }
    else 
    {
        cout<<"Please try again!";
    }
    
    return 0;
}

