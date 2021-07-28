#include <iostream>
#include "/Users/anuragupperwal/stdc++.h" //<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int T;
    cin>>T;

    for(int i=0; i<T; ++i) {
        int n, k, p=0, count, ans=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; ++i) cin>>arr[i];

        bool check=true;
        while(check) {

            count = 0;
            for(int k=0; k<n; ++k) {
                int z = arr[k];
                int x = pow(2, p);
                z ^= x;
                if(z <= arr[k]) {
                    arr[k] = z;
                    count++;
                }
            }
            float calculate = (float)count/k;
            ans += ceil(calculate);
            p++;
            for(int k=0; k<n; ++k) {
                if( arr[k] != 0) {
                    check = true;
                    break;
                } 
                else check = false;
            }
        }
        cout<<ans<<"\n";

    }

	return 0;
}
