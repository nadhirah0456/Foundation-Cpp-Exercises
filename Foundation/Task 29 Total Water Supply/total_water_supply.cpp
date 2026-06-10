#include <iostream>

using namespace std;

int main ()
{
    char code;
    double gallon_used;
    
    cout<<"Please enter your water supply categories (H - House or C - Commercial or I - Industrial): ";
    cin>>code;
    
    cout<<"\nPlease enter your gallon used water: ";
    cin>>gallon_used;
    
    if ((code == 'H' || code == 'h') && (gallon_used == 0))
    cout<<"\nYou have to pay RM5!";
    else if ((code == 'H' || code == 'h') && (gallon_used >= 1))
       cout<<"\nYou have to pay RM "<<5+(0.01*gallon_used);
       else if ((code == 'C' || code == 'c') && (gallon_used <= 4000))
          cout<<"\nYou have to pay RM "<<100;
          else if ((code == 'C' || code == 'c') && (gallon_used > 4000))
             cout<<"\nYou have to pay RM "<<100+((gallon_used-4000)*0.0025);
             else if ((code == 'I' || code == 'i') && (gallon_used < 4000000))
                cout<<"\nYou have to pay RM "<<1000;
                else if ((code == 'I' || code == 'i') && (4000000 >= gallon_used >= 10000000))
                   cout<<"\nYou have to pay RM "<<2000;
                   else if ((code == 'I' || code == 'i') && (gallon_used > 10000000))
                      cout<<"\nYou have to pay RM "<<3000;
                      else
                         cout<<"\nInvalid input!";
    
    return 0;
}

