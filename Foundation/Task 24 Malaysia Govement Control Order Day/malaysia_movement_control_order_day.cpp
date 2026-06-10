#include <iostream>
using namespace std;
int main ()
{
    char mco_type;
    
    cout<<"Malaysia Movement Control Order";
    cout<<"\nChoose the list ( M/m - MCO or C/c - CMCO or R/r - RMCO): ";
    cin>>mco_type;
    
    if (mco_type == 'M' || mco_type == 'm')
    cout<<"\nYou choose MCO, we stay 46 days equivalent to "<<((46%365)/7)<<" week/s and "<<((46%365)%7)<<" day/s.";
    else if (mco_type == 'C' || mco_type == 'c')
       cout<<"\nYou choose CMCO, we stay 37 days equivalent to "<<((37%365)/7)<<" week/s and "<<((37%365)%7)<<" day/s.";
       else if (mco_type == 'R' || mco_type == 'r')
          cout<<"\nYou choose RMCO, we stay 295 days equivalent to "<<((295%365)/7)<<" week/s and "<<((295%365)%7)<<" day/s.";
          else
             cout<<"\nInvalid input!";
             
    return 0;
}

