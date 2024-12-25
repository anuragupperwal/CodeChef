#include <iostream>
// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--) {
	long long int p, a, b, c, x, y, res1, res2, res;
    cin>>p>>a>>b>>c>>x>>y;
    res1 = (b + (x*a));
    res2 = (c + (y*a));
	res = min(res1, res2);
    // res = (res1 < res2)?res1: res2; 
	res = p/res;
    cout<<res<<"\n";
	}
	
	return 0;
}
