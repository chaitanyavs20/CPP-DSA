/*Chef has an integer X and wants to find out any triplet (A,B,C) such that: 1≤A,B,C≤10^6 and A⋅B+C=X If no such triplet exists, print −1 instead */
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	   
	    long long int x;
	    
	    cin>>x;
	   long long int dig=x%1000000;
	   if(x==1){
	       cout<<"-1"<<endl;
	       continue;
	   }
	   else{
	       if(x<=1000000){
	           cout<<1<<" "<<x-1<<" "<<1<<endl;
	       }
	       else if(dig==0){
	           
	              cout<<1000000<<" "<<(x/1000000)-1<<" "<<1000000<<endl;
	       }  
	       else{
	               cout<<1000000<<" "<<(x/1000000)<<" "<<dig<<endl;
	               
	           }
	       }
	   
	}
	return 0;
}
