class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //largest->min heap
priority_queue<int,vector<int>,greater<int>>minh;
        for(int i=0;i<nums.size();i++){
            minh.push(nums[i]);
            if(minh.size()>k){
                minh.pop();
            }
        }
    return minh.top();
    }
    
};