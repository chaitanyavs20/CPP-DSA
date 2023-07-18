Problem :- https://leetcode.com/problems/find-subarrays-with-equal-sum/description/

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        if(nums.size()<=1){
            return false;
        } 
        map<int,int>s;
        
        for(int i=1;i<nums.size();i++){
            int sum=0;
            sum=nums[i]+nums[i-1];
            s[sum]++;
            if(s[sum]>1)
                return true;
           
        }
        
        return false;
    }
};
