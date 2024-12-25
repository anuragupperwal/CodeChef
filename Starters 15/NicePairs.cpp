// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--) {
        int n, count=0;
        cin>>n;
        string s;
        cin>>s;
        // cout<<s[3]<<", "<<(int)s[3]-48;

        for(int i=0; i<n; ++i) {
            for(int j=i+1; j<=min(n, i+9) ; ++j) {
                int num1, num2;
                num1 = (int)s[i]-48;
                num2 = (int)s[j]-48;
                // cout<<( (j-i) == abs(num2 - num1))<<"\n";
                if( (j-i) == abs(num2 - num1) ) count++;
            }
        }
        cout<<count<<"\n";
	}
	
	return 0;
}
