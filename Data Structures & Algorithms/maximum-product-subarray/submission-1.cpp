class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=(int)nums.size();
        int maxpro=nums[0];
        int minpro=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++){
            int oldMax = maxpro;
            int oldMin = minpro;

            maxpro = max(nums[i], max(oldMax * nums[i], oldMin * nums[i]));
            minpro = min(nums[i], min(oldMax * nums[i], oldMin * nums[i]));

            res = max(res, maxpro);
        }
        return res;
    }
};
