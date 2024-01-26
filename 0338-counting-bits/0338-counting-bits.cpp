class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        int count=0;
        if(n>=0) ans.push_back(0);
        for(int i=1;i<=n;i++){
            int num=i;
            while(num>0){
                int bit=num&1;
                if(bit==1)count++;
                num=num/2;
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
    }
};