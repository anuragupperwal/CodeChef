#include <iostream>
#include <vector>

using namespace std;

int recur(int a[], int p[], int q, int n, int count) {
    if(count != q) {
        int o;
        cin>>o;
        int b[n];
        if(o == 1) {
            for(int k=0; k<n; ++k) {
                b[p[k]] = a[k];
            }
            for(int k=0; k<n; ++k) {
                a[k] = b[k];
            }
        }
        else if(o == 2) {
            int u, v, temp;
            cin>>u>>v;
            temp = a[u];
            a[u] = a[v];
            a[v] = temp;
        }
        else if(o == 3) {
            int u;
            cin>>u;
            cout<<a[u];
        }

        recur(a, p, q, n, ++count);
    }
    return 0;
}

int main() {
	int t; 
    cin>>t;

    for(int i=0; i<t; ++i) {
        int n, q;
        cin>>n;
        vector <int> a, p;
        
        for(int j=0; j<n; ++j) {
            int inp;
            cin>>inp;
            a.push_back(inp);
        }
        for(int j=0; j<n; ++j) {
            int inp;
            cin>>inp;
            p.push_back(inp);
        }

        cin>>q;
        // recur(a, p, q, n, 0);

        for(int j=0; j<q; ++j) {
            int o;
            cin>>o;
            int b[n];
            if(o == 1) {
                for(int k=0; k<n; ++k) {
                    b[p[k]] = a[k];
                }
                for(int k=0; k<n; ++k) {
                    a[k] = b[k];
                }
            }
            else if(o == 2) {
                int u, v, temp;
                cin>>u>>v;
                temp = a[u];
                a[u] = a[v];
                a[v] = temp;
            }
            else if(o == 3) {
                int u;
                cin>>u;
                cout<<a[u]<<endl;
            }
        }

    }
	return 0;
}
