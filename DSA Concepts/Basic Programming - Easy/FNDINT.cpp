#include <iostream>
#include <set>
using namespace std;

bool diffpairwise(int num) {
    string str = to_string(num);
    set<char> digits(str.begin(), str.end());
    return digits.size() == str.length();
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int y;
        cin>>y;
        y++;
        while(!diffpairwise(y)){
            y++;
        }
        cout<<y<<endl;
    }
	return 0;
}
