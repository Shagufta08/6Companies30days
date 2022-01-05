// Decode the string
// Problem link: https://practice.geeksforgeeks.org/problems/decode-the-string2444/1#

// Time Complexity: O(N)
// Space Complexity: O(N) stack based solution

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
         stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]!=']')   st.push(s[i]);
            else{
                
                string cur="";
                while(st.top()!='['){
                    cur=st.top()+cur;
                    st.pop();
                }
                st.pop(); //'['
                string num="";
                while(!st.empty() && isdigit(st.top())){
                    num=st.top()+num;
                    st.pop();
                }
                int n=stoi(num);
                while(n--){
                    for(int j=0;j<cur.size();j++)
                        st.push(cur[j]);
                }
                
            }
        }
        
        s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
