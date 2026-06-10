#include <iostream>
using namespace std;
int main()
{
	int people=3;
	int marbles=35;
	int marbles_per_person;
	int balance;
	
	marbles_per_person=(marbles-7)/people;
	balance=(marbles-7)%people;
	
	cout<<"guli setiap orang dapat="<<marbles_per_person;
	cout<<"\n baki="<<balance;
	
	return 0;
}
