#include <iostream>
using namespace std;

class Complex {
public:
    float real, img;

    void accept(int r, int i) {
        real = r;
        img = i;
    }

    Complex add(Complex c) {
        Complex sum;
        sum.real = real + c.real;
        sum.img = img + c.img;
        return sum;
    }

    Complex subtract(Complex c) {
        Complex diff;
        diff.real = real - c.real;
        diff.img = img - c.img;
        return diff;
    }

    Complex multiply(Complex c) {
        Complex prod;
        prod.real = (real * c.real) - (img * c.img);
        prod.img = (real * c.img) + (img * c.real);
        return prod;
    }

    // Division of two complex numbers
    Complex divide(Complex c) {
        Complex div;
        float denominator = (c.real * c.real) + (c.img * c.img);

        div.real = (real * c.real + img * c.img) / denominator;
        div.img = (img * c.real - real * c.img) / denominator;

        return div;
    }

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
    Complex c1, c2, c3;
    cout << "Name: Shreya Shedi" << endl;
    cout << "PRN: B25ET1193" << endl;

    c1.accept(3, -4);
    c2.accept(6, 10);

    cout << "First Complex Number: ";
    c1.display();

    cout << "\nSecond Complex Number: ";
    c2.display();

    c3 = c1.add(c2);
    cout << "\nResult of Addition: ";
    c3.display();

    c3 = c1.subtract(c2);
    cout << "\nResult of Subtraction: ";
    c3.display();

    c3 = c1.multiply(c2);
    cout << "\nResult of Multiplication: ";
    c3.display();

    c3 = c1.divide(c2);
    cout << "\nResult of Division: ";
    c3.display();

    return 0;
}
