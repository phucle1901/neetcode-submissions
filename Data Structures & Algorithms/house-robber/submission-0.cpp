class Solution {
public:
    int result[1000]={0};
    int rob(vector<int>& nums) {
        int n=nums.size();
        result[0]=nums[0];
        result[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            result[i]=max(result[i-1],result[i-2]+nums[i]);
        }
        return result[n-1];
    }
};
