#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,sum=0;
        cin>>a;
        int n=a/2+a%2;
        cout<<((n%2==0)?a:a-1)<<endl;
    }
	return 0;
}
