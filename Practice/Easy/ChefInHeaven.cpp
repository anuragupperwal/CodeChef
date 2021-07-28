#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    long int l, goodDeeds=0, badDeeds=0;
	    cin>>l;
	    string s;
        cin>>s;
	    
	    for(int j=0; j<l; ++j){
	        
	        if(s[j] == '1') goodDeeds++;
	        else badDeeds++;
	        
	        if((goodDeeds/j)>=1/2 && goodDeeds*2 >= badDeeds && goodDeeds >= badDeeds) {
	            cout<<"YES\n";
	            break;
	        }
	    }
	    if(goodDeeds < badDeeds) cout<<"NO\n";

	   //cout<<" "<<goodDeeds<<" "<<badDeeds<<"\n";
	   
	}
	return 0;
}
