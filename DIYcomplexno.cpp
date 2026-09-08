#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    void setData(double r, double i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

int main() {
    Complex numbers[3];

    numbers[0].setData(2, 3);
    numbers[1].setData(4, -5);
    numbers[2].setData(6, 7);

    cout << "Complex Numbers:" << endl;

    for (int i = 0; i < 3; i++) {
        numbers[i].display();
    }

    return 0;
}