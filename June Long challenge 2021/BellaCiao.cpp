#include<iostream>
// #include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main() {
    long long int t;
    cin>>t;

    while(t--) {
        long long int D, d, P, Q;
        long long int res;
        cin>>D>>d>>P>>Q;

        long long int a1, a2, diff, sub;
        double n;
        a1 = P*d;
        diff = d*Q;
        n = (double)D/d;
        n = ceil(n);

        sub = D%d;
        
        // cout<<"a1: "<<a1<<" a2: "<<a2<<" n: "<<n<<" diff: "<<diff<<endl;

        if(D%d != 0) {
            res = (P*(D/d)*d + (Q*(D/d-1)*(D/d)*d)/2) + (D%d)*(P+(D/d)*Q);
            // res = ((n/2)*(2*a1 + (n-1)*diff)) - ((a1 + (n-1)*diff)/d)*(d-sub);
            // cout<<"if\n";
        }
        else {
            res = (P*(D/d)*d + (Q*(D/d-1)*(D/d)*d)/2);
            // res = (n/2)*(2*a1 + (n-1)*diff);  
            // cout<<"else\n";
        }
        cout<<res<<endl;

        // long long int temp = ((a1 + (n-1)*diff)/d)*(d-sub);
        // cout<<endl<<temp<<endl;






        // int i;
        // for(i=0; dayCount<=D;) {
        //     if(D - dayCount >=d){
        //         totalAmount += (d*(P + (i*Q)));
        //         i++;
        //     }
        //     dayCount += d;
        // }
        // // cout<<"\n"<<D%d<<"\n";
        // if(dayCount > D) {
        //     totalAmount += ((D%d)*(P + i*Q));
        // }



        // cout<<totalAmount<<"\n";

    }

    return 0;
}