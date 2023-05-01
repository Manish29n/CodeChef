#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        float e=(100+d)*a/100;
        cout<<(((float)b<=e && (float)c>=e)?"Yes":"No")<<endl;
    }
	return 0;
}
