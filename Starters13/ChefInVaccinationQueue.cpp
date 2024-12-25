// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--) {
        int n, p, x, y, res=0;
        cin>>n>>p>>x>>y;
        int arr[n];
        for(int i=0; i<n; ++i) {
            cin>>arr[i];
        }

        for(int i=0; i<p; ++i) {
            if(arr[i] == 1) res+=y;
            else res+=x;
        }
        cout<<res<<"\n";
	}
	
	return 0;
}
