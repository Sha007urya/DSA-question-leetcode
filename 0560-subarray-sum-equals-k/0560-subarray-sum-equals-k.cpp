class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefix=0;
        int ct=0;
        unordered_map<int,int> um;
        um[0]=1;
        for(int i=0;i<nums.size();i++){
            prefix=prefix+nums[i];
            int fd=prefix-k;
            if(um.find(fd)!=um.end()){
                ct+=um[fd];
            }
            um[prefix]++;
        }
        return ct;
    }
};