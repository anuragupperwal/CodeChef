#include <iostream>
// #include <bits/stdc++.h>
#include "/Users/anuragupperwal/stdc++.h"

using namespace std;

void DFS(list <int> *l, int level)
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    cout << v << " ";
 
    // Recur for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--) {
        int n, q;
        int power = pow(10, 5);
        int qArr[power], z=0;
        char temp;

        cin>>n;
        bool visited[n+1];
        int level[n+1];

        for(int i=1; i<=n; ++i) visited[i] = false;
        list <int> *l;
        l = new list<int>[n+1];
        
        for(int i=1; i<n+1; ++i) {
            int u, v;
            cin>>u>>v;
            l[u].push_back(v);
        }

        //print graph
        // for(int i=1; i<n; ++i) {
        //     cout<<i<<": ";
        //     for(auto it=l[i].begin(); it!=l[i].end(); ++it ){
        //         cout<<*it<<" ";
        //     }
        //     cout<<"\n";
        // }

        cin>>q;
        for(int j=0; j<q; ++j) {
            while(true) {
                scanf("%d%c", &qArr[z], &temp);
                if(temp == '\n') {
                    break;
                }
            }
        }

        // for(int i=1; i<=n; ++i) {
        //     for(list <int>::iterator it =  l[i].begin(); it!= l[i].end(); ++it) {
        //         if(it == qArr[i])
        //     }
        // }
        DFS(l, 9)
    }

	return 0;
}
