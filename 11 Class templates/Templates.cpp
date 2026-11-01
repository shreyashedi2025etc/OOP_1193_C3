#include <iostream>
using namespace std;

template <typename B>
class Calculator
{
    B num1, num2;

public:
    Calculator(B n1, B n2)
    {
        num1 = n1;
        num2 = n2;
    }

    B add()
    {
        return num1 + num2;
    }

    B sub()
    {
        return num1 - num2;
    }

    B mul()
    {
        return num1 * num2;
    }

    B div()
    {
        return num1 / num2;
    }
};

int main()
{
    Calculator<int> c1(5, 4);
    Calculator<double> c2(5.4, 4.4);

    cout << "\nAddition of the integers is : " << c1.add();
    cout << "\nSubtraction of the integers is : " << c1.sub();
    cout << "\nMultiplication of the integers is : " << c1.mul();
    cout << "\nDivision of the integers is : " << c1.div();

    cout << "\n\nAddition of the doubles is : " << c2.add();
    cout << "\nSubtraction of the doubles is : " << c2.sub();
    cout << "\nMultiplication of the doubles is : " << c2.mul();
    cout << "\nDivision of the doubles is : " << c2.div();

    return 0;
}
