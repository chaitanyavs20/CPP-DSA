//Link:-https://www.codechef.com/problems/CAPPLE?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	int n;
	cin>>n;
	map<int,int>mp;
    int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
   cout<<mp.size()<<endl;
	}	
	return 0;
}
