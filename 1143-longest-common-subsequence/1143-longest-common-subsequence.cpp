class Solution {
public:
    //Top down approach
    int Lcs(string text1,string text2,int m,int n,vector<vector<int>>&t){
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++)
                if(i==0 || j==0)
                    t[i][j]=0;      
        }
       for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(text1[i-1]==text2[j-1])
          t[i][j]=1+t[i-1][j-1];
                    else
             t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
            return t[m][n];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector<vector<int>> t(1001 , vector<int> (1001,-1));   
        return Lcs(text1,text2,m,n,t);
    }
};