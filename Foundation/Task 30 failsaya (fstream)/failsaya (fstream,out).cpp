#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream file;
	
	file.open("failsaya.dat",ios::out);
	file<<"Hello";                                         
	file<<"\nLet learn file better!";
	
	/*   @
	
	if(file.is_open())
	{
		file<<"Hello";
		file<<"\nLet learn file better!";
		file.close();
 	}
 	*/
	file.close();
	
	
	return 0;
}
