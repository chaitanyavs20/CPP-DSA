//Link:-https://www.codechef.com/problems/COUNTSUB?tab=statement
#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n,a;
	    cin>>n;
	    
	     map<long long, long long> m;
    for(long long i=0;i<n;i++){
        cin>>a;
        m[a]++;
    }
	    
	    long long count=0;
	  
	    long long total = (n*(n-1))/2;
	    for(auto it = m.begin(); it != m.end(); ++it){
    long long b = it->second;
    count += (b * (b - 1)) / 2;
}

	    cout<<total-count<<endl;
	}
	return 0;
}
