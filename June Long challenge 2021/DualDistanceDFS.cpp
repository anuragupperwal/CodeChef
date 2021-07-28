#include<iostream>
#include<map>
#include "/Users/anuragupperwal/stdc++.h" //<bits/stdc++.h>

using namespace std;

#define ll long long int

void GraphInput(map<ll, map<ll, ll> > &graphMap, vector < pair< ll, ll> > &queries, ll n, ll e, ll q) {
    for(int i=1; i<=e; ++i) {
        ll a, b;
        cin>>a>>b;
        graphMap[a][b] = 1;
        graphMap[b][a] = 1;
    }
    for(int i=0; i<q; ++i) {
        ll a, b;
        cin>>a>>b;
        queries.push_back(make_pair(a, b));
    }
}

int DFS(map<ll, map<ll, ll> > graphMap, vector < pair< ll, ll> > queries, map<ll, char> &visitCheck, stack <ll> &s, 
            int n, int e, int q, int i, ll dist, ll qCompare) {
    if(i<=n) {
        dist++;
        s.push(i);
        if(qCompare == s.top()) {
            return dist;
        }
        visitCheck[i] = 'g';
        for(ll j=1; j<=n; ++j) {
            if(graphMap[i][j] == 1) {
                if(visitCheck[j] == 'w') {
                    i = j;
                    i = DFS(graphMap, queries, visitCheck, s, n, e, q, i, dist, qCompare);
                    if(qCompare == s.top()) {
                        return i;
                    }
                }
            }
        }

        visitCheck[i] = 'b';
        // cout<<s.top();
        s.pop();
        if(!s.empty()) i=s.top();
        else i = 0;
        return i;
    }
    return 0;
}

int main() {
    ll t;
    cin>>t;
    
    while(t--) {
        map<ll, map<ll, ll> > graphMap;
        map<ll, char> visitCheck;
        vector < pair< ll, ll> > queries;

        ll n, q;
        cin>>n>>q;

        GraphInput(graphMap, queries, n, n-1, q);

        for(int j=0; j<1; ++j) {
            for(int i=1; i<=n; ++i) {
                visitCheck[i] = 'w';
            }
            stack <ll> s;
            ll dist1, dist2, minimum, minSum=0;

            for(int k=3; k<=n; ++k) {
                ll larger1 = (k > queries[j].first)?k:queries[j].first;
                ll smaller1 = (k < queries[j].first)?k:queries[j].first;

                ll larger2 = (k > queries[j].second)?k:queries[j].second;
                ll smaller2 = (k < queries[j].second)?k:queries[j].second;
                dist1 = DFS(graphMap, queries, visitCheck, s, n, n-1, q, smaller1, 0, larger1)-1;
                dist2 = DFS(graphMap, queries, visitCheck, s, n, n-1, q, smaller2, 0, larger2)-1;
                cout<<"\n: "<<k<<" "<<dist1<<", "<<dist2;
                minimum = min(dist1, dist2);  
                minSum+=minimum; 
            }
            cout<<minSum<<"\n";
            // cout<<"1: "<<queries[j].first<<" 2: "<<queries[j].second<<"\n";
        } 

        // for(int i=1; i<n; ++i) {
        //     for(int j=1; j<n; ++j) {
        //         cout<<graphMap[i][j]<<" ";
        //     }
        // cout<<endl;
        // }
    }
    return 0;
}


// 11 2
// 1 2
// 2 3
// 3 4
// 1 5
// 5 6
// 6 7 
// 6 8
// 8 9
// 8 10
// 7 11
// 3 7
// 2 9


// 7 1
// 1 2
// 1 3
// 2 4
// 2 5
// 3 6
// 3 7
// 2 6




// 2
// 4 2
// 1 2
// 2 3
// 3 4
// 1 2
// 3 1
// 7 1
// 1 2
// 1 3
// 2 4
// 2 5
// 3 6
// 3 7
// 2 6
