#include <iostream>

using namespace std;

int main()
{
    int Number_of_hours;
    int Day_per_week;
    float Salary_per_hour;
    float Bonus=0.023;
    float Weekly_salary;
    float Weekly_salary_with_bonus;
    
    cout<<"Sila masukkan bilangan jam bekerja = ";
    cin>>Number_of_hours;
    
    cout<<"\nSila masukkan bilangan hari bekerja setiap minggu = ";
    cin>>Day_per_week;
    
    cout<<"\nSila masukkan jumlah gaji setiap jam = ";
    cin>>Salary_per_hour;
    
    Weekly_salary=(Number_of_hours*Day_per_week)*Salary_per_hour;
            Weekly_salary_with_bonus=(((Number_of_hours*Day_per_week)*Salary_per_hour)*0.023)+((Number_of_hours*Day_per_week)*Salary_per_hour);
    
    cout<<"\nJumlah gaji setiap minggu anda adalah RM"<<Weekly_salary;
    
    cout<<"\nJumlah gaji setiap minggu dengan bonus anda adalah  RM"<<Weekly_salary_with_bonus;
    
    return 0;
}








