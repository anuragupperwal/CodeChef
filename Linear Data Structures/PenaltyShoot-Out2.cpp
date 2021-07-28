#include <iostream>
#include<queue>

using namespace std;

void printPair(pair <char, char> p) {
    cout<<p.first<<p.second<<endl;
}

int main() {
	long int t;
    cin>>t;

    for(int i=0; i<t; ++i) {
        long int n, scoreA=0, scoreB=0;
        string s;
        cin>>n;
        cin>>s;
        queue <pair <char, char> > q;
            
        for(int j=0; j<2*n; j+=2) {
            // if(j%2 == 0) { //team A
            //     if(s[j] == '1')    scoreA++;
            // }
            // else { //team B
            //     if(s[j] == '1')    scoreB++;
            // }

            q.push(make_pair(s[j], s[j+1]));
        }
        int z = q.size();
        for(int j=0; j<z; ++j) {
            // cout<<q.front().first<<q.front().second<<" ";

            char a, b;
            a = q.front().first;
            b = q.front().second;

            if(a == '1') scoreA++;
            
            if(b == '1') scoreB++;

            q.pop();
            
            if(scoreB + (n-(j+1)) < scoreA) {
                cout<<(j+1)*2<<endl;
                break;
            }
            else if(scoreA + (n-(j+1)) < scoreB){
                cout<<(j+1)*2<<endl;
                break;
            }
            else if(q.empty()) {
                cout<<(j+1)*2<<endl;
            }
        }
    }
    

	return 0;
}

//A B
//1 0
//1 1
//1 1
//1 0
//1 1