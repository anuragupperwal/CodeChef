#include <iostream>
#include "/Users/anuragupperwal/stdc++.h" //<bits/stdc++.h>

using namespace std;

#define ll long long int

ll minVal(ll a, ll b) {
    return (a<b?a:b);
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	
    ll t;
    cin>>t;

    while(t--) {
        ll n, m;
        cin>>n>>m;
        ll a[n], b[m], c[m], sol[n];;
        int oneIdx = -1, twoIdx = -1; 

        for(int i=0; i<n; ++i) cin>>a[i];
        for(int i=0; i<m; ++i) cin>>b[i];

        for(int i=0; i<n; ++i) {
            if(i==0) sol[i] = 0;
            else {
                if(a[i] != 0) sol[i] = 0;
                else sol[i] = INT_MAX;
            }
        }

        for(int i=0; i<n; ++i) {
            if(a[i] == 1) {
                oneIdx = i;
            }
            if(oneIdx != -1) {
                if(a[i] == 0) sol[i] = minVal(sol[i], i-oneIdx);
            }
        }

        for(int i=n-1; i>=0; --i) {
            if(a[i] == 2) {
                twoIdx = i;
            }
            if(twoIdx != -1) {
                if(a[i] == 0) sol[i] = minVal(sol[i], twoIdx-i);
            }
        }
        cout<<endl;





//
        // if(oneIdx-twoIdx > 1) {
        //     for(int i= twoIdx+1; i<oneIdx; ++i ) arb[i] = -1;
        // }

        // // cout<<oneIdx<<" 2:"<<twoIdx<<endl;

        // // for(int i=0; i<n; ++i) cout<<arb[i]<<" ";
        // // cout<<endl;

        // if(oneIdx!=-1) {
        //     for(int i=oneIdx; i<n; ++i) {
        //         if(a[i] == 1) oneIdx = i;
        //         if(a[i] != 0) {
        //             arb[i]  = 0;
        //         }
        //         else {
        //             arb[i] = i - oneIdx;
        //         }
        //     }
        // }

        // // for(int i=0; i<n; ++i) cout<<arb[i]<<" ";
        // // cout<<endl;

        // if(twoIdx!=-1) {
        //     for(int i=twoIdx; i>=0; --i) {
        //         if(a[i] == 2) twoIdx = i;
        //         if(a[i] != 0) {
        //             arb[i] = 0;
        //         }
        //         else {
        //             if( (twoIdx - i) < arb[i] ) {
        //                 arb[i] = twoIdx - i;
        //             }
        //         }
        //     }
        // }
        // // for(int i=0; i<n; ++i) cout<<arb[i]<<" ";
        // // cout<<endl;
//





        for(int i=0; i<m; ++i) {
            if(sol[b[i]-1] == INT_MAX) c[i] = -1;
            else c[i] = sol[b[i]-1];
        }
        
        for(int i=0; i<m; ++i) {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
	
	return 0;
}


// 3
// 5 1
// 1 0 0 0 0
// 5
// 5 1
// 1 0 0 0 2
// 4
// 5 2
// 2 0 0 0 1
// 3 1