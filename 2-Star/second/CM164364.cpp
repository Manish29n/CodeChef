#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int arr[a];
        map<int,int> m;
        for(int i=0;i<a;i++){
            cin>>arr[i];
            auto it=m.find(arr[i]);
            if(it==m.end()){
                m[arr[i]]=1;
            }
        }
        cout<<((m.size()>=(a-b))?a-b:m.size())<<endl;
    }
	return 0;
}
