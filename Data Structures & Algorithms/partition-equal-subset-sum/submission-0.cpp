class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2==1) return 0;
        int target=sum/2;
        vector <int> dp(target+1,0);
        dp[0]=1;
        for(int i=0;i<nums.size();i++){
            for(int j=target;j>=nums[i];j--){
                if(dp[j-nums[i]]==1){
                    dp[j]=1;
                }
            }
        }
        return dp[target];
    }
};
