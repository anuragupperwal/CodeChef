#include <iostream>
// #include <bits/stdc++.h>
#include "/Users/anuragupperwal/stdc++.h"

using namespace std;

#define ll long long int

ll cheforaNum(int num) {
    ll res = num;
    num /=10;
    while(num>0) {
        res = res*10 + num%10;
        num /=10;
    }
    return res;
}

ll powerFun(ll base, ll power) {
    ll mod = pow(10, 9) + 7;
    ll res = 1;
    while(power!=0) {
        if(power%2 == 0) {
            base = ((base%mod)*(base%mod))%mod;
            power /=2;
        }
        else {
            res = ((res%mod)*(base%mod))%mod;
            power -=1;
        }
    }
    return res;
}


int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);

    ll size = 999999;
    ll cheforaNumArr[size], prefixSumCheforaNum[size];
    // for(int i=1; i<size+1; ++i) {
    //     cheforaNumArr[i] = cheforaNum(i);
    //     prefixSumCheforaNum[i] = cheforaNumArr[i] + prefixSumCheforaNum[i-1];
    // }
    
	ll t;
    // scanf("%lld", &t);
    cin>>t;
    while(t--) {
        ll l, r;
        // scanf("%lld %lld", &l, &r);
        cin>>l>>r;
 
        // ll res = powerFun(cheforaNumArr[l], prefixSumCheforaNum[r] - prefixSumCheforaNum[l]);
        
        // printf("%lld", res);
        // cout<<powerFun(cheforaNumArr[l], prefixSumCheforaNum[r] - prefixSumCheforaNum[l])<<"\n";
    }

	return 0;
}


// 2^8
// 4^4
// 16^2
// 256^1