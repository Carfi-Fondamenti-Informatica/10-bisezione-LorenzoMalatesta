#include <iostream>
#include <math.h>
using namespace std;

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
