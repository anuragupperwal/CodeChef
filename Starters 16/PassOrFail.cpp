// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--) {
        int n, x, p;
        cin>>n>>x>>p;
	    if(((x*3) - (n-x)) >= p) cout<<"PASS\n";
        else cout<<"FAIL\n";
	    
	}
	
	return 0;
}
