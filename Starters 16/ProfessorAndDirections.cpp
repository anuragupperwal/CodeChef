// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool check = false;
        for(int i=0; i<n; ++i) {
            if(s[i] == s[i+1]) {
                check = true;
                break;
            }
        }
        if(check == true) cout<<"YES\n";
        else cout<<"NO\n";

	}
	
	return 0;
}
