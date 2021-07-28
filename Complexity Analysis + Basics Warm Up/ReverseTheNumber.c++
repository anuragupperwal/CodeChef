#include<iostream>

using namespace std;

int main() {
    int t, n, i=0;
    cin>>t;

    while(i!=t) {
        cin>>n;

        int prevNum = 0, revNum = 0;
        while(n!=0) {
            int currNum = n%10;
            n = n/10;

            revNum = (revNum*10) + currNum;
            if((revNum - currNum) == prevNum) {
                prevNum = revNum;
            }
        }
        cout<<revNum;
        cout<<endl;
        i++;
    }
    return 0;
}