//Link:- https://www.codechef.com/problems/TRISQ?tab=statement
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int b,ans;
	    cin>>b;
	    b=b/2;
	    ans=(b*(b-1))/2;
	    cout<<ans<<endl;
	}
	return 0;
}
