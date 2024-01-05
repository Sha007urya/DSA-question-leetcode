class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }
        int ct=0;
        for(int i=0;i<nums.size();i++){
            if(um.find(k-nums[i])!=um.end() && um[k-nums[i]]>0 && um[nums[i]]>0){
                if(k-nums[i]==nums[i]){
                    if(um[nums[i]]>1){
                           um[k-nums[i]]--;
                um[nums[i]]--;
                ct++;
                    }
                }
                else{
                     um[k-nums[i]]--;
                um[nums[i]]--;
                ct++;
                    
                }
               
            }
            
        }
        return ct;
    }
};