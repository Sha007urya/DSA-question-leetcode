class Solution {
public:
    int arrangeCoins(int n) {
        long long int start=1;
        long long int end=n;
        long long int ans=0;

        while(start<=end){
            long long int mid=start+(end-start)/2;
            long long int sum=mid*(mid+1)/2;
            if(sum<=n){
                start=mid+1;
                ans=mid;
    
            }
            else if(sum>n){
                end=mid-1;
            }
            
        }
        return ans;
    }
};