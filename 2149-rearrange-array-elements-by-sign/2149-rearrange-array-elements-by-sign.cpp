class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        int i=0,j=0;
        int n=nums.size();
        vector<int>pos,neg;//pos and neg ko alag alag ma dal diya
        for(int k=0;k<n;k++){
          if(nums[k]>0)
               pos.push_back(nums[k]);
            else
             neg.push_back(nums[k]);
        }
        int sizee=pos.size();
        for(int ii=0;ii<sizee;ii++){
            ans.push_back(pos[ii]);
            ans.push_back(neg[ii]);
        }
        return ans;
    }
};