// #include <bits/stdc++.h>
#include"/Users/anuragupperwal/stdc++.h"

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--) {
        int x, y, totalWorkingDays=0, currStreak=1, longestStreak=0;
        cin>>x>>y;
        string s;
        cin>>s;
        char currChar;
        
        for(int i=0; i<30; ++i) {
                    // cout<<"cc: "<<currStreak<<" ss: "<<s[i]<<" "<<longestStreak<<"\n";

            if(s[i] == '1') totalWorkingDays++;

            currChar = s[0];
            if(s[i] == s[i+1] && s[i] == '1') {
                currStreak++;
            }
            else {
                currChar = s[i];
                if(longestStreak < currStreak) {
                    longestStreak = currStreak;
                }
                currStreak = 1;
            }

        }
        if(longestStreak < currStreak) longestStreak = currStreak;

        // cout<<"cc: "<<currStreak<<" ss: "<<longestStreak<<"\n";
	    cout<<(totalWorkingDays*x + longestStreak*y);
	}
	
	return 0;
}
