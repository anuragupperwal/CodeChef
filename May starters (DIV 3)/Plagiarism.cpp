#include<iostream>
#include<vector>
#include "/Users/anuragupperwal/stdc++.h" //<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, m, k, totalUsers, user, count=0;
        cin>>n>>m>>k;
        long int l[k];
        vector <int> users;
        vector <pair<int, int> > res;

        for(int i=1; i<=k; ++i) cin>>l[i];

        for(int i=0; i<k; ++i) {
            if(l[i] < n+1) users.push_back(l[i]);
        }

        sort(users.begin(), users.end());

        user = users[0];
        for(int i=1; i!=users.size(); ++i) {
            if(user == users[i]) {
                res.push_back(make_pair(user, 1));
            }
            user = users[i];
        }

        cout<<res.size();
        for(auto i=res.begin(); i<res.end(); ++i) cout<<" "<<i->first<<" "<<i->second;
        cout<<endl;

    }

    return 0;
}