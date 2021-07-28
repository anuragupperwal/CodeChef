#include <iostream>
// #include <bits/stdc++.h>
#include "/Users/anuragupperwal/stdc++.h"
using namespace std;

#define ll long long int 

int hcfCalc(int x, int y) {
  if (y == 0)
    return x;
  return hcfCalc(y, x%y);
}

bool areSame(ll arr[], int n){
    int first = arr[0];

    for (int i = 1; i < n; i++)
    if (arr[i] != first)
        return 0;
    return 1;
}

ll maxCheck(ll a[], int n) {
    ll maxVal=a[0], maxValIdx=0;
    for(int i=1; i<n; i++) {
        if (a[i] >= maxVal) {
            maxVal = a[i];
            maxValIdx = i;
            // cout<<"maxVal: "<<maxVal<<" maxValIdx:"<<maxValIdx<<"\n"; 
        }
        else if(a[i] == maxVal) {

        }
    }
    return maxValIdx;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	
    ll t;
    cin>>t;

    while(t--) {
        ll n, divisor;
        ll res=0;
        bool divCheck=true;
        cin>>n;
        ll a[n], left[n], right[n], mid[n], hcf=0;
        for(int i=0; i<n; ++i) cin>>a[i];

        left[0] = 0;
        hcf = a[0];

        for(int i=1; i<n; ++i) {
            left[i] = hcf;
            hcf = hcfCalc(hcf, a[i]);
        }

        hcf = a[n-1];
        right[n-1] = 0;

        for(int i=n-2; i>=0; --i) {
            right[i] = hcf;
            hcf = hcfCalc(hcf, a[i]);
        }

        for(int i=0; i<n; ++i) {
            mid[i] = hcfCalc(left[i], right[i]);
        }


        // for(int i=0; i<n; ++i) {
        //     cout<<left[i]<<" ";
        // }        
        // cout<<"\n";
        // for(int i=0; i<n; ++i) {
        //     cout<<right[i]<<" ";
        // }        
        // cout<<"\n";
        // for(int i=0; i<n; ++i) {
        //     cout<<mid[i]<<" ";
        // }
        // cout<<"\n";

        // int temp=0;
        // for(int i=0; i<n-1; i++) {
        //     if(mid[i] == mid[i+1]) 
        // }

        bool elementCheck = areSame(mid, n);
        ll reqdIdx;
        if(elementCheck == true) {
            reqdIdx=maxCheck(a, n);
            a[reqdIdx] = mid[reqdIdx];
            divisor = mid[reqdIdx];
        }
        else {
            reqdIdx=maxCheck(mid, n);
            a[reqdIdx] = mid[reqdIdx];
            divisor = mid[reqdIdx];
        }


        // cout<<reqdIdx<<", "<<mid[reqdIdx]<<", "<<a[reqdIdx]<<", \n";
        // for(int i=0; i<n; ++i) {
        //     cout<<a[i]<<" ";
        // }        
        // cout<<"\n";

        for(int i=0; i<n; i++) {
            // res += a[i]/divisor;
        }

        cout<<res<<"\n";
   
    }
	
	return 0;
}



// 5
// 3
// 1 2 3
// 3
// 8 4 2
// 2
// 2 2 
// 5
// 9 18 27 2 36
// 5
// 10 2 4 6 8