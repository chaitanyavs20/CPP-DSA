//Link:-https://www.codechef.com/problems/SINS?tab=statement
      
#include <iostream>
using namespace std;

// Function to calculate the GCD using the Euclidean algorithm
int calculateGCD(int x, int y) {
    if (y == 0) {
        return x;
    }
    return calculateGCD(y, x % y);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        int gcd = calculateGCD(x, y);
        
        cout << gcd *2 << endl;
    }
    
    return 0;
}
