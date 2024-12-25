// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--) {
        string s;
        cin>>s;
        int count=0;
        char prev;

        if(s[0] == '1') prev = s[0];
        else {
            count++;
            prev = s[0];
        }

        for(int i=1; i<s.length(); ++i) {
            if(s[i] != prev) {
                count++;
                prev = s[i];
            }
        }
        
	    cout<<count<<"\n";
	    
	}
	
	return 0;
}
