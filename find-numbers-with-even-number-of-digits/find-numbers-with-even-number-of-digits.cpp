class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0,ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                count++;
            }
            if(count%2==0)
                ans++;
            count=0;
        }
        return ans;
    }
};