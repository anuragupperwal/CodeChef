#include<iostream>
#include "/Users/anuragupperwal/stdc++.h" //<bits/stdc++.h>

using namespace std;

int main() {

    long int n, z, custCount;
    vector <long int> budget, res;

    cin>>n;
    custCount = n;
    for(int i=0; i<n; ++i) {
        int x;
        cin>>x;
        budget.push_back(x);
    }
    sort(budget.begin(), budget.end());

    for(int i=0; i<n; ++i) {
        z = budget[i];
        res.push_back(z*custCount);
        custCount--;
    }

    sort(res.begin(), res.end());

    cout<<endl<<res[n-1];
    
    return 0;
}
    
    // for(int i=0; i<n; ++i) {
    //     cout<<budget[i]<<" ";
    // }
    // cout<<"\n";

    // for(int i=0; i<n; ++i) {
    //     cout<<res[i]<<" ";
    // }
 




    // for(int i=0; i<n; ++i) {
    //     cout<<res[i]<<" ";
    // }


//     int n, buyers;
//     cin>>n;
//     int data[n], low;
//     map<int, map<int, int> > dataSheet;

//     for(int i=0; i<n; i++) {
//         cin>>data[i];
//     }

//     sort(data, data + n);
//     low = data[0];
//     buyers = n;

// cout<<data[-1]; //  ---sort fun. isn't wroking---

//     // for(int j=low; j<=data[-1]; ++low){
//     //     for(int i=0; i<n; ++i) {
//     //         if(data[i] <= data[-1]){
//     //             dataSheet[low][i] =  1;       
//     //         }
//     //     }
//     // }


//     // for(int i=data[0]; i<data[-1]; ++i) {
//     //     for(int j=0; j<n; ++j) {
//     //         cout<<dataSheet[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     return 0;
// }