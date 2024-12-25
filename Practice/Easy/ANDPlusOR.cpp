#include "/Users/anuragupperwal/stdc++.h"

using namespace std;

#define ll long long int

int main() {
    ll t;
    cin>>t;

    while(t--) {
        ll x;
        cin>>x;

        ll a=2, b=8;
        // for(int i=0; i<ceil(x/2); ++i) {
        //     ll and = (a&b), or = (a|b);
        //     if( ((a&b) + (a|b)) == x) {
        //         cout<<a<<" "<<b;
        //     }
        //     a++;
        //     b--;
        // }
        cout<<(a|b);

    }

    return 0;
}