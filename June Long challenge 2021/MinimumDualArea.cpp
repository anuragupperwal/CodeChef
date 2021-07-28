#include <iostream>
#include"/Users/anuragupperwal/stdc++.h" //<bits/stdc++.h>

using namespace std;

#define ll long long int

ll area(vector< pair<ll, ll> > rec, ll n) {
    vector <ll> prefMax, prefMin, sufMax, sufMin;
    // ll ans;

    cout<<"\nrec:\n";
    for(int i=0; i<n; ++i) {
        cout<<rec[i].first<<" "<<rec[i].second<<"\n";
    }

    prefMin.push_back(rec[0].second);
    prefMax.push_back(rec[0].second);

    // cout<<"\nP max: ";
    // for(auto i=prefMax.begin(); i!=prefMax.end(); ++i) {
    //     cout<<*i<<" \n";
    // }

    for(int i=1; i<n; ++i) {
        prefMin[i] = min(prefMin[i-1], rec[i].second);
        prefMax[i] = max(prefMax[i-1], rec[i].second);
        cout<<"i: "<<i<<" prefMax[i-1]: "<<prefMax[i-1]<<" rec[i].second "<<rec[i].second<<" prefMax[i] "<<prefMax[i]<<'\n';
    }

    cout<<"yes\n";

    sufMin.reserve(n);
    sufMax.reserve(n);
    sufMin[n-1] = rec[n-1].second;
    sufMax[n-1] = rec[n-1].second;
    for(int i=n-2; i>=0; --i) {
        sufMin[i] = min(sufMin[i+1], rec[i].second);
        sufMax[i] = max(sufMax[i+1], rec[i].second);
    }

    cout<<"\nP MIN: ";
    for(int i=0; i<n; ++i) {
        cout<<prefMin[i]<<" ";
    }

    cout<<"\nP max: ";
    for(ll i=0; i<n; ++i) {
        cout<<prefMax[i]<<" ";
    }

    cout<<"\nS MIN: ";
    for(int i=0; i<n; ++i) {
        cout<<sufMin[i]<<" ";
    }

    cout<<"\nS max: ";
    for(int i=0; i<n; ++i) {
        cout<<sufMax[i]<<" ";
    }

    cout<<"\n";

    ll ans = LLONG_MAX;
    for(int i=0; i<n; ++i) {
        ll b1, b2, l1, l2;
        b1 = rec[i].first - rec[0].first;
        l1 = prefMax[i] - prefMin[i];
        cout<<" b1: "<<b1<<" l1: "<<l1<<"\n";
        b2 = rec[n-1].first - rec[i].first;
        l2 = sufMax[i] - sufMin[i];     
        cout<<" b2: "<<b2<<" l2: "<<l2<<"\n";
        ll newA = (b1*l1)+(b2*l2);
        // cout<<" Nans: "<<newA<<"\n";
        ans = min(ans, newA);
    }

    sufMin.clear();
    sufMax.clear();

    return ans;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	ll t;
    cin>>t;
    
    while(t--) {
        ll n, ans1, ans2;
        cin>>n;
        vector< pair<ll, ll> > x, y;
        for(int i=0; i<n; ++i) {
            ll a, b;
            cin>>a>>b;
            x.push_back(make_pair(a, b));
            y.push_back(make_pair(b,a));
        }
        // cout<<"\nX:\n";
        // for(int i=0; i<n; ++i) {
        //     cout<<x[i].first<<" "<<x[i].second<<"\n";
        // }
        // cout<<"Y: \n";
        // for(int i=0; i<n; ++i) {
        //     cout<<y[i].first<<" "<<y[i].second<<"\n";
        // }

        if(n<=2) cout<<"0\n";
        else {
            // cout<<"222\n";
            sort(x.begin(), x.end());
            ans1 = area(x, n);
            // cout<<"333\n";

            // sort(y.begin(), y.end());
            // ans2 = area(y, n);
            // cout<<"444\n";

            // cout<<"areas: "<<ans1<<" 2: "<<ans2<<"\n";

            // cout<<min(ans1, ans2)<<"\n";
        }
    }


	return 0;
}
