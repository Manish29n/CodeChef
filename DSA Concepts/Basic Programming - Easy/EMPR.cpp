#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        double p, x, y, z;
        cin >> p >> x >> y >> z;

        if (z == 1) {
            p = p + p*y*0.01;
        } else {
            p = p - p*x*0.01;
        }

        cout <<fixed<< p << endl;
    }

    return 0;
}
