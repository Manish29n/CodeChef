#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,sum,rem,c=0,Match[10]={6,2,5,5,4,5,6,3,7,6};
        cin>>a>>b;
        sum=a+b;
        while(sum>0){
            rem=sum%10;
            c+=Match[rem];
            sum/=10;
        }
        cout<<c<<endl;
    }
	return 0;
}
