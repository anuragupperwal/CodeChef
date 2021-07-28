#include<iostream>
#include <stdio.h>
#include<cmath>

using namespace std;

int main () {
    long long int t;
    scanf("%lld", &t);

    while(t--) {
        int xa, xb, Xa, Xb;
        float water, pulp;
        cin>>xa>>xb>>Xa>>Xb;

        water = (float)Xa/xa;
        pulp = (float)Xb/xb;
        cout<<ceil(water)+ceil(pulp)<<"\n";
    }

    return 0;
}