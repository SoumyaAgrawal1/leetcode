class Solution {
public:
    int titleToNumber(string columnTitle) {
        int count = columnTitle.size()-1;  
        int ans = 0;
        
        for(int i = 0;i<columnTitle.size();i++){
            cout<<columnTitle[i]-64<<" ";
           ans += pow(26,count)*(columnTitle[i]-64);
           count--;
        }
        return ans;
    }
};