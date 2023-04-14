#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a+b==c ||c+b==a ||a+c==b)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
	return 0;
}
