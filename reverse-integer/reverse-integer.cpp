class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0){
            int rem=x%10;//3
            if((ans>INT_MAX/10)||(ans<INT_MIN/10))
                 return 0;
            ans=rem+10*ans;//3 23
            x=x/10;
        }
        return ans;
    }
};