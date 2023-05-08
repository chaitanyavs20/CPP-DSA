//Link:-https://www.codechef.com/problems/XOR_PAL?tab=statement
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string a;
	    cin >> a;
	    int flag=0;
	    for(int i=0;i<n/2;i++)
	    {
	        if(a[i]!=a[n-i-1])
	        {
	            flag++;
	        }
	    }
	    
        cout << (flag+1)/2 << endl;
	}
	return 0;
}
