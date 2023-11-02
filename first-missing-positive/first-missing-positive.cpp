class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       unordered_map<int,int>mp;
        int n=nums.size();
        //if(n==1 and nums[i])
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=1;i<=(n+1);i++){
            if(mp[i]==0)
                return i;
        }
        if(n==1 and nums[0]==1) return 2;
        return n;
    }
};