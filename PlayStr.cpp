*/Chef usually likes to play cricket, but now, he is bored of playing it too much, so he is trying new games with strings. Chef's friend Dustin gave him binary strings 
S and R, each with length N, and told him to make them identical. However, unlike Dustin, Chef does not have any superpower and Dustin lets Chef perform only operations
of one type: choose any pair of integers (i,j) such that 1≤i,j≤N and swap the i-th and j-th character of S. He may perform any number of operations (including zero).For
Chef, this is much harder than cricket and he is asking for your help. Tell him whether it is possible to change the string S to the target string R only using operations of the given type.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    string r;
	    cin >> s;
	    cin >> r;
	    
	    int cntr=0;
	    int cnts=0;
	    
	    cntr=count(r.begin(),r.end(),'1');
	    cnts=count(s.begin(),s.end(),'1');
	    
	    if(cnts==cntr){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
