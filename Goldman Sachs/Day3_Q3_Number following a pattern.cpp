/* Given a pattern containing only I's and D's.
I for increasing and D for decreasing.
Devise an algorithm to print the minimum number following that pattern.
*/

// Problem Link: https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1#

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string s){
        // code here 
        string res="";
        stack<int>st;
        int i=0;
        for(;i<s.length();i++){
            st.push(i+1);
            if(s[i]=='I'){
                while(!st.empty()){
                    res+=to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(i+1);
        if(i==s.length()){
            while(!st.empty()){
                    res+=to_string(st.top());
                    st.pop();
            }   
        }
        
        return res;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
