class Solution {
public:
    int solve(int i,int j,string word1,string word2,vector<vector<int>>& dp){
        if(i>=word1.size() || j>=word2.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        if(word1[i]==word2[j])
            
        return dp[i][j]=1+solve(i+1,j+1,word1,word2,dp);
    
        
        return dp[i][j]=max(solve(i+1,j,word1,word2,dp),solve(i,j+1,word1,word2,dp));

        
  
        
    }
    int minDistance(string word1, string word2) {
        int i=0;
        int j=0;
        int ct=0;
        vector<vector<int>> dp(word1.size()+1,vector<int>(word2.size()+1,-1));
     return word1.size()+word2.size()-2*solve(i,j,word1,word2,dp );
    
    }
};