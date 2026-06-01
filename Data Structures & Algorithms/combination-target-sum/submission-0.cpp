class Solution {
public:
    vector <vector<int>> result;
    vector <int> current;
    int f=0;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        Try(0,nums,nums.size(),target);
        return result;
    }
    void Try(int start,vector<int>& nums,int n, int target){
        if(f==target){
            result.push_back(current);
            return;
        }
        for(int i=start;i<n;i++){
            if(f+nums[i]>target) break;
            current.push_back(nums[i]);
            f+=nums[i];
            Try(i,nums,n,target);
            current.pop_back();
            f-=nums[i];            
        }
    }
};
