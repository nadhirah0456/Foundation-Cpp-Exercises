#include <iostream>

using namespace std;

int main()
{
    int length;
    int width;
    int area;
    int perimeter;
    
    cout<<"sila masukkan panjang=";
    cin>>length;
    
    cout<<"\n sila masukkan lebar=";
    cin>>width;
    
    area=length*width;
    perimeter=(2*length)+(2*width);
    
    cout<<"hasil luas="<<area;
    cout<<"\n hasil perimeter="<<perimeter;
    

    return 0;
}

