#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n][2],max=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
            }
            if(arr[i][0]<=x)
                if(arr[i][1]>max)
                    max=arr[i][1];
        }
        cout<<max<<endl;
    }
	return 0;
}
