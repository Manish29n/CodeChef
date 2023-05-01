#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        float u,v,a,s;
        cin>>u>>v>>a>>s;
        float vel=sqrt(u*u-(2*a*s));
        cout<<((v<vel)?"No":"Yes")<<endl;
    }
	return 0;
}
