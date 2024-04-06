class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
       int hcf;
        string ans;
        if(str1+str2 != str2+str1) return "";
        else hcf = gcd(str1.size(),str2.size());
        for(int i=0;i<hcf;i++) ans += str1[i];
        return ans;
        
    }
};