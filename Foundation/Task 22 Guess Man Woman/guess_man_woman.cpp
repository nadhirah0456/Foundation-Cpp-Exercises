#include <iostream>

using namespace std;

int main()
{
    int last_digit_ic;
    
    cout<<"Please enter your 4 last digit number in identification card = ";
    cin>>last_digit_ic;
    
    if ((last_digit_ic%2) == 1)
    cout<<"\nYou are MAN!";
    else
       cout<<"\nYou are WOMAN!";
       
    return 0;
}

