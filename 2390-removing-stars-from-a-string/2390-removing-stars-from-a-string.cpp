class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        int i=0;
        while(s.length()>i){
            if(s[i]!='*')
                st.push(s[i]);
            else
                st.pop();
            ++i;
            }
            s.clear();
            while(!st.empty()){
                s.push_back(st.top());
                st.pop();
            }
        reverse(s.begin(),s.end());
        return s;
        
    }
};