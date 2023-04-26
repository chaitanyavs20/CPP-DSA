#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	   
	    int n,m,k;
	    cin>>n>>m>>k;
	    
	    int i=0;
	    int j=0;
	    int arr1[m];
	    int arr2[k];
	    map<int,int> m1;
	    for(int a=0;a<m;a++){
	        cin>>arr1[a];
	        m1[arr1[a]]++;
	    }
	    for(int b=0;b<k;b++){
	        cin>>arr2[b];
	        m1[arr2[b]]++;
	    }
	    
	    int count1=0;
	    
	    for(int a=1;a<=m1.size();a++){

	        if(m1[a]==2){
	            count1++;
	        }
	        
	        
	    }
	    
	    cout<<count1<<"\t"<<(n-(m+k-count1))<<endl;
	    
	}
	return 0;
}
