#include <bits/stdc++.h>
// #include"/Users/anuragupperwal/stdc++.h"

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--) {
        long long int x, y;
        cin>>x>>y;

        if( ( x*1 + y*2 )%2  == 0 ) {
			if( x==0 && y==1 ) cout<<"NO\n";
			else  cout<<"YES\n";
		}
		else cout<<"NO\n";
	    
	}
	
	return 0;
}
