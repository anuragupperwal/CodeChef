#include <iostream>
// #include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;


int main() {
	// your code goes here
    int t;
    cin>>t;

    while(t--) {
        long long int n, k, kCount=0;
        cin>>n>>k;
        vector <long long int> a(n);
        long long int chef=0, bro=0;
        
        for(int i=0; i<n; ++i) {
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        
        while(k--) {
            chef += a.back();
            a.pop_back();
            bro += a.back();
            a.pop_back();
        }
        bro += a.back();

        // cout<<chef<<" "<<bro<<"\n";

        if(chef > bro) cout<<chef<<endl;
        else cout<<bro<<endl;

    }
	return 0;
}



// 3
// 7 3
// 1 3 2 8 6 4 10
// 11 2
// 3 1 3 6 7 5 2 8 2 1 9
// 6 2
// 5 1 3 2 4 8  