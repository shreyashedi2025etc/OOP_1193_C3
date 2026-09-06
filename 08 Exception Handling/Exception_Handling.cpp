#include <iostream>
using namespace std;

int main()
{
    // Display name and PRN
    cout << "Name: Shreya Shedi" << endl;
    cout << "PRN: B25ET1193" << endl;

    int a, b, div;

    // Take two numbers from user
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        // Check for division by zero
        if(b == 0)
            throw b;

        // Perform division
        div = a / b;

        cout << "Division = " << div;
    }
    catch(int x)
    {
        // Display error message
        cout << "Cannot divide by zero";
        cout << "\nError number = " << x;
    }

    // This will execute at the end
    cout << "\nAt the end of the program/main function";

    return 0;
}
