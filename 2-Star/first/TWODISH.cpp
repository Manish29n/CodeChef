#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        cout<<((b>=n && a+c >=n)?"YES":"NO")<<endl;
    }
	return 0;
}
