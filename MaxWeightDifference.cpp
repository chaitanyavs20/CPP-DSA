//Link- https://www.codechef.com/problems/MAXDIFF?tab=statement
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end());
	    int s1=0;
	    int i;
	    int vl=min(k,n-k);
	    for(i=0;i<vl;i++){
	        s1+=v[i];
	    }
	    int s2=0;
	    for(int j=vl;j<n;j++){
	        s2+=v[j];
	    }
	    cout<<abs(s2-s1)<<endl;
	    
	}
	return 0;
}
