#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long h,x,y;
        cin >> h >> x >> y;
        cout << ( x > y ? 1 : 0) << endl;
    }
	return 0;
}
