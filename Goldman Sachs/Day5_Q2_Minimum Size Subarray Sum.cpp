// Minimum Size Subarray Sum
// Problem link: https://leetcode.com/problems/minimum-size-subarray-sum/
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    
    int minSubArrayLen(int target, vector<int>& nums) {
    
        int n = nums.size();
        int sum=0;
        int ans=n+1;
        if(sum>=target)  return 1;
        int i=0,j=0;
        
        while(j<n){
            sum+=nums[j];
        
            while(sum>=target && i<n){
                ans=min(ans,j-i+1);
                sum-=nums[i];
                i++;
            }
        
            j++;
        }
        
        if(ans!=n+1)    return ans;
        
        return 0;
    }
};
