class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           vector<pair<int, int>> orignalIndices;

        for(int i=0; i<nums.size(); i++){
            orignalIndices.push_back(make_pair(nums[i], i));
        }

        sort(orignalIndices.begin(), orignalIndices.end());

        int i=0;
        int j=nums.size()-1;

        while(i<=j){
            if(orignalIndices[i].first + orignalIndices[j].first == target){
                return {orignalIndices[i].second, orignalIndices[j].second};
            }
            if(orignalIndices[i].first + orignalIndices[j].first < target){
                i++;
            }
            else{
                j--;
            }
        }    
        return {-1, -1};
    }
};