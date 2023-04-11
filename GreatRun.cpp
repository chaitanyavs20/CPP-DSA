/*Vishal loves running. He often visits his favourite Nehru Park and runs for very long distances. On one such visit he found that the number of girls in the park was
unusually high. Now he wants to use this as an opportunity to impress a large number of girls with his awesome speed.
The track on which he runs is an N kilometres long straight path. There are Ai girls standing within the ith kilometre of this path. A girl will be impressed only if 
Vishal is running at his maximum speed when he passes by her. But he can run at his best speed only for a single continuous stretch of K kilometres. Now Vishal wants
to know what is the maximum number of girls that he can impress.
*/

#include <iostream>
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    int sum=0;
	    int m;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<k;i++){
	        sum+=arr[i];
	    }
	    m=sum;
	    for(int i=k;i<n;i++){
	        sum = sum+arr[i]-arr[i-k];
	       m=max(sum,m);
	    }
	    cout<<m<<endl;
	}
	return 0;
}
