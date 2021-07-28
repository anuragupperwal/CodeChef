#include<iostream>
#include<cmath>

using namespace std;

#define ll long long int
#define mod 1000000007

ll power(ll base, ll pow) {
    ll res=1;
    while(pow>0) {
        if(pow%2) res = (res*base)%mod;
        base = (base*base)%mod;
        pow /=2;
    }
    return res;
}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        ll n, m, res;
        cin>>n>>m;

        res = (power(2, n) -1);
        cout<<power(res, m)<<endl;
        
    }

    return 0;
}