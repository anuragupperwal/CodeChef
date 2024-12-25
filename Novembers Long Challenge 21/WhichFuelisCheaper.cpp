// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--) {
        int x, y, a, b, k;
        cin>>x>>y>>a>>b>>k;

        int p = (x+(a*k)), d = (y + (b*k));
        if(p == d )cout<<"SAME PRICE\n";
        else {
            if( p < d) cout<<"PETROL\n";
            else cout<<"DIESEL\n";
        }
	    
	}
	
	return 0;
}
