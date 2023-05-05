#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,w,s=0,c=0;
        cin>>n>>w;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(a[i]<a[j])
                    a[i]^=a[j]^=a[i]^=a[j];
            }
        }
        for(int i=0;i<n;i++){
            s+=a[i];
            c++;
            if(s>=w){
                break;
            }
        }
        cout<<n-c<<endl;
    }
	return 0;
}
