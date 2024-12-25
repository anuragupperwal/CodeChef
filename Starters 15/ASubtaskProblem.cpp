// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--) {
        int m, n, k;
        cin>>n>>m>>k;
        vector <int> vec;
        for(int i=0; i<n; ++i) {
            int inp;
            cin>>inp;
            vec.push_back(inp);
        }

        // //Approach 1
        // auto it = find(vec.begin(), vec.end(), 0);
        // if(it == vec.end()) {
        //     cout<<"100\n";
        // }
        // else {
        //     bool check = false;
        //     for(int i=0; i<m; ++i) {
        //         if(vec[i] == 0) {
        //             check = true;
        //             break;
        //         }
        //     }

        //     if(check != true) cout<<k<<"\n";
        //     else cout<<"0\n";
        // }

        // Approach 2
        int sumM=0, sumN=0;
        for(int i=0; i<n; ++i) {
            if(vec[i] == 1) {
                if(i<m) sumM++;
                sumN++;
            }
        }

        if(sumN == n) cout<<"100\n";
        else if(sumM == m) cout<<k<<"\n";
        else cout<<"0\n";
	}
	
	return 0;
}
