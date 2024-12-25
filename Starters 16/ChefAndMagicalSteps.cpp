// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"

using namespace std;

#define ll long long int

// ll prime[10000004] = {0};
// ll primeInRange[10000004];

// void sieve() {
//     ll n = 10000004;
//     prime[1] = 1;

//     for(ll i = 2; i<=n; ++i) {
//         for(int j=2; i*j <= n; ++j) {
//             prime[i*j] = 1;
//         }
//     }
// }

// void primeCount() {
//     primeInRange[0] = 0;
//     primeInRange[1] = 0;
//     primeInRange[2] = 1;

//     for(int i=3; i<=10000004; ++i) {
//         if(prime[i] == 0) primeInRange[i] = primeInRange[i-1] +1;
//         else primeInRange[i] = primeInRange[i-1];
//     }
// }


const int  MAXN = 1e7;
bool prime[MAXN+5];
int totalPrimes[MAXN+5];

void sieve() {
	fill(begin(prime), end(prime), true);
	prime[0] = prime[1] = false;

	for(int i=2; i<=MAXN; ++i) {
		totalPrimes[i] = totalPrimes[i-1];

		if(!prime[i]) continue;

		totalPrimes[i]++;

		for(int j=2*i; j<=MAXN; j += i) {
			prime[j] = false;
		}
	}
}


int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	sieve();
    // primeCount();
    
	while(t--) {
        int x, y;
        cin>>x>>y;

        cout<<y - x - (totalPrimes[y] - totalPrimes[x+1])<<"\n";


    }
	return 0;
}
