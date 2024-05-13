class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0]==0){
                for(int j=0;j<m;j++){
                    grid[i][j]^=1;
                }
            }
        }
        for(int j=1;j<m;j++){
            int ct=0;
            for(int i=0;i<n;i++){
                if(grid[i][j]==1){
                    ct++;
                }
            }
            if((n-ct)>ct){
                for(int i=0;i<n;i++){
                    grid[i][j]^=1;
                }
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum=sum+(grid[i][j])*(1<<(m-j-1));
            }
        }
        return sum;
    }
};