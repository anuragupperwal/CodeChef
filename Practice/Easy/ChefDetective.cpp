#include <iostream>
// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"
using namespace std;

int findLeaf(int arr[], int i, int n, vector <int>& res) {
    if(i<=n){
        if(arr[2*i] != i && arr[2*i+1] != i) {
            res.push_back(i);
            // for(int i=0; i<res.size(); ++i) cout<<res[i]<<" ";
            // cout<<i<<" \n";
            return 0;
        }

        findLeaf(arr, 2*i, n, res);
        findLeaf(arr, 2*i+1, n, res);
    }
    return 0;
}

void findLeaf(int arr[], bool reportCheck[], int n) {
    for(int i=1; i<=n; ++i) {
        reportCheck[arr[i]] = true;
    }
    for(int i=1; i<=n; ++i) if(reportCheck[i] == false) cout<<i<<" ";
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int n;
    cin>>n;
    int arr[n];
    bool reportCheck[n];
    vector<int> res;
    for(int i=1; i<=n; ++i) cin>>arr[i];
    for(int i=0; i<=n; ++i) reportCheck[i] = false;

    // findLeaf(arr, 1, n, res);
    findLeaf(arr, reportCheck, n);
    // sort(res.begin(), res.end()); 
    // cout<<"\n-:";
    // for(int i=0; i<res.size(); ++i) cout<<res[i]<<" ";


	return 0;
}


// 10
// 0 1 1 2 2 3 3 4 4 5