//Link:-https://www.codechef.com/problems/CHPINTU?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m1;
	    cin>>n>>m1;
	    map<int,int> m;
	    int arr1[n],arr2[n];
	    int a;
	    for(int i=0;i<n;i++){
	        cin>>arr1[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>arr2[i];
	        
	    }
	    for(int i=0;i<n;i++){
	        
	        m[arr1[i]]+=arr2[i];
	    }
	    map<int, int>::iterator itr;
	    std::vector<int> v;
	   for (itr = m.begin(); itr != m.end(); ++itr){
	        v.push_back(itr->second);
	        
	    }
	   
	    sort(v.begin(),v.end());
	    cout<<v[0]<<endl;
	}
	return 0;
}
