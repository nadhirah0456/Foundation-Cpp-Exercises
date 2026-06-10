#include <iostream>

using namespace std;

int main()
{
    int area_of_the_lawn;
    int number_of_fertilizing_application;
    int number_trees_to_be_planted;
    float billing_amount;
    
    cout<<"Sila masukkan luas tanah: ";
    cin>>area_of_the_lawn;
    
    cout<<"\nSila masukkan bilangan pembajaan: ";
    cin>>number_of_fertilizing_application;
    
    cout<<"\nSila masukkan bilangan pokok yang ditanam: ";
    cin>>number_trees_to_be_planted,
    
    billing_amount=((area_of_the_lawn/5000)*35)+(30*number_of_fertilizing_application)+(50*number_trees_to_be_planted);
    
    cout<<"\nJumlah harga keseluruhan anda adalah: RM"<<billing_amount;
    
    return 0;
}

