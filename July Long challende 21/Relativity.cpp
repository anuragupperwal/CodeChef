#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	
	int t;
    cin>>t;
    while(t--) {
        int G, C, ans;
        cin>>G>>C;

        if((C*C)%(2*G) == 0) {
            ans = ((C*C)/(2*G));
        }
        cout<<ans<<"\n";
    }
	return 0;
}
