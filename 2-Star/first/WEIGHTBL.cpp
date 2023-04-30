#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        int sub=w2-w1;
        cout<<((sub>=x1*m && sub<=x2*m)?1:0)<<endl;
    }
	return 0;
}
