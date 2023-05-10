//Link:- https://www.codechef.com/problems/NAME1?tab=statement
#include <bits/stdc++.h>
using namespace std;
string solve(string p, string c){
    /*
    cases where string c can not be a substring of string p:i-
    1) if length of string p < length of string c.
    2) characters which are present in string c but not in string p
       e.g. c="aabz" p="aabb" here character 'z' is not present in string p so, output will be "NO".
    3) if character count of a perticular character string c > string p
       e.g p="aabcd" c="abbcd" here count of character 'b' for p is 1
       and for c is 2, So the output will be "NO".
    */ 
     if(p.size()<c.size())return "NO";
    vector<int>ap(26,0),ac(26,0);
    for(auto i : p)ap[i-'a']++;
    for(auto i : c)ac[i-'a']++;
    for(auto i : c){
        if((!ap[i-'a']) || (ap[i-'a']<ac[i-'a']))return "NO";
        
    }
   
    return "YES";
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    string a, b;
	    cin>>a>>b;
	    int n;
	    cin>>n;
	    //for eg if a="tom", b="marvoloriddle" then p="tommarvoloriddle";
	    string p=a+b;
	    //here c=c1+c2+....cn-1;
	    string c;
	    vector<string> arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        c+=arr[i];
	    }
	    
	    
	    cout<<solve(p,c)<<endl;
	}
	return 0;
}
