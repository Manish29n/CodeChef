#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,max=0,c;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(int i=0;i<n;i++){
            c=1;
            for(int j=0;j<n;j++){
                if(i==j)
                    continue;
                if(arr[i]==arr[j])
                    c++;
            }
            if(c>max)
                max=c;
        }
        cout<<n-max<<endl;
    }
	return 0;
}
