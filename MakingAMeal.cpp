/*Today, Chef decided to cook some delicious meals from the ingredients in his kitchen. There are N ingredients, represented by strings 1,2,S
1,S2,…,SN. Chef took all the ingredients, put them into a cauldron and mixed them up.In the cauldron, the letters of the strings representing the ingredients
completely mixed, so each letter appears in the cauldron as many times as it appeared in all the strings in total; now, any number of times, Chef can take one letter 
out of the cauldron (if this letter appears in the cauldron multiple times, it can be taken out that many times) and use it in a meal. A complete meal is the string 
"codechef". Help Chef find the maximum number of complete meals he can make!
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
	    string s;
	    map<char,int> m;
	    for(int i=0;i<n;i++){
	        cin>>s;
	        for(int j=0;j<s.length();j++){
	           m.insert(pair<char,int>(s[j],m[s[j]]++)); 
	        }
	    }

	    vector<int> v;
	    v.push_back(m['c']/2);
	    v.push_back(m['o']/1);
	    v.push_back(m['d']/1);
	    v.push_back(m['e']/2);
	    v.push_back(m['h']/1);
	    v.push_back(m['f']/1);
	    
	    sort(v.begin(),v.end());
	    
	    cout<<v[0]<<endl;
	    
	}
	return 0;
}
