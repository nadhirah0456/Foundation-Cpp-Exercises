#include <iostream>

using namespace std;

int main()
{
    float Car_Price;
    float Down_Payment;
    int Loan_Period;
    float Interest_Rate;
    float Car_loan_per_month;
    
    cout<<"Sila masukkan harga kereta = ";
    cin>>Car_Price;
    
    cout<<"\nSila masukkan bayaran pendahuluan = ";
    cin>>Down_Payment;
    
    cout<<"\nSila masukkan tempoh pinjaman = ";
    cin>>Loan_Period;
    
    cout<<"\nSila masukkan kadar faedah = ";
    cin>>Interest_Rate;
    
    Car_loan_per_month=((((Car_Price-Down_Payment)*Interest_Rate)*Loan_Period)+(Car_Price-Down_Payment))/(Loan_Period*12);

    cout<<"\nJumlah pinjaman kereta sebulan anda adalah RM"<<Car_loan_per_month;
    
    return 0;
}

