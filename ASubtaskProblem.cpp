#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	   
	    int n,m,k;
	    cin>>n>>m>>k;
	    int a[n];
	    int score=0;
	    bool flag=true;
	    bool flag1=true;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]!=1){
	            flag=false;
	          
	        }
	    }
	    if(flag==false){
	         for(int i=0;i<m;i++){
	             if(a[i]!=1){
	                 flag1=false;
	                 
	             }
	         }
	    }
	   
	    if(flag==true){
	        score=100;
	    }
	    else{
	        if(flag1==true){
	        score=k;
	        }
	    }
	    std::cout << score << std::endl;
	}
	return 0;
}
