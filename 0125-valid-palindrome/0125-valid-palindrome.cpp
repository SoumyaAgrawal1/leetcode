class Solution {
public:
    bool isPalindrome(string str) {
        int i=0;
        string temp;
        int len=str.length();
        while(len>i){
            if(str[i]>='a' and str[i]<='z'){
                temp+=str[i];
            }
            else  if(str[i]>='A' and str[i]<='Z'){
                temp+=(str[i]-'A'+'a');
            }
            else if(str[i]>='0' and str[i]<='9')
                temp+=str[i];
            i++;
        }
        int s=0,e=temp.length()-1;
        while(s<e){
            if(temp[s]!=temp[e])
            {
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }
};