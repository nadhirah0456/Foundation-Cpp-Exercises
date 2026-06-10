#include <iostream>
using namespace std;
int main()
{
	int Chicken;
	int Duck;
	int Cow;
	int Total_legs_of_chicken;
	int Total_legs_of_duck;
	int Total_legs_of_cow;
	
	cout<<"Sila masukkan jumlah ayam = ";
	cin>>Chicken;
	
	cout<<"\nSila masukkan jumlah itik = ";
	cin>>Duck;
	
	cout<<"\nSila masukkan jumlah lembu = ";
	cin>>Cow;
	
	Total_legs_of_chicken=2*Chicken;
	Total_legs_of_duck=2*Duck;
	Total_legs_of_cow=4*Cow;
	
	cout<<"\nJumlah kaki ayam adalah "<<Total_legs_of_chicken;
	cout<<"\nJumlah kaki itik adalah "<<Total_legs_of_duck;
	cout<<"\nJumlah kaki lembu adalah "<<Total_legs_of_cow;
	
	return 0;
}
