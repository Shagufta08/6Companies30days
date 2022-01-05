/* Given an unsorted array Arr of size N of positive integers.
One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. 
Find these two numbers.
*/

// Problem link: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#
// Time Complexity: O(N)
// Space Complexity: O(1)


// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *a, int n) {
        // code here
        int* ans = new int[2];
        
        for(int i=0;i<n;i++){
            int t = a[abs(a[i])-1];
            if(t>0)
                a[abs(a[i])-1] *=(-1);
            else
                ans[0] = abs(a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]>0){
                ans[1]=i+1;
                break;
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
