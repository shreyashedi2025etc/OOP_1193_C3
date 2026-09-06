#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}
int ncr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
void pascalTriangle(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }
        // Print values
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    pascalTriangle(rows);
    return 0;
}
