class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size();
        int ans=e;
        int mid=s+(e-s)/2;
        while(s<e){
             if(target==nums[mid])
              return mid;
            else if(target>nums[mid])
             s=mid+1;
            else if(target<nums[mid]){ 
                ans=mid;
                 e=mid;   
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};