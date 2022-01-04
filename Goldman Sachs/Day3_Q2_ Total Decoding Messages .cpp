//  Total Decoding Messages 
// Problem Link: https://leetcode.com/problems/decode-ways/

class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0') return 0;
        if(s.length()==1)   return 1;
        
        int c1=1; //prevcount
        int c2=1; //prevtoprevcount
        for(int i=1;i<s.length();i++){
            
            int x = s[i]-'0';
            int y = (s[i-1]-'0')*10 + s[i]-'0';
            int count=0;
            
            if(x>0) count+=c1;
            if(y>=10 && y<=26) count+=c2; 
               
            // cout<<x<< " "<<y<<endl;
            c2=c1;
            c1=count;
        }
        
        return c1;   
    }
};
