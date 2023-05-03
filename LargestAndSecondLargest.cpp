//Link:-https://www.codechef.com/START88D/problems/LARGESECOND
#include <iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    //int a[n];
	    int a;
	    set<int> s;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        s.insert(a);
	    }
	     vector<int> num{s.begin(), s.end()};
	    int sum = num[num.size()-1]+ num[num.size()-2];
	    cout<<sum<<endl;
	}
	return 0;
}
