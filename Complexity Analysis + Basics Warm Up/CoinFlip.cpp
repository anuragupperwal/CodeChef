#include <iostream>
using namespace std;

int main() {
    int t, g, i, n, q;

    cin>>t;
    for(int j=0; j<t; ++j) {
        cin>>g;

        for(int k=0; k<g; ++k) {
            cin>>i>>n>>q;

            if(i==1) { //starting heads
                if(q == 2) { //total tails?
                    if(n ==1) {
                        cout<<1;
                    }
                    else if(n%2 == 0) {
                        cout<<n/2;
                    }
                    else {
                        cout<<(n/2) + 1;
                    }
                }
                else if(q ==1) { //total heads?
                    if(n ==1) {
                        cout<<0;
                    }
                    else if(n%2 == 0) {
                        cout<<n/2;
                    }
                    else {
                        cout<<(n/2);
                    }
                }
            }
            else if(i==2) { //starting tails
                if(q == 1) { //total heads?
                    if(n ==1) {
                        cout<<1;
                    }
                    else if(n%2 == 0) {
                        cout<<n/2;
                    }
                    else {
                        cout<<(n/2) + 1;
                    }
                }
                else if(q ==2) { //total tails?
                    if(n ==1) {
                        cout<<0;
                    }
                    else if(n%2 == 0) {
                        cout<<n/2;
                    }
                    else {
                        cout<<(n/2);
                    }
                }
            }
            cout<<endl;
        }
    }
	return 0;
}
