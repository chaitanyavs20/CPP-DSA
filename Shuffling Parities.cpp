//Link:-https://www.codechef.com/problems/SHUFFLIN
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int even_count=0;
	    int odd_count=0;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]%2==0){
	            even_count++;
	        }
	        else{
	            odd_count++;
	        }
	    }
	    int even_index=n/2;
	    int odd_index=n-(n/2);
	    
	    int sum= min(even_index,odd_count)+min(even_count,odd_index);
	    cout<<sum<<endl;
	    
	}
	return 0;
}
