#include<iostream>

using namespace std;

int main() {
    double a, b, c, s, A;

    cin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a) {
        cout<<"YES";
    }
    else cout<<"NO";
    
    return 0;
}