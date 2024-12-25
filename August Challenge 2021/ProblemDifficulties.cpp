#include <iostream>
// #include <bits/stdc++.h>
#include<map>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
    cin>>t;

    while(t--) {
        int a1, a2, a3, a4, twos[2], i=0;
        cin>>a1>>a2>>a3>>a4;
        
        map <int, int> dict;
        dict[a1] = dict[a1]+1;
        dict[a2] = dict[a2]+1;
        dict[a3] = dict[a3]+1;
        dict[a4] = dict[a4]+1;

        // for (auto &item : dict) {
        //     cout << item.first << ":" << item.second << " ";
        // }

        int parem = dict.size();
        if(parem == 4 || parem==3) cout<<"2\n";
        else if(parem==2) {
            for(map<int,int>::iterator it = dict.begin(); it != dict.end(); ++it) {
                twos[i] = it->first;
                i++;
            }

            if(dict[twos[0]] == dict[twos[1]]) cout<<"2\n";
            else cout<<"1\n";

        }        
        else cout<<"0\n";



    }
	
	return 0;
}
