#include <iostream>
#include <cmath>
using namespace std;


int main( ) {
    const double pi = 3.1415;
    double t;
    double x;
    cin >> x;

    if ( x == 0) {
        cout << "error";
    }

    if (x > 0) {
        t = (2 + x * x) / x;
    }
    else if ( -1 < x <= 0) { 
        t = 7/3   +  sqrt(x + 1); 
    }

    else {
        t = cos( pi * abs(x)) / x;

    }
    cout << t << endl;



    return 0;
}