#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; ++i) {
        int act, rank, severity, laddu =0;
        string s1, origin;

        cin>>act>>origin;

        for(int j=0; j<act; ++j) {
            cin>>s1;
            if(s1 == "CONTEST_WON") {
                cin>>rank;
                if(rank <20) laddu += (300 + 20-rank);
                else laddu += 300;
            }
            else if(s1 == "TOP_CONTRIBUTOR") {
                laddu +=300;
            }
            else if(s1 == "BUG_FOUND") {
                cin>>severity;
                laddu += severity;
            }
            else if(s1 == "CONTEST_HOSTED") {
                laddu += 50;
            }
        }

        if(origin == "INDIAN")    cout<<laddu/200<<endl;
        else cout<<laddu/400<<endl;

    }

    return 0;
}