#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;

    for(int i=0; i<t; ++i) {
        long int n;
        cin>>n;
        long int a[n];
        int count=0;

        for(int j=0; j<n; ++j)  {
            cin>>a[j];
        }
        sort(a, a+n);

        for(int j=0; j<n; ++j) {
            if(a[j] == 0) count++;
        }
        for(int j=count; j<n; ++j){
            if(a[j] <= count) count++;
        } 
        cout<<endl<<count;
    }
    
	return 0;
}
