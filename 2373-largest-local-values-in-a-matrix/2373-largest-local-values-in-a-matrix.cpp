class Solution {
public:

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>> ans(n-2,vector<int>(m-2,0));
        for(int i=0;i<(n-2);i++){
            for(int j=0;j<(m-2);j++){
                int maxi=0;
                   for(int k=i;k<=i+2;k++){
        for(int l=j;l<=j+2;l++){
          maxi=max(grid[k][l],maxi);
        }
    }
    ans[i][j]=maxi;

            }
        }
        return ans;
    }
};