/******************************************************************************************
AUTHOR: IRDINA NADHIRAH AND JANNAH
DATE: 30/1/2023
PURPOSE: RUN A C++ PROGRAM DECLARED IN DIFFERENT FUNCTION, AND ONLY USE ONE MAIN FUNCTION
******************************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

// display a number
void displayNum(int n1, int n2)
{
    cout << "\nYou've entered number 1 is " << n1
         << " and number 2 is " << n2 << '.';
}

// display bigger number
void displayBig(int n1, int n2)
{
    if (n1 > n2)
    {
        cout << "\n\nThe larger number is number 1 which is " << n1 << '.';
    }
    else if (n2 > n1)
    {
        cout << "\n\nThe larger number is number 2 which is " << n2 << '.';
    }
    else
    {
        cout << "\n\nThese 2 numbers are equal.";
    }
}

// display power
int displayPower(int n1, int n2)
{
    int power = (int)pow(n1, n2);
    cout << "\n\n" << n1 << " to the power of " << n2 << " is " << power << '.';
    return power;
}

// calculator operation
int displayOperation(int n1, int n2, int op)
{
    int result = 0;

    if (op == 1)
    {
        result = n1 + n2;
        cout << "\nResult of number " << n1 << " and number " << n2 << " is " << result << '.';
    }
    else if (op == 2)
    {
        result = n1 - n2;
        cout << "\nResult of number " << n1 << " and number " << n2 << " is " << result << '.';
    }
    else if (op == 3)
    {
        result = n1 * n2;
        cout << "\nResult of number " << n1 << " and number " << n2 << " is " << result << '.';
    }
    else if (op == 4)
    {
        if (n2 != 0)
        {
            result = n1 / n2;
            cout << "\nResult of number " << n1 << " and number " << n2 << " is " << result << '.';
        }
        else
        {
            cout << "\nCannot divide by zero!";
        }
    }
    else
    {
        cout << "\nPlease try again!";
    }

    return result;
}

// farewell message
void displayFarewell()
{
    cout << "\n\nThank you for using this program!";
}

// main function
int main()
{
    int num1, num2, operation;

    cout << "\t\t______________________________________________________________"
            "__________________________________________________";

    cout << "\n\n\t\t\tHere is our work on Assignment 2, Programming II. My name is Irdina and my partner's name is Jannah!";

    cout << "\n\t\t______________________________________________________________"
            "__________________________________________________";

    cout << "\n\nLet's try our program:";

    cout << "\n\nEnter number 1: ";
    cin >> num1;

    cout << "\nEnter number 2: ";
    cin >> num2;

    displayNum(num1, num2);
    displayBig(num1, num2);
    displayPower(num1, num2);

    cout << "\n\nChoose ONE Operator:"
         << "\n(1) ADDITION"
         << "\n(2) SUBTRACTION"
         << "\n(3) MULTIPLICATION"
         << "\n(4) DIVISION";

    cout << "\n\nOperation to perform: ";
    cin >> operation;

    displayOperation(num1, num2, operation);

    displayFarewell();

    return 0;
}
