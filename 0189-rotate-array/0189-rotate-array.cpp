class Solution {
public:
    void reversepart(vector<int>& nums,int s,int e){
       while(s<e){
           int temp=nums[s];
           nums[s]=nums[e];
           nums[e]=temp;
           s++;
           e--;
       }
   }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reversepart(nums,0,n-1);
        reversepart(nums,0,k-1);
        reversepart(nums,k,n-1);
    }
};