//Link:-https://practice.geeksforgeeks.org/problems/set-bits0143/1
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int count=0;
        while(N){
            int bit = N&1;
            if(bit) count++;
            N=N>>1;
        }\
        return count;
    }
};
