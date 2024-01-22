int speedup = []{ios::sync_with_stdio(0); cin.tie(0); return 0;}();
class Solution {
public:
    bool solve(int ind,int last_move,vector<int>&stones,vector<vector<int>>&dp,unordered_map<int,int>&mp){
        // base case:
        if(ind==stones.size()-1){
            return true;
        }
        if(last_move<=0){
            return false;
        }
     
        if(dp[ind][last_move]!=-1){
            return dp[ind][last_move];
        }
    
        if(mp.find(stones[ind]+last_move)!=mp.end()){
        
            int new_ind=mp[stones[ind]+last_move];
            if(solve(new_ind,last_move,stones,dp,mp)){
                return dp[ind][last_move]=true;
            }
        }
       

        if(mp.find(stones[ind]+last_move-1)!=mp.end()){
            int new_ind=mp[stones[ind]+last_move-1];
            if(solve(new_ind,last_move-1,stones,dp,mp)){
                return dp[ind][last_move]=true;
            }
        }


        if(mp.find(stones[ind]+last_move+1)!=mp.end()){
            int new_ind=mp[stones[ind]+last_move+1];
            if(solve(new_ind,last_move+1,stones,dp,mp)){
                return dp[ind][last_move]=true;
            }
        }

        return dp[ind][last_move]=false;
    }
    bool canCross(vector<int>& stones) {
        int n=stones.size();
        // the first jump is always of unit 1...
        if(stones[1]-stones[0]!=1){
            return false; // as it will fall into the water...
        }
        unordered_map<int,int>mp; // to store the postions of all stones..
        for(int i=0;i<n;i++){
            mp[stones[i]]=i;
        }
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1)); // this is used for memoization....
        // ind=1 as we have jumped from 0->1
        // last_move=1 as unit of last jump = 1 
        return solve(1,1,stones,dp,mp);
    }
};