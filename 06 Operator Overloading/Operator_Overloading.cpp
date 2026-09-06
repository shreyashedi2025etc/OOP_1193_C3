#include <iostream>
using namespace std;

// Class for complex number
class Complex {
    float real, img;

public:

    // To enter real and imaginary values
    void accept(int r, int i) {
        real = r;
        img = i;
    }

    // Overloading + operator
    Complex operator + (Complex c) {
        Complex sum;
        sum.real = real + c.real;
        sum.img = img + c.img;
        return sum;
    }

    // Overloading - operator
    Complex operator - (Complex c) {
        Complex diff;
        diff.real = real - c.real;
        diff.img = img - c.img;
        return diff;
    }

    // Overloading * operator
    Complex operator * (Complex c) {
        Complex prod;
        prod.real = (real * c.real) - (img * c.img);
        prod.img = (real * c.img) + (img * c.real);
        return prod;
    }

    // Overloading / operator
    Complex operator / (Complex c) {
        Complex div;
        int denominator = (c.real * c.real) + (c.img * c.img);

        div.real = (real * c.real + img * c.img) / denominator;
        div.img = (img * c.real - real * c.img) / denominator;

        return div;
    }

    // To display complex number
    void display() {
        if(img >= 0) {
            cout << real << " + i" << img;
        }
        else {
            cout << real << " - i" << -img;
        }
    }
};

int main() {

    // Display name and PRN
    cout << "Name: Shreya Shedi" << endl;
    cout << "PRN: B25ET1193" << endl;

    // Create objects
    Complex c1, c2, c3, c4, c5, c6;

    // Enter values for two complex numbers
    c1.accept(3, -4);
    c2.accept(6, 10);

    // Display first complex number
    cout << "First Complex Number: ";
    c1.display();

    // Display second complex number
    cout << "\nSecond Complex Number: ";
    c2.display();

    // Addition
    c3 = c1 + c2;
    cout << "\nResult of Addition: ";
    c3.display();

    // Subtraction
    c4 = c1 - c2;
    cout << "\nResult of Subtraction: ";
    c4.display();

    // Multiplication
    c5 = c1 * c2;
    cout << "\nResult of Multiplication: ";
    c5.display();

    // Division
    c6 = c1 / c2;
    cout << "\nResult of Division: ";
    c6.display();

    return 0;
}
