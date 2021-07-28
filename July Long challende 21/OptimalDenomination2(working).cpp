#include <iostream>
// #include <bits/stdc++.h>
#include "/Users/anuragupperwal/stdc++.h"

using namespace std;

#define ll long long int 


int gcdCalc(int a, int b) {
  if (b == 0)
    return a;
  return gcdCalc(b, a%b);
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	
    ll T;
    cin>>T;

    for(int i=0; i<T; ++i) {
        ll n;
        ll res=0;
        bool divCheck=true;
        cin>>n;
        ll a[n], leftHcf[n], rightHcf[n], midHcf[n], hcf=0;
        for(int i=0; i<n; ++i) cin>>a[i];


        leftHcf[0] = a[0];
        hcf = a[0];

        for(int i=1; i<n; i++) {
            hcf = gcdCalc(hcf, a[i]);
            leftHcf[i] = hcf;
        }

        hcf = a[n-1];
        rightHcf[n-1] = a[n-1];

        for(int i=n-2; i>=0; i--) {
            hcf = gcdCalc(hcf, a[i]);
            rightHcf[i] = hcf;
        }

        midHcf[0] = rightHcf[1];
        midHcf[n-1] = leftHcf[n-2];
        for(int i=1; i<n-1; i++) {
            midHcf[i] = gcdCalc(leftHcf[i-1], rightHcf[i+1]); 
        }

        ll sum = 0, ans = LONG_MAX, s;
        for(int i=0; i<n; ++i) {
            sum += a[i];
        }
        for(int i=0; i<n; i++) {
            s = (sum - a[i])/midHcf[i] + 1;
            ans = min(s, ans);
        }

        cout<<ans<<"\n";

    }

    return 0;
}