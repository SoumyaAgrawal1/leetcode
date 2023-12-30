#include<string>
#include<stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='[')
               st.push(ch);
            else{
            if(!st.empty()){
            char topp=st.top();
              if((topp=='(' && ch==')')||(topp=='[' && ch==']')||(topp=='{' && ch=='}'))
                st.pop();
              else 
                  return 0;
            }
            else return 0;
          }
        }
        if(st.empty())
            return 1;
        else return 0;
    }
        
};