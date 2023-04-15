#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int h, w, x, y, k;
        cin >> h >> w >> x >> y >> k;

        double z = sqrt(pow(w-x, 2) + pow(h-y, 2));

        if (z < k) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}
