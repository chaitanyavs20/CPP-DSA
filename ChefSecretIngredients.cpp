//Link:-https://www.codechef.com/problems/CHEFING?tab=statement
#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		unordered_map<char, int>m;
		for (int j = 0; j < n; j++) {
			string s;
			unordered_set<char>st;
			cin >> s;
			for (auto i : s)st.insert(i);
			for (auto i : st)m[i]++;
		}
		int c = 0;
		for (auto i : m) {
			if (i.second == n)c++;
		}
		cout << c << endl;
	}
	return 0;
}
