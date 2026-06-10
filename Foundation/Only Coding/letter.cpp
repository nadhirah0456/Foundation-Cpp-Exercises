#include <iostream>
using namespace std;
int main()
{
    char letter;
    
    cout<<"Enter a letter: ";
    cin>>letter;
    
    switch (letter)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':cout<<"It is a vowel letter";
             break;
    default:cout<<"It is a consonant";
            break;
    }
    return 0;

}

