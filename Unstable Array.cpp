//Link:-https://www.codechef.com/problems/COUNTSUB?tab=statement
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll countPairs(ll n) {
ll pairs = n * (n - 1) / 2;
return pairs;
}

int main() {
int t;
cin >> t;
while (t--) {
ll n;
cin >> n;
unordered_map<ll, ll> frequency;
    for (ll i = 0; i < n; i++) {
        ll num;
        cin >> num;
        frequency[num]++;
    }

    ll totalPairs = countPairs(n);
    for (auto& [num, freq] : frequency) {
        ll pairsWithNum = countPairs(freq);
        totalPairs -= pairsWithNum;
    }

    cout << totalPairs << endl;
}
return 0;
}
