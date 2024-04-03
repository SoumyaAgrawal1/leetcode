class Solution {
public:
    bool solve(int i,int j,vector<vector<char>>& board,string word,int index,vector<vector<bool>>&vis){

        if(index==word.length())return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[index] || vis[i][j]==true){
            return false;
        }

        vis[i][j]=true;
        index++;

        bool one = solve(i+1,j,board,word,index,vis);
        bool two = solve(i-1,j,board,word,index,vis);
        bool three=solve(i,j+1,board,word,index,vis);
        bool four=solve(i,j-1,board,word,index,vis);

        vis[i][j]=false;
        
        return(one|| two|| three|| four);
    }
    bool exist(vector<vector<char>>& board, string word) {
       int n = board.size();
         int m = board[0].size();
         vector<vector<bool>>vis(n,vector<bool>(m,0));
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                      if(solve(i,j,board,word,0,vis)){
                        return true;
                      }
                }
            }
         }
        return false;
    }
};