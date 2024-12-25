#include <iostream>
// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--) {
        int n, a, b, res = 0;
        cin>>n>>a>>b;

        string s;
        cin>>s;
        map <char, int> m;
        m['0'] = m['1'] = 0;

        for(int i=0; i<s.length(); ++i) {
            m[s[i]] += 1;
        }

        res += (m['0']*a);
        res += (m['1']*b);
        cout<<res<<"\n";
	    
	}
	
	return 0;
}
