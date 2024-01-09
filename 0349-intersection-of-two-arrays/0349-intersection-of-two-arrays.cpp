class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s;
        vector<int>ans;
        vector<int>aans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        int m=nums1.size();
        int n=nums2.size();
        while(i<m and j<n){
            if(nums1[i]==nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
                i++;
            else j++;
        }
        
       for (int i=0; i<ans.size(); i++)
    {
       // Move the index ahead while there are duplicates
       while (i < ans.size()-1 && ans[i] == ans[i+1])
          i++;
 
       // print last occurrence of the current element
      aans.push_back(ans[i]);
    }
        
        return aans;
    }
};