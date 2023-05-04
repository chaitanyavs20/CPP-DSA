//Link:-https://www.codechef.com/problems/ROIDS?tab=statement
#include <iostream>
#include<map>
using namespace std;
long long modinv(long long p,long long q)
{
    long long mod =1e9+7;
    long long ex=mod-2;
  // Loop to find the value
    // until the expo is not zero
    while (ex) {
        // Multiply p with q
        // if expo is odd
        if (ex & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
      // Reduce the value of
        // expo by 2
        ex>>= 1;
    }
    return p;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n][2];
	long long mod= 1e9+7;
	int lim = 1e5+1;
    long long fact[lim];
    fact[1] = 1;
    //Precomputation of factorial in O(n)
	for(long long i=2;i<lim;i++){
	  fact[i] = i * fact[i-1];
        fact[i] %=mod;
	}
	map<long long,long long>count;
       for(int i=0;i<n;++i){
           long long x,y;
           cin>>x>>y;
           count[x]++;
       }
        long long ans = 1;
        long long q = fact[n];
       for(auto&x:count){
           ans *= fact[x.second];
           ans %= mod;
       }
	cout<<modinv(ans,q)<<endl;
	return 0;
}
