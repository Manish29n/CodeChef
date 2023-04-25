#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        do{
            n-=2;
            c++;
        }while(n>0);
        cout<<c<<endl;
    }
	return 0;
}
