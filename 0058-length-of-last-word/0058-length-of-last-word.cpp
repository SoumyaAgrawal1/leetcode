class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int len=0;
        bool flag=0;
        int i=s.length()-1;
        while(i>=0){
            if((s[i]>='a' and s[i]<='z') || (s[i]>='A' and s[i]<='Z'))
            {
                len++;
                flag=1;
             }
            else {
                if(flag==1)
                    break;
            }
            i--;
        }
        return len;
    }
};