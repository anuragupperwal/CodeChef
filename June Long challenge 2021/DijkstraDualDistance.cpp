#include<iostream>
#include<climits>
#include<map>
#include"/Users/anuragupperwal/stdc++.h" //<bits/stdc++.h>

using namespace std;

#define ll long long int

map <int, map<int, int> > graph;
vector < pair< ll, ll> > queries;

void inputGraph(int V, int Q) {
    for(int i=1; i<=V-1; ++i) {
        ll a, b;
        cin>>a>>b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    for(int i=0; i<Q; ++i) {
        ll a, b;
        cin>>a>>b;
        queries.push_back(make_pair(a, b));
    }
}

int findMinVertex(int V, bool visited[], int wt[]) {
    int minVertex = -1;
    for(int i=1; i<=V; ++i) {
        if(( minVertex == -1 || wt[i] < wt[minVertex]) && !visited[i]) {
            minVertex = i;
        }
    }
    return minVertex;
}

vector<ll> PrimsAlgo(int V, int E, int i) {
    vector<ll> distFromAll;
    int *wt = new int[V+1];
    int *parent = new int[V+1];
    bool *visited = new bool[V+1];

    for(int j=1; j<=V; ++j) {
        visited[j] = false;
        wt[j] = INT_MAX;
    }

    //assigning the root vertex with with appropriate values.
    wt[i] = 0;
    parent[i] = -1;

    //main algorithm to identify the edge with least weight to traverse to.
    for(int j=1; j<=V; ++j) {
        //to find the vertex with minimum weight.
        int minVertex = findMinVertex(V, visited, wt);
        visited[minVertex] = true;
        
        for(int k=1; k<=V; ++k) {
            if(graph[minVertex][k] != 0 && !visited[k]){
                if(wt[k] > graph[minVertex][k] + wt[minVertex]) {
                    wt[k] = graph[minVertex][k] + wt[minVertex];
                    parent[k] = minVertex;
                }
            }
        }            
    } 

    //to print vertices of minimum spanning tree.
    for(int i=1; i<=V; ++i) {
        distFromAll.push_back(wt[i]);
    }

    return distFromAll;
}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        int n, q, E;
        cin>>n>>q;
        E = n-1;
        //allocating matrix 0 for all the elements.
        for(int i=1; i<=n; ++i) {
            for(int j=1; j<=n; ++j) {
                graph[i][j] = 0;
            }
        }
        queries.clear();
        //Taking input for the graph.
        inputGraph(n, q);


        for(int i=0; i<q; ++i) {
            vector<ll> a, b;
            ll minSum=0;
            //implementation of prim's algorithm
            a = PrimsAlgo(n, E, queries[i].first);
            b = PrimsAlgo(n, E, queries[i].second);
            // cout<<"\nsum: "<<minSum<<"\na:"; 
            
            // for(auto it = a.begin(); it!=a.end(); ++it){
            //     cout<<*it<<" ";
            // }
            // cout<<"\nb: ";
            // for(auto it = b.begin(); it!=b.end(); ++it){
            //     cout<<*it<<" ";
            // }
            for(int j = 0; j<a.size(); ++j) {
                ll minimum = min(a[j], b[j]);
                // cout<<"\nmin: "<<minimum<<"\n"; 
                minSum += minimum;
                // cout<<a[j]<<" "<<b[j]<<" "<<minimum<<"\n";
            }
            cout<<minSum<<endl;
        }
    }

    return 0;
}





// 2
// 5 2
// 1 2
// 1 5
// 2 3
// 2 4
// 2 5
// 3 4

// 11 2
// 1 2
// 2 3
// 3 4
// 1 5
// 5 6
// 6 7 
// 6 8
// 8 9
// 8 10
// 7 11
// 3 7
// 2 9