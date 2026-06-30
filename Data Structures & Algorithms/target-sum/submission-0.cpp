class Solution {
public:
    int backtracking(vector<int>& nums, int target, int index, int currentSum){
        if(index==nums.size()){
            return currentSum==target?1:0;
    
        }
        int plus=backtracking(nums,target,index+1,currentSum+nums[index]);
        int minus=backtracking(nums,target,index+1,currentSum-nums[index]);
        return plus+minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return backtracking(nums,target,0,0);
    }
};
