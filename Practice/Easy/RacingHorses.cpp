#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int s[n];

        for(int i=0; i<n; ++i) {
            cin>>s[i];
        }

        int minDiff = INT_MAX;
        for(int i=0; i<n; ++i) {
            for(int j = i+1; j<n; ++j) {
                if(abs(s[j] - s[i]) < minDiff) {
                    minDiff = abs(s[j] - s[i]);
                }
            }
        }

        cout<<minDiff<<"\n";
        
    }
	
	return 0;
}

