#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        int p1=0, p2=n;

        if(n%2==0) {
            cout<<n/2<<endl;
        }
        else {
            cout<<(n/2)+1<<endl;
        }
    }

    return 0;
}