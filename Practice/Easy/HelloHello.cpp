#include <iostream>
// #include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--) {
        int u, n;
        float d;
        cin>>d>>u>>n;
        int c[n], m[n];
        float r[n];

        for(int i=0; i<n; ++i) {
            cin>>m[i]>>r[i]>>c[i];
        }

        int curCost = d*u, newMinCost=INT_MAX, minCostIdx; 

        for(int i=0; i<n; ++i) {
            int a = (((r[i]*200) + c[i]))/m[i];

            if(a<curCost && a<newMinCost) {
                minCostIdx = i+1;
                newMinCost = a;
            }   
        }

        if(newMinCost == INT_MAX) cout<<0<<"\n";
        else cout<<minCostIdx<<"\n";
    }
	
	
	return 0;
}
