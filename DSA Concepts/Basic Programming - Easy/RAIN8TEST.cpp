#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long  arr[n];
        cin>>arr[0];
        long long  cost=(arr[0]==1)?x:0;
        for(long long i=1;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)
                cost+=x;
            else
                cost+=0;
            if(arr[i-1]==1 && arr[i]==0){
                cost+=x;
            }
        }
        cout<<cost<<endl;
    }
	return 0;
}
