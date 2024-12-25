#include <iostream>
// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"
using namespace std;

#define ll long long int

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;

    while(t--) {
        ll n, p, k, a, b, res=0;
        cin>>n>>p>>k;

        a = p%k;
        b = n-1 - ((n-1)/k)*k;

                cout<<"b: "<<b<<" a: "<<a<<" res: "<<res<<"\n";

        // res = a * ((n-1)/k) + 1 + leftOverVal;
        if(a>b) res =(((n-1)/k +1)*(b+1)) + (a-1-b)*((n-1)/k);  //res = a * ((n-1)/k) + 1 + leftOverVal;
        else res = ((n-1)/k +1)*a; 
        cout<<"b: "<<b<<" a: "<<a<<" res: "<<res<<"\n";
        
        for(int i=a; i<n; i+= k) {
            res++;
            if(i == p) break;
        }
        
        cout<<res<<"\n";


        // int i, count=0;
        // res = (b*(((n-1)/k)+1));
        // res += (a-b)*((n-1)/k);
        // // cout<<res<<"\n";
        // vector < pair <ll, ll> > modMap;

        // for(i=0; i<n; ++i) {
        //     modMap.push_back(make_pair((i%k), i));
        // }
        // sort(modMap.begin(), modMap.end());

        // for(vector < pair <ll, ll> >::iterator it = modMap.begin(); it!=modMap.end(); ++it) {
        //     count++;
        //     if(it->second == p) break;
        // }

        // // for(int i=0; i<modMap.size(); ++i) cout<<modMap[i].first<<" "<<modMap[i].second<<" \n";

        // cout<<count<<"\n";
    }
	
	return 0;
}





// 4
// 148 8 9
// 125 7 4
// 183738 7473 299
// 32248 4785 818


// wrong ans:
// 137
// 98
// 182680
// 27806


// right ans:
// 133
// 96
// 182535
// 27457