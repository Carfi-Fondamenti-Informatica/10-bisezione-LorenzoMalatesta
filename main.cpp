#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float a, b, fa, fb, x, fx, err;
    do {
        cout << "inserire estremi";
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

    
    
    cout << (x*10000)/10000.0;
    cout << fx;

    return 0;
}
