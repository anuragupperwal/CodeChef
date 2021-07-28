#include <iostream>
// #include<string>
#include "/Users/anuragupperwal/stdc++.h" //<bits/stdc++.h>

// #include<ctype.h>
#include<vector>
using namespace std;

int main() {
	int t; 
    cin>>t;

    for(int i=0; i<t; ++i) {
        int a[26][26] = {0};
        string s;
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        for(int j=0; j<s.length()-1; ++j) {
            a[((int)s[j]) - 65][((int)s[j+1]) - 65] = 1;
        }

        cout<<((int)s[0]) - 65<<" "<<((int)s[1]) - 65<<" "<<((int)s[2]) - 65<<" "<<((int)s[3]) - 65<<"\n";

        int count=0;
        for(int k=0; k<26; ++k) {
            for(int j=0; j<26; ++j) {
                // cout<<a[k][j]<<" ";
                if(a[k][j] == 1) count++;
            }
            // cout<<endl;
        }

        cout<<"\n"<<count<<endl;

    }

	return 0;
}
