//Link:-https://www.codechef.com/problems/ARRSWAP?tab=statement
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> v;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        v a(2*n);
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int m=a[2*n-1]-a[0];
        for(int i=0;i<=n;i++)
        {
            m=min(m,a[i+n-1]-a[i]);
        }
        cout<<m<<"\n";
    }
	return 0;
}
