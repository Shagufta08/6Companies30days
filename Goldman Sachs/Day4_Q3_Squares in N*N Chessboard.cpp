// Find total number of Squares in a N*N chessboard
// Problem link: https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1

// Time Complexity: O(1)
// Space Complexity: O(1)


// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long count= N*(N+1)*(2*N+1)/6;
        
        
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
