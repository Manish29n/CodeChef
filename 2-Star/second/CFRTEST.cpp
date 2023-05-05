#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],d[100]={},c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(d[a[i]-1]==0)
                c++;
            d[a[i]-1]++;
        }
        cout<<c<<endl;
    }
	return 0;
}
