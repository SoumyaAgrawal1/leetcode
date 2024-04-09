class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> mp;
        for(auto k: grid) mp[k]++;
        int n = grid.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) swap(grid[i][j], grid[j][i]);
        }
        int c = 0;
     for(auto k: grid) c += mp[k];
   
        return c;
        
    }
};