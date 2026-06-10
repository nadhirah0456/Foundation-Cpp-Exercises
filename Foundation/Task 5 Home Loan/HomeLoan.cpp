#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float Property_Price;
    float Down_Payment;
    int Housing_Loan_Period;
    float Interest_Rate;
    float Home_Loan_per_month;
    
    cout<<"Sila masukkan harga hartanah = ";
    cin>>Property_Price;
    
    cout<<"\nSila masukkan bayaran pendahuluan = ";
    cin>>Down_Payment;
    
    cout<<"\nSila masukkan tempoh pinjaman perumahan = ";
    cin>>Housing_Loan_Period;
    
    cout<<"\nSila masukkan kadar faedah = ";
    cin>>Interest_Rate;
    
    Home_Loan_per_month=((Property_Price-Down_Payment)*((Interest_Rate/12)*(pow(1+(Interest_Rate/12),(Housing_Loan_Period*12)))))/(pow(1+(Interest_Rate/12),(Housing_Loan_Period*12))-1);
    
    cout<<"\nJumlah pinjaman rumah sebulan anda adalah RM"<<Home_Loan_per_month;
    
    return 0;
}

