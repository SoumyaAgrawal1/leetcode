class Solution {
public:
    int first_position(vector<int>& nums, int target){
        int ans=-1;
         int n=nums.size();
         int s=0,e=n-1;
        int mid=(s+(e-s)/2);
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]<target)
                s=mid+1;
        
        else if(nums[mid]>target)
            e=mid-1;
        mid=(s+(e-s)/2);
    }
        return ans;
        }
    
    int last_position(vector<int>& nums, int target){
        int ans=-1;
        int n=nums.size(); 
        int s=0,e=n-1;
        int mid=(s+(e-s)/2);
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
            s=mid+1;
            }
            else if(nums[mid]<target)
                s=mid+1;
        
        else if(nums[mid]>target)
            e=mid-1;
        mid=(s+(e-s)/2);
    }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        ans.push_back(first_position(nums,target));
        ans.push_back(last_position(nums,target));
        return ans;
    }
};