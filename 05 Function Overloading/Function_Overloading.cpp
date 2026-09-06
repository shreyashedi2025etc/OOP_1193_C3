#include <iostream>
using namespace std;

// Class for function overloading
class Calculate
{
public:

    // Add three integer numbers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // Add three float numbers
    float add(float x, float y, float z)
    {
        return x + y + z;
    }
};

int main()
{
    cout << "Name: Shreya Shedi" << endl;
    cout << "PRN: B25ET1193" << endl;
    // Create object of Calculate class
    Calculate sum;

    // Declare integer variables
    int a, b, c;

    // Declare float variables
    float x, y, z;

    // Take three integer values
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    // Take three float values
    cout << "Enter three float values: ";
    cin >> x >> y >> z;

    // Call add function for integers
    cout << "Addition of three integers: " << sum.add(a, b, c) << endl;

    // Call add function for float values
    cout << "Addition of three float values: " << sum.add(x, y, z) << endl;

    return 0;
}
