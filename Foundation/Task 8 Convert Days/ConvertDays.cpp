#include <iostream>
using namespace std;
int main()
{
	int Days;
	int No_of_a_years;
	int No_of_a_weeks;
	int No_of_a_days;
	
	cout<<"Sila masukkan bilangan hari = ";
	cin>>Days;
	
	No_of_a_years=Days/365;
	No_of_a_weeks=(Days%365)/7;
	No_of_a_days=(Days%365)%7;
	
	cout<<"\nJumlah tahun adalah "<<No_of_a_years;
	cout<<"\nJumlah minggu adalah "<<No_of_a_weeks;
	cout<<"\nJumlah hari adalah "<<No_of_a_days;
	
	return 0;

}
