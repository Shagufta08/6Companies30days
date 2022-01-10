// Longest Mountain in Array
// Problem link: https://leetcode.com/problems/longest-mountain-in-array/

// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        if(n<3)
            return 0;
        
        int i=1;
        int mx=0;
        while(i<n){
            int left=0,right=0;
            while(i<n   && arr[i-1]==arr[i])
                i++;
            
            while(i<n   && arr[i-1]<arr[i]){
                i++;
                left++;
            }
            while(i<n   && arr[i-1]>arr[i]){
                i++;
                right++;
            }
            if(left>0 && right>0)
                mx=max(mx,right+left+1);            
        }           
        
        return mx;
    }
};
