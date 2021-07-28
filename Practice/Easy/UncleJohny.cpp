#include <iostream>
#include"/Users/anuragupperwal/stdc++.h"
// #include<bits/stdc++.h>

using namespace std;

int searchPos(vector <int> s, int start, int end, int k) {

    int mid = end-start, res;
    if(s[mid] == k) return mid;

    if(s[mid] > k) return searchPos(s, 0, mid-1, k);
    else return searchPos(s, mid+1, end, k);

}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    
    int t;
    cin>>t;
    while(t--) {
        int n, k, val, a;
        cin>>n;
        vector <int> s;
        for(int i=0; i<n; ++i) {
            cin>>a;
            s.push_back(a);
        }
        cin>>k;
        val = s[k-1];
        // cout<<s[k-1]<<"\n";
        sort(s.begin(), s.end());
        // cout<<s[k-1]<<"\n";
        // vector<int>::iterator it = find(s.begin(), s.end(), val);

        // cout<<it-s.begin()+1<<"\n";

        cout<<searchPos(s, 0, n-1, k)+1<<'\n';
    }
	
	return 0;
}
