class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m_elemet = *max_element(candies.begin(), candies.end());
        //cout<<m_elemet; 5
        vector<bool> result;
        for(int i = 0; i<candies.size();++i)
        {
            result.push_back((candies[i]+extraCandies)>= m_elemet);
        }
        return result;
    }
};