/*You are given an array A of length N. An element X is said to be dominant if the frequency of X in A is strictly greater than the frequency of any other element in 
the A.For example, if =[2,1,4,4] A=[2,1,4,4,4] then 4 is a dominant element since its frequency is higher than the frequency of any other element in A.Find 
if there exists any dominant element in A.
*/
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
	    vector<int> v;
	    bool flag = false;
	    int index=0;
	    int max_freq=m[1];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        m[arr[i]]++;
	    }
	    for (auto x : m){
	        v.push_back(x.second);
	        
	    }
	    sort(v.begin(), v.end());
	    int c=v.back();
	    v.pop_back();
	    int d=v.back();
	    if(c>d){
	        flag=true;
	    }
	 /* if(m.size()==1){
	        cout<<"YES"<<endl;
	        break;
	    }
	    else{
	        int max_freq=m[1];
	        index=1;
	       for(int i=0;i<m.size();i++){
	           if(max_freq!=m[i]){
	               flag=true;
	               if(m[i]>max_freq){
	                   max_freq=m[i];
	                   index=i;
	               }
	           }
	       }
	       for(int i=0;i<m.size();i++){
	           if(i==index){
	               continue;
	           }else{
	               if(max_freq==m[i]){
	                   flag=false;
	               }
	           }
	       }
	    }  */
	    
	    if(flag){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
