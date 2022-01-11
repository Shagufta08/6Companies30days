// IPL 2021 - Match Day 2 
// Problem link: https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/#
// Time Complexity: O(N logN)
// Space Complexity: O(N)

// Priority queue

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int>ans;
        priority_queue<pair<int,int>>p;
        int i=0,j=0;
        while(j<n){
            if(j-i+1<k){
                p.push({arr[j],j});
                j++;
            }
            else{
                p.push({arr[j],j});
                ans.push_back(p.top().first);
                while(!p.empty()){
                    if(p.top().second<=i)    p.pop();
                    else    break;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends
