/*Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character.
If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the 
two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a 
lapindrome. The two halves contain the same characters but their frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.
*/
#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	   
	    string s;
	    cin>>s;
	    bool flag= true;
	    if (s.length() % 2 == 1)
            s.erase(s.length() / 2, 1);
        map<char,int> m;
        
        for(int i=0;i<s.length()/2;i++){
            m.insert(pair<char, int>(s[i],m[s[i]]++));
        }
        for(int i=s.length()/2;i<s.length();i++){
            m.insert(pair<char, int>(s[i],m[s[i]]--));
        }
        for(int i=0;i<m.size();i++){
        if(m[s[i]]!=0){
            flag=false;
        }
        
        }
        
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        cout<<endl;
	}
	return 0;
}
