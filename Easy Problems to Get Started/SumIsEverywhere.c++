#include<iostream>

using namespace std;

int main() {
    int n;
    long sumEven=0, sumOdd=0;

    cin>>n;
    int count = 0;
    for(int i=1; n != count; ++i) {
        if(i%2==0) {
            sumEven+=i;
            count++;
        }
    }
    count = 0;
    for(int i=1; n != count; ++i) {
        if(i%2!=0) {
            sumOdd+=i;
            count++;
        }
    }
    cout<<sumOdd<<" "<<sumEven;

    return 0;
}