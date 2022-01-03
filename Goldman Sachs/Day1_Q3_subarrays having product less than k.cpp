// Count the subarrays having product less than k
// Problem Link:https://leetcode.com/problems/subarray-product-less-than-k/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int start=0;
        int end=0;
        int product=1;
        int count=0;
        while(start<nums.size() && end<nums.size()){
            product*=nums[end];
            
            while(product>=k    &&  start<=end){
                    product/=nums[start];
                    start++;
            }
                                    
            if(product<k)    count+=end-start+1;
            // cout<<product<<" "<<count<<endl;
            end++;
        }
        
        
        return count;
    }
};
