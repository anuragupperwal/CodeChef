#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;

    for(int i=0; i<t; ++i){
        int D,d;
        long int a,b,c;
        cin>>D>>d>>a>>b>>c;

        if(d*D>=42) {
            cout<<c<<endl;
        }
        else if(d*D>=21 && d*D<42) {
            cout<<b<<endl;
        }
        else if(d*D>=10 && d*D<21) {
            cout<<a<<endl;
        }
        else cout<<"0\n";

    }
	return 0;
}
