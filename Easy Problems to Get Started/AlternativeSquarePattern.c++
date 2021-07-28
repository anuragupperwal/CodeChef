#include<iostream>

using namespace std;

int main() {
    int n, countFront=0, countRev=11;

    cin>>n;
    for(int i=1; i<=n; ++i) {

        for(int j=0; j<5; ++j) {
            if(i%2!=0)   cout<<++countFront<<" ";
        }
        for(int j=0; j<5; ++j) {
            if(i%2==0) {
                cout<<--countRev<<" ";
            }
        }
        if(i%2 == 0) countRev+=15;
        else countFront+=5;
        cout<<endl;
    }

    return 0;
}