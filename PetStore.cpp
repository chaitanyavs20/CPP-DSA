/*Alice and Bob went to a pet store. There are N animals in the store where the ℎ ithanimal is of type A i
Alice decides to buy some of these N animals. Bob decides that he will buy all the animals left in the store after Alice has made the purchase.
Find out whether it is possible that Alice and Bob end up with exactly same multiset of animals.
*/

#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    map<int,int> m;
	    int n;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(m[a[i]]%2!=0){
	            count=1;
	        }
	    }
	    if(count==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
