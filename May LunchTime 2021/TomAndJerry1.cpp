#include <iostream>

using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;

    while(t--) {
        long int k;
        int a, b, c, d, stepsTakenz=0;
        cin>>a>>b>>c>>d>>k;

        stepsTakenz += abs(c-a);
        stepsTakenz += abs(d-b);

        if(k>=stepsTakenz && k%2 == stepsTakenz%2) {
           cout<<"YES\n";
        }
        else cout<<"NO\n";

    }

	return 0;
}
