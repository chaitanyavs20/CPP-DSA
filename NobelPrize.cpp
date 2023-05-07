//Link:- https://www.codechef.com/problems/NOBEL?tab=statement
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin>>t;
	while(t--)
	{
    int n, m;
    cin >> n >> m;

    unordered_set<int> hs;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        hs.insert(d);
    }

    if (hs.size() != m) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
	}
	return 0;
}
