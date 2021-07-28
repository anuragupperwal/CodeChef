#include <iostream>
using namespace std;

int n[1001][1001];

void create() {
    for(int i=1; i<1001; ++i) {
        n[i][1] = i*(i+1)/2;
        for(int j=2; j<1001; ++j) {
            n[i][j] = n[i][j-1] + j-1 + i-1;
        }
    }
}


int main() {
    create();
    int t;
    cin>>t;

    for(int i=0; i<t; ++i) {
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        long int sum=0;

        for(int j=x1; j<=x2; ++j) {
            sum+= n[j][y1];
        }
        for(int j=y1+1; j<=y2; ++j) {
            sum+= n[x2][j];
        }

        cout<<sum<<endl;
    }
	return 0;
}
