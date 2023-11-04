class Solution {
public:
    int hIndex(vector<int>& citations) {
        int maxi=INT_MIN;
        int cnt=0;
        int n=citations.size();
        sort(citations.begin(),citations.end());
         for (int i = 0; i < n; ++i)
         {   if (citations[i] >= n - i)
                return n - i;
         }
    return 0;
    }
};