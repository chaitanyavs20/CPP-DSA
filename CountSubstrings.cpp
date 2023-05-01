//Link:-https://www.codechef.com/problems/CSUB?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--) {
	    
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    long ones = 0;
	    
	    for(int i=0;i<n;i++) if (s[i] == '1') ones++;
	    
	    long ans = (ones+1) * (ones) / 2;
	    cout<<ans<<endl;
	    
	}
	return 0;
}
