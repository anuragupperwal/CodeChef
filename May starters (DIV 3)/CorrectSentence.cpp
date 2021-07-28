#include <iostream>
// #include "/Users/anuragupperwal/stdc++.h" 
#include "/Users/anuragupperwal/stdc++.h" //<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
    long int t;
    cin>>t;

    while(t--) {
        int k;
        cin>>k;
        vector <char> v;
        for(int i=0; i<k; ++i) {
            string s, subString;
            cin>>s;
            int arr, lowCount=0, highCount=0;

            for(int i=0; i<s.length(); ++i) {
                if(s[i] >= 'a' && s[i]<= 'z') lowCount++;
                else if(s[i] >= 'A' && s[i] <= 'Z') highCount++;
            }

            // cout<<lowCount<<" "<<highCount<<"\n";

            if(lowCount == 0) {
                bool flag = true;
                for(int j=0; j<s.length(); ++j) {
                    if(s[j] >= 'N' && s[j] <='Z') {
                        subString +=s[j];
                    }
                }

                if(s == subString) flag = true;
                else flag = false;

                if(flag == true) arr = 1;
                else arr = 0;
            }
            else if(highCount == 0) {
                bool flag;
                for(int j=0; j<s.length(); ++j) {
                    if(s[j] >= 'a' && s[j] <='m') {
                        subString +=s[j];
                    }
                }
                // cout<<s<<" "<<subString<<" "<<flag<<"\n";
                if(s == subString) flag = true;
                else flag = false;

                // cout<<flag<<"\n";

                if(flag == true) arr = 1;
                else arr = 0;

                // cout<<arr[i]<<"\n";
            }
            else {
                arr = 0;
            }

            if(arr == 1) v.push_back('y');
            else v.push_back('n');
        }

        char check = 'y';
        // cout<<"vsize: "<<v.size()<<"\n";
        for(int i=0; i<v.size(); ++i) {
            if(v[i] != 'y') {
                check = 'n';
                break;
            }
            // cout<<"in-check: "<<check<<"\n";

            // cout<<v[i]<<" ";
        }

        // cout<<"out-check: "<<check<<"\n";
        if(check == 'y') cout<<"YES\n";
        else cout<<"NO\n";


    }
	return 0;
}

