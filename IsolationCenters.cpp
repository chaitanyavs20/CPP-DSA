//Link:-https://www.codechef.com/problems/CORUS?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,q;
	    cin>>n>>q;
	    string s;
	    cin>>s;
	    int c;
	    sort(s.begin(),s.end());
	    for(int i=0;i<q;i++)
	    {
	        int ans=0;
	        int count=1;
	        cin>>c;
	        for(int j=0;j<s.length();j++)
	        {
	            if(s[j]==s[j+1])
	            count++;
	            else
	            {
	                if(count>c)
	                {
	                    ans=ans+(count-c);
	                }
	                count=1;
	            }
	        }
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
