#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream file;
	
	file.open("failsaya.txt");
	
	if(file.is_open())
	{
		file<<"Hello";
		file<<"\nLet learn file better!";
		file.close();
	}
	
	/*  @
	
	file<<"Hello";
	file<<"\nLet learn file better!";
	file.close();
	*/
	
	return 0;
}


