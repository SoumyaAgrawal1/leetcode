class Solution {
public:
bool validpallind(string s,int st,int e){
    while(st<=e){
    if(s[st]!=s[e])
         return 0;
    st++;
    e--;    
}
    return 1;
}
bool validPalindrome(string s) {
    bool leftval,rightval;
       int n=s.size();
        int st=0;
        int e=n-1;
    if(validpallind(s,st,e))
        return 1;
        while(st<=e){
            if(s[st]==s[e]){
                st++;
                e--;
            }
            else if(s[st]!=s[e]){
                leftval=validpallind(s,st+1,e);
                rightval=validpallind(s,st,e-1);
                break;
            }
        }
        return leftval || rightval;
    }
};