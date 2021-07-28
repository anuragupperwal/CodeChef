#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;

    for(int i=0; i<t; ++i) {
        int t1, t2, t3, t4;
        cin>>t1>>t2>>t3>>t4;
        cout<<(float)t1/(t1+t2);
    }

	return 0;
}
