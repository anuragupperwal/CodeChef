// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"

using namespace std;

#define ll long long int

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--) {
        int n, a, b, c, count=0;
        cin>>n;

        for(c=1; c<=n/2; ++c) {
            for(b=c; b<=n; b+=c) {
                for(a=c; a<=n ; a+=b){
                    if(a<b) {
                        if(b%c == 0) count++;
                    }
                    else if(a>b) {
                        if(a%b == c && b%c==0) count++;
                    }
                }
            }
        }

        cout<<count<<"\n";
    }


	
	return 0;
}






// 
// 
// 3
// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1
// 
// 4
// 1 2 3 4
// 1 3 2 4
// 1 4 3 2
// 1 2 4 3
// 2 1 3 4
// 2 3 1 4
// 2 4 3 1
// 2 1 4 3
// 3 1 2 4
// 3 2 1 4
// 3 4 2 1
// 3 1 4 2
// 4 1 2 3 
// 4 2 1 3
// 4 3 2 1
// 4 1 3 2


