#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
    cin>>t;

    while(t--) {
        int g1, g2, s1, s2, b1, b2, res;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        
        res = (g1+s1+b1 > g2+s2+b2)? 1: 2;
        cout<<res<<"\n";
        
    }
	
	return 0;
}
