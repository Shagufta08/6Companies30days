// Calculating Maximum Profit 
// Problem link: https://practice.geeksforgeeks.org/problems/maximum-profit4657/1#

// Time Complexity: O(N*K)
// Space Complexity: O(N*K)

// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int k, int n, int a[]) {
        // code here.
        int profit[k+1][n+1];
        
        for(int i=0;i<=k;i++)   profit[i][0]=0;
        for(int j=0;j<=n;j++)   profit[0][j]=0;
        
        for(int i=1;i<=k;i++){
            for(int j=1;j<n;j++){
                int mx=INT_MIN;
                
                for(int x=0;x<j;x++)
                    mx = max(mx,a[j]-a[x]+profit[i-1][x]);
                
                profit[i][j]=max(mx,profit[i][j-1]);
            }
        }
        return profit[k][n-1];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}  // } Driver Code Ends
