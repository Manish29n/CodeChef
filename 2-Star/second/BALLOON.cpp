#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],brr[7]={},c=0,s;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>=1 && arr[i]<=7){
                if(brr[arr[i]-1]==0){
                    brr[arr[i]-1]=1;
                    c++;
                }
            }
            if(c==7){
                s=i+1;
                break;
            }
        }
        cout<<s<<endl;
    }
	return 0;
}
