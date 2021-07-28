#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	
	int t;
	cin>>t;
	while(t--) {
	    int d, x, y ,z, u, v, ans;
        cin>>d>>x>>y>>z;

        u = x*7;
        v = (y*d) + (z*(7-d));
        ans = (u>v)?u:v;
        cout<<ans<<"\n";
	    
	}
	
	return 0;
}
