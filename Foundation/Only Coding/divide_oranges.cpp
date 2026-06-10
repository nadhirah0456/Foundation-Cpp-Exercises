#include <iostream>

using namespace std;

int main()
{
    int Oranges;
    int Employee=4;
    int Oranges_owner;
    int Oranges_employee;
    int Oranges_juices;
    
    cout<<"Sila masukkan jumlah oren = ";
    cin>>Oranges;
    
    Oranges_owner=0.4*Oranges;
    Oranges_employee=(Oranges-Oranges_owner)/4;
    Oranges_juices=(Oranges-Oranges_owner)%4;
    
    cout<<"\nOren pemilik adalah "<<Oranges_owner;
    cout<<"\nSetiap oren pekerja dapat adalah "<<Oranges_employee;
    cout<<"\nBaki oren untuk membuat jus adalah "<<Oranges_juices;

    return 0;
}

