#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t;
    cin>>t;

    for(int i=0; i<t; ++i) {
        int n, idx=0;
        cin>>n;
        long int s, p, v;
        vector <int> res;

        for(int j=0; j<n; ++j) {
            cin>>s>>p>>v;
            for(int k=0; k<n; ++k) {
                if(p%s == 0) {
                    res.push_back((p/s)*v);
                }
            }
        }
        sort(res.begin(), res.end());

        cout<<res[res.size() -1];
    }
    
	return 0;
}
