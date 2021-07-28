#include <iostream>
#include<cmath>

using namespace std;


int main() {
	int t;
    cin>>t;

    for(int i=0; i<t; ++i) {
        int g, p, x[10];
        long int max=0, min=0, grpOlderThenG=0;
        cin>>g>>p;
        for(int j=0; j<10; ++j) {
            cin>>x[j];
        }
        for(int j=9; j>=g; --j) {
            grpOlderThenG += x[j];
        }

        // cout<<min<<" "<<max<<" "<<grpOlderThenG<<endl;
        min = ceil((float)(grpOlderThenG+1) / p);
        max = ceil((float)(grpOlderThenG + x[g-1])/p);
        cout<<min<<" "<<max<<endl;

    }
	return 0;
}

//2 2 2 2 2 2 2 2 2 2
//1 2 3 4 5 6 7 8 9 10