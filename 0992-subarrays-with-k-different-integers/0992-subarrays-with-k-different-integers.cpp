class Solution {
public:
int func(int k,vector<int>& nums){
    int i=0;
    int j=0;
    int n=nums.size();
    unordered_map<int,int> um;
    int ans=0;
    while(j<n && j>=i){
        um[nums[j]]++;
        while(um.size()>k){
            um[nums[i]]--;
            if(um[nums[i]]==0){
                um.erase(nums[i]);
            }
            i++;
        }
        ans+=j-i+1;
        j++;

    }
    return ans;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
     return func(k,nums)-func(k-1,nums);
    }
};