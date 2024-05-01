class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n1=nums1.size();
        int n2=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int st1=0,st2=0;
        while(st1<n1 and st2<n2){
            if(nums1[st1]==nums2[st2]){
                ans.push_back(nums1[st1]);
                st1++;
                st2++;}
            else if(nums1[st1]<nums2[st2]){
                st1++;
            }
            else
                st2++;
        }
        return ans;
    }
};