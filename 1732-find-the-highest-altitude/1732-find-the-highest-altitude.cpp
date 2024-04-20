class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int ans=0,max=0;
        for(int i=0;i<gain.size();i++){
            ans=ans + gain[i];
            if(max<ans){
                max =ans;
            }
        }
        return max;   
    }
};