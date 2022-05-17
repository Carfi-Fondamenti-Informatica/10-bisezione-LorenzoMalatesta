#include <iostream>
#include <math.h>
using namespace std;

float f (float y) {
    return y*y * cos(y) + 1;
}

int main() {
    float a=0, b=0, err=0, x=0;
    while (true) {
        cout << "inserire gli estremi" << endl;
        cin >> a >> b;
        if (f(a)*f(b)<0) {
            break;
        }
    }

    while (true) {
        a = (a+b)/2;
        if (f(a) != 0) {
            if (f(a) * f(b) < 0) {
                x = b;
            } else {
                x = a;
            }
            err = abs((b - a) / 2);
            if (err < 10 * exp(6)) {
                break;
            }

        }
    }

    cout << x << endl;
    cout << f(x) << endl;

    return 0;
}
