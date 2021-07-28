#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; ++i) {
        long int n;
        int count=1;
        cin>>n;
        int m[n][n];

        //matrix input
        for(int j=0; j<n; ++j) {
            for(int k=0; k<n; k++) {
                if(j%2 == 0) {
                    m[j][k] = count++;
                }
                else {
                    m[j][k] = --count;
                }
            }
            count += n;
        }

        //matrix printing
        for(int j=0; j<n; ++j) {
            for(int k=0; k<n; k++) cout<<m[j][k]<<" ";
            cout<<"\n";
        }

    }
    
	return 0;
}
