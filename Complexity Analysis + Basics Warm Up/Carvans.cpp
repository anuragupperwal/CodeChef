#include <iostream>
#include "/Users/anuragupperwal/stdc++.h" //<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here

    int t, n;
    cin>>t;
    
    long int maxSpeed;

    for(int i=0; i<t; ++i) {
        cin>>n;
        int count = 1;
        long int cars[n];
        for(int j=0; j<n; ++j) {
            cin>>cars[j];
        }

        maxSpeed = cars[0];
        for(int j=1; j<n; ++j) {
            if(maxSpeed >= cars[j]) {
                maxSpeed = cars[j];
                count++;
            }
        }

        cout<<endl<<count<<endl;

    }
	return 0;
}
