class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>>maxh;
        vector<vector<int>>ans;
        int n=points.size();
        for(int i=0;i<n;i++){
            maxh.push({(points[i][0]*points[i][0]+points[i][1]*points[i][1]),{points[i][0],points[i][1]}});
            if(maxh.size()>k)
                maxh.pop();
        }
        while(maxh.size()>0){
            int first=maxh.top().second.first;
            int second=maxh.top().second.second;
            ans.push_back({first,second});
            maxh.pop();
        }
        return ans;
    }
};