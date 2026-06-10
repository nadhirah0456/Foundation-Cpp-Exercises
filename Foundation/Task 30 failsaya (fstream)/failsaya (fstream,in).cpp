#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	fstream file;
	
	file.open("failsaya.txt",ios::in);
	
	string line;
	
	if(file.is_open())
	{
		while (getline(file,line)) //getline(cin,age)
		{
			cout<<line<<endl;
		}
		file.close();
	}
	return 0;
}
