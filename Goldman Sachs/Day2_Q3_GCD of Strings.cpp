/*Given two strings str1 and str2. We say that str2 divides str1 if it's possible 
to concatenate multiple str2 to get str1. For example, ab divides abab. */

// Problem link: https://leetcode.com/problems/greatest-common-divisor-of-strings/


class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        if(str1>str2)   swap(str1,str2);
        
        for(int i = str1.size();i>=1;i--){
            
            if(str1.size()%i!=0)    continue;
            if(str2.size()%i!=0)    continue;
            
            string s = str1.substr(0,i);
            
            bool flag = true;
            for(int j=0; j< str1.size();j+=i){
                if(str1.substr(j,i)!=s){
                    flag=false;
                    break;
                }
                
            }
            if(!flag)   continue;
            
            for(int j=0; j< str2.size();j+=i){
                if(str2.substr(j,i)!=s){
                    flag=false;
                    break;
                }
                
            }
            if(!flag)   continue;
            
            return s;    
        }
                     
        return "";
    }
};
