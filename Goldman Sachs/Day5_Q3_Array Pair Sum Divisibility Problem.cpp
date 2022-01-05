// Array Pair Sum Divisibility Problem
// Problem link: https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/
// Time Complexity: O(N)
// Space Complexity: O(N)

// using map

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[((arr[i] %k) + k) % k]++;
        }
        int rem1=0,rem2=0;
        for(int i=0;i<arr.size();i++){
            rem1=arr[i]%k;
            rem2=k-arr[i]%k;
            
            if(rem1==0){
                if(m[rem1]%2!=0)   return false;
            }
            else if(m[rem1]!=m[rem2])   return false;
            
        }
        
        return true;
    }
};
