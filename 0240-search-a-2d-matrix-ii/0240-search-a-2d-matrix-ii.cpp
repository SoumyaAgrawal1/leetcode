class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int rowin=0,colin=col-1;
        while(colin>=0 && row>rowin){
            int ele=matrix[rowin][colin];
            if(ele==target)
                return 1;
            else if(ele<target){
                rowin++;
            }
            else
                colin--;
        }
        return 0;
    }
};