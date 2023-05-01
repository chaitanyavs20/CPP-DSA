//Link:-https://www.codechef.com/problems/DISCHAR?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    set<char>st;
	    for(int i=0; i<s.size();i++){
	        st.insert(s[i]);
	    }
	    cout<<st.size()<<endl;
	}
	return 0;
}
