#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        cout<<((a>=100)?((a>=200)?"Hard":"Medium"):"Easy")<<endl;
    }
	return 0;
}
