#include<iostream>

using namespace std;

int min(int a, int b) {
    if(a>b) return b;
    else return a;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int x, m, d;
        cin>>x>>m>>d;

        cout<<min(x+m, x+d)<<"\n";
    }

    return 0;
}