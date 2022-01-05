//Find max 10 numbers in a list having 10M entries.
// n= 10 million , k=10

// Problem link: https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1
// Time Complexity: O(N log K)
// Space Complexity: O(K)

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        priority_queue<int, vector<int>, greater<int> > p;
        for(int i=0;i<k;i++)    p.push(arr[i]);
        
        for(int i=k;i<n;i++){
            if(arr[i]>p.top()){
                p.pop();
                p.push(arr[i]);
            }
        }
        
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(p.top());
            p.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}
  // } Driver Code Ends
