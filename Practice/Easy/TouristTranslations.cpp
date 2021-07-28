#include<iostream>
// #include <bits/stdc++.h>
using namespace std;
 
// Driver Code
int main() {
    int t;
    string str;
    cin>>t>>str;
    int n = str.size();
    random_shuffle(&str[0], &str[n-1]);
    cout<<str;
    return 0;
}


//q w e r t y u i o p a s d f g h j k l z x c v b n m
//a b c d e f g h i j k l m n o p q r s t u v w x y z
