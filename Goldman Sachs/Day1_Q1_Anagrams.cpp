//Given an array of strings, return all groups of strings that are anagrams
//Problem link: https://leetcode.com/problems/group-anagrams/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        
        map<string,vector<string>>m;
        for(int i=0;i<strs.size();i++){
            
            string x = strs[i];
            sort(x.begin(),x.end());
            m[x].push_back(strs[i]);
            
        }
        
        for(auto x:m){
            ans.push_back(x.second);
        }
        
        return ans;
    }
};
