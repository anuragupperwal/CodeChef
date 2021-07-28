#include<iostream>
#include<map>

using namespace std;

int main() {
    int t, sLen;
    cin>>t;
    
    for(int i=0; i<t; ++i) {
        string s;
        cin>>s;
        sLen = s.length();
        map <char, int> s1Count, s2Count;

        int s1=0, s2;

        if(sLen%2 == 0) {
            s2=sLen/2;
        }
        else s2 = (sLen/2) +1;
        
        //counting the characters
        for(int j=0; j<sLen; ++j) {
            if(sLen%2 == 0) {
                if(j<s2) {
                    if(s1Count.size() == 0) {
                        s1Count.insert(pair<char, int>(s[j], 1));
                    }
                    else {
                        auto it = s1Count.find(s[j]);
                        if(it == s1Count.end()) {
                            s1Count.insert(pair<char, int>(s[j], 1));
                        }
                        else {
                            it->second++;
                        }
                    }
                }
                else {
                    if(s2Count.size() == 0) {
                        s2Count.insert(pair<char, int>(s[j], 1));
                    }
                    else {
                        auto it = s2Count.find(s[j]);
                        if(it == s2Count.end()) {
                            s2Count.insert(pair<char, int>(s[j], 1));
                        }
                        else {
                            it->second++;
                        }
                    }
                }
            }
            else {
                if(j<s2-1) {
                    if(s1Count.size() == 0) {
                        s1Count.insert(pair<char, int>(s[j], 1));
                    }
                    else {
                        auto it = s1Count.find(s[j]);
                        if(it == s1Count.end()) {
                            s1Count.insert(pair<char, int>(s[j], 1));
                        }
                        else {
                            it->second++;
                        }
                    }
                }
                else if(j>=s2) {
                    if(s2Count.size() == 0) {
                        s2Count.insert(pair<char, int>(s[j], 1));
                        // cout<<s[j]<<" ";
                    }
                    else {
                        auto it = s2Count.find(s[j]);
                        if(it == s2Count.end()) {
                            s2Count.insert(pair<char, int>(s[j], 1));
                            // cout<<s[j]<<" ";
                        }
                        else {
                            it->second++;
                            // cout<<s[j]<<" ";
                        }
                    }
                }
            }
        }

        bool flag = true; 
        map<char, int>::iterator itr;                                          
        for(itr = s2Count.begin(); itr != s2Count.end(); ++itr) {
            auto it2 = s1Count.find(itr->first);
            if(it2 == s1Count.end() || it2->second != s2Count[itr->first]) {
                flag = false;
                break;
            }
        }

        if(flag == true) cout<<"YES\n";
        else cout<<" NO\n";

        // for (itr = s1Count.begin(); itr != s1Count.end(); ++itr) {
        //     cout << '\t' << itr->first
        //         << '\t' << itr->second << '\n';
        // }
        // cout<<endl;
        // for (itr = s2Count.begin(); itr != s2Count.end(); ++itr) {
        //     cout << '\t' << itr->first<< '\t' << itr->second << '\n'; 
        // }

    }

    return 0;
}