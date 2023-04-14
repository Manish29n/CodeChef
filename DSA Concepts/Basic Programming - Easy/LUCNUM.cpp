#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,c=0;
        cin>>n;
        while(n%2==0){
            c++;
            n/=2;
        }
        if(c%2==0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
	return 0;
}
