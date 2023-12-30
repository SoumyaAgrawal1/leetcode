#include <bits/stdc++.h> 
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int,pair<int,int>>>maxi;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int sum=nums1[i]+nums2[j];
                if(maxi.size()<k)
                {
                    maxi.push({sum,{nums1[i],nums2[j]}});
                }
                else if(sum<maxi.top().first)
                {
                 maxi.pop();
                 maxi.push({sum,{nums1[i],nums2[j]}});
                }
               else
                    break;
            }
        }
        while(!maxi.empty()){
            ans.push_back({maxi.top().second.first,maxi.top().second.second});
            maxi.pop();
        }
        return ans;
    }
};