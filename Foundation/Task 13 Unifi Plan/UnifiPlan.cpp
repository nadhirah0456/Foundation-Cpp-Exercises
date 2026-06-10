// C++ program to illustrate
// Use single-line comment
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i,package,total,counter1=0,counter2=0,counter3=0,counter4=0,counter5=0;
	string house;
	
	cout<<"/**********************************************"; // Executes 1 time
	cout<<"\n\nAUTHOR: IRDINA NADHIRAH BINTI BAHANUDDIN"; // Executes 1 time
	cout<<"\nDATE: 26/12/2022"; // Executes 1 time
	cout<<"\nPURPOSE: CONDUCTED A SURVEY TO 10 HOUSES"; // Executes 1 time
	cout<<"\n\n**********************************************/"; // Executes 1 time
	cout<<"\n\n-- UNIFI SDN.BHD. COMPANY --"; // Executes 1 time
	cout<<"\n\nChoose the package that you are going to subscribe: \n\nRM 89/month\n100mbps\n\nRM 129/month\n300mbps\n\nRM 159/month\n500mbps\n\nRM 209/month\n800mbps\n\nRM 0\nNONE"; // Executes 1 time
	
	// Outer loop
	for(i=1;i<=10;i++)
	{
		cout<<"\n\nAddress: House "; // Executes 10 times
		cin>>house;
		cout<<"\nPackage that you want (89 or 129 or 159 or 209 or 0): "; //Executes 10 times
		cin>>package;
		if(package == 89)
			{
			// User is choosing package 89
			total=package/89;
			counter1++;
			}
			else if(package == 129)
			{
			// User is choosing package 129
			total=package/129;
			counter2++;
			}
			else if(package == 159)
			{
			// User is choosing package 159
			total=package/159;
			counter3++;
			}
			else if(package == 209)
			{
			// User is choosing package 209
			total=package/209;
			counter4++;
			}
			else if(package == 0)
			{
			// User is choosing NONE
			total=package+1;
			counter5++;
			}
	}
	
	cout<<"\n\nTotal:\nPackage 89: "<<counter1; // Count the number for package 89
	cout<<"\nPackage 129: "<<counter2; // Count the number for package 129
	cout<<"\nPackage 159: "<<counter3; // Count the number for package 159
	cout<<"\nPackage 209: "<<counter4; // Count the number for package 209
	cout<<"\nNot interested: "<<counter5; // Count the number for 0
	
	return 0;
}
