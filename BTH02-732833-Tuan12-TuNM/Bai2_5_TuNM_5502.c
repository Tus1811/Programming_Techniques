//Nguyễn Minh Tú - 5502 - 732833
/*Bài 2.5. Viết các toán tử tính tổng, hiệu, tích và thương của hai số phức.*/

#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex operator + (Complex a, Complex b) {
    //****************
    // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
    Complex tmpC;
    tmpC.real = a.real + b.real;
    tmpC.imag = a.imag + b.imag;
    return tmpC;
    //*****************
}

Complex operator - (Complex a, Complex b) {
    //*****************
    // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
    Complex tmpC;
    tmpC.real = a.real - b.real;
    tmpC.imag = a.imag - b.imag;
    return tmpC;
    //*****************
}

Complex operator * (Complex a, Complex b) {
    //*****************
    // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
    Complex tmpC;
    tmpC.real = a.real * b.real - a.imag * b.imag;
    tmpC.imag = a.real * b.imag + a.imag * b.real;
    return tmpC;
    //*****************
}

Complex operator / (Complex a, Complex b) {
    //*****************
    // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
    Complex tmpC;
    Complex inverse;
    inverse.real = b.real;
    inverse.imag = -b.imag;

    tmpC = a * inverse;
    tmpC.real = tmpC.real / (b.real * b.real + b.imag * b.imag);
    tmpC.imag = tmpC.imag / (b.real * b.real + b.imag * b.imag);
    return tmpC;
    //*****************
}

ostream& operator << (ostream& out, const Complex &a) {
    out << '(' << std::setprecision(2) << a.real << (a.imag >= 0 ? '+' : '-') << std::setprecision(2) << fabs(a.imag) << 'i' << ')';
    return out;
}

int main() {
    double real_a, real_b, img_a, img_b;
    cin >> real_a >> img_a;
    cin >> real_b >> img_b;

    Complex a{real_a, img_a};
    Complex b{real_b, img_b};

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;

    return 0;
}
//Nguyễn Minh Tú - 5502 - 732833