
 class Solution {
public:
int f(string &t1,string &t2,int i,int  j,vector<vector<int>> &dp){
    if(i<0 || j<0){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(t1[i]==t2[j]){
    return dp[i][j]=1+f(t1,t2,i-1,j-1,dp);
    }
    
        return dp[i][j]=max(f(t1,t2,i-1,j,dp),f(t1,t2,i,j-1,dp));

}
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size()-1;
        int m=text2.size()-1;
        vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
        return f(text1,text2,n,m,dp);
        
        
    }
};