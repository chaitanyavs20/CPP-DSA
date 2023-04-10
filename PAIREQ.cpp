/*Chef has an array A of length N In one operation, Chef can choose any two distinct indices ,i,j (1≤,≤,≠)(1≤i,j≤N,i=j) and either change Ai to Aj or change Aj to Ai.
Find the minimum number of operations required to make all the elements of the array equal.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int arr[n];
	map<int,int> m;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    m[arr[i]]++;
	}
	int count=0;
	for(auto it:m){
	    if(it.second>count){
	        count=it.second;
	    }
	}
	    if(count>0){
	    cout<<n-count<<endl;    //if no. occurs highest times then n-frequency equlas required no. to change
	    }
	    else{
	        cout<<n-1<<endl;    //if no number is occurd more than once then we willhave to change n-1 numbers
	    }
	}
	return 0;
}
