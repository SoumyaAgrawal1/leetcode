class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        if(s.length()!=t.length()) return 0;
        for(int i=0;i<s.length();i++){
              mp[s[i]-'a']++;
              mp[t[i]-'a']--;
        }
        for(auto i:mp){
            if(i.second!=0) return 0;
        }
        return 1;
    }
};