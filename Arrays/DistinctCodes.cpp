//Link:- https://www.codechef.com/problems/DISTCODE?tab=statement
#include<bits/stdc++.h>
using namespace std;

void solve()
{
   unordered_set<string> stringSet;

   string s;
   cin >> s;
   for (int i = 0; i < s.length() - 1; i++) {
      string ret = "";
      // cout << s[i] << " " << s[i + 1] << endl;
      ret += s[i];
      ret += s[i + 1];
      if (!stringSet.count(ret)) {
         stringSet.insert(ret);
      }

   }
   cout << stringSet.size() << endl;


}

int main() {
   int t;
   cin >> t;
   while (t--)
   {
      solve();
   }
   return 0;
}
