#include <bits/stdc++.h>
// #include"/Users/anuragupperwal/stdc++.h"

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--) {
        int n, x, y;
        cin>>n>>x>>y;

        if((n+1)*y >= x) cout<<"YES\n";
        else cout<<"NO\n";
	}
	
	return 0;
}
