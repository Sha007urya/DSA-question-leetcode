class Solution {
public:
void solve(int ind,  vector<vector<int>> &ans,vector<int> &nums,vector<int> &temp){
    if(ind==nums.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[ind]);
    solve(ind+1,ans,nums,temp);
    temp.pop_back();
    solve(ind+1,ans,nums,temp);
}
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,ans,nums,temp);
        int sum=0;
        for(int i=0;i<ans.size();i++){
            vector<int> a=ans[i];
            int temp=0;
            for(int j=0;j<ans[i].size();j++){
                temp^=ans[i][j];
                

            }
            sum+=temp;
        }
        return sum;
    }
};