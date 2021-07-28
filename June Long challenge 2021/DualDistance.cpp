#include<iostream>
#include"/Users/anuragupperwal/stdc++.h" //<bits./stdc++>

#define ll long long int

using namespace std;


class Graph {
    public:
        ll n, q, distCount;
        list <ll> *graph;
        queue <ll> Q, empty;
        vector < pair<ll, ll> > queries;
        Graph(ll a, ll b) {
            n = a;
            q = b;
            graph = new list<ll>[n+1];
            distCount = 0;
        }
        void input() {
            for(int i=1; i<=n-1; ++i) {
                ll a, b;
                cin>>a>>b;
                graph[a].push_back(b);
                graph[b].push_back(a);
            }
            for(int i=0; i<q; ++i) {
                ll a, b;
                cin>>a>>b;
                queries.push_back(make_pair(a, b));
            }
        }
        ll bfsUtil(bool check[], int j, ll x) {
            if(j == x) return 0;
            if(Q.empty()){
                Q.push(j);
                check[j] = true;
            }
            // list<ll> mylist (graph[j],graph[j]+graph[j].size());
            list<ll>::iterator it;
            distCount++;
            for(it = graph[j].begin(); it!=graph[j].end(); ++it) {
                if(check[*it] == false) {
                    Q.push(*it);
                    check[*it] = true;
                    cout<<"\nit: "<<*it<<" x:"<<x<<endl;
                    if(*it == x) {
                        cout<<"\n in fun d: "<<distCount<<endl;
                        return distCount;
                    }
                }
            }   
            // cout<<"\ndistCOUNT: "<<distCount<<" ";
            // cout<<endl;
            // for(int i=1; i<=n; ++i) cout<<check[i]<<" ";

            // cout<<" q: "<<Q.front();
            Q.pop();
            if(!Q.empty()) {
                bfsUtil(check, Q.front(), x);
            }
            return distCount;
        }
        ll dist(int j, ll x) {
            bool check[n];
            for(int i=1; i<=n; ++i) check[i] = false;
            distCount = 0;
            while(!Q.empty()) Q.pop();
            return bfsUtil(check, j, x);
        }
        ll temp(){
        //     list<ll>::iterator it;
        //     for(int i=1; i<=n; ++i) {
        //         for(it = graph[i].begin(); it!=graph[i].end(); ++it) {
        //             cout<<*it<<" .";
        //         }
        //         cout<<endl;
        //     }

            // for(int i=0; i<q; ++i) {
            //     cout<<queries[i].first<<" "<<queries[i].second<<endl;
            // }
            // return 0;
            cout<<graph[2].size();
        }

        ll min(ll a, ll b) {
            return ((a<b)?a:b);
        }

        void funCalling() {
            ll dist1, dist2, minSum=0;
            for(int i=0; i<q; ++i) {
                for(int j=4; j<=n; ++j) {
                    cout<<endl;
                    dist1 = dist(j, queries[i].first);
                    cout<<"\nd1: "<<dist1<<"\n";
                    dist2 = dist(j, queries[i].second);
                    cout<<"\nd2: "<<dist2<<"\n";
                    ll minimum = min(dist1, dist2);
                    minSum += minimum;
                }
                cout<<"\nMinSum: "<<minSum<<endl;
            }
        }
};

int main() {
    ios_base::sync_with_stdio(false);

    ll t;
    cin>>t;
    while(t--){
        ll n, q;
        cin>>n>>q;
        Graph g1(n, q);
        g1.input();
        g1.funCalling();


        // cout<<endl;
        // g1.temp();
        // g1.dist(1, 1);
    }


    return 0;
}