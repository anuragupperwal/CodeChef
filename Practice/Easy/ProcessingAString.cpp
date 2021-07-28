#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; ++i) {
        string s;
        cin>>s;
        int sum=0;

        for(int j=0; j<s.length(); ++j) {
            if(s[j] >=48 && s[j]<=57) {
                sum+= (s[j]-48);
            }
        }
        cout<<endl<<sum;
    }

	return 0;
}
//48 (0) - 57