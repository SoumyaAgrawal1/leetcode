class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
               sort(strs.begin(),strs.end());
               int pre=0;
               string first=strs[0]; //first word in strs
               string last=strs[strs.size()-1]; //last word in strs
               int n=min(first.size(),last.size());
               for(int i=0;i<n;i++){
                   if(first[i]==last[i])
                     pre++;
                   else break;
               }
               return first.substr(0,pre);
            }
};