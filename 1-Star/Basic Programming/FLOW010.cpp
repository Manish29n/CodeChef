#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        char a;
        cin>>a;
        if(a=='B' or a=='b')
            cout<<"BattleShip"<<endl;
        else if(a=='C' or a=='c')
            cout<<"Cruiser"<<endl;
        else if(a=='D' or a=='d')
            cout<<"Destroyer"<<endl;
        else
            cout<<"Frigate"<<endl;
    }
	return 0;
}
