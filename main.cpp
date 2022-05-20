#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a, b, fa, fb, x, fx, err;
    do {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
        fa = a * a * cos(a) + 1;
        fb = b * b * cos(b) + 1;
    } while (fa*fb >= 0);

    do {
        x = (a+b)/2;
        fx = x * x * cos(x) + 1;
        if (fx == 0) {
            break;
        }
        if (fa*fx<0) {
            b=x;
        } else {
            a=x;
        }
        err = abs((b - a) / 2);
    } while (err>=1e-6);

    cout << x << endl;

    return 0;
}













/*
float f (float y) {
    return y*y * cos(y) + 1;
}

int main() {
    float a=0, b=0, err=0, x=-1;
    while (true) {
        cout << "inserire estremi";
        cin >> a >> b;
        if (f(a)*f(b)<0) {
            break;
        }
    }

    while (true) {
        a = (a+b)/2;
        x = a;
        if (f(x) != 0) {
            if (f(a) * f(b) < 0) {
                b = x;
            } else {
                a = x;
            }
            err = abs((b - a) / 2);
            if (err < 10 * exp(6)) {
                break;
            }
        }
    }

    cout << x;
    cout << f(x);

    return 0;
}
*/
