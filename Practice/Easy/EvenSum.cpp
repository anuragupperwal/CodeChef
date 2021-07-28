#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;

    for(int i=0; i<t; ++i) {
        long int n, sum = 0;
        cin>>n;
        long int a[n];
        for(int j=0; j<n; ++j) cin>>a[j];

        for(int j=0; j<n; ++j) {
            sum += a[j];
        }

        if(sum%2 == 0) cout<<"\n1";
        else cout<<"\n2";
    }
    
	return 0;
}
