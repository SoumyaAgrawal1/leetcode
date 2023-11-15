class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(auto s:strs){
            string st=s;
            sort(st.begin(),st.end());
            mp[st].push_back(s);
        }
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};