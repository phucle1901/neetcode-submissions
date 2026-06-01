class Solution {
public:
    vector<vector<int>> result;
    vector<int> current;
    vector<vector<int>> subsets(vector<int>& nums) {
        Try(0, nums, nums.size());
        return result;
    }
    int visited[100]={0};
    vector <int> f;
    void Try(int start,vector<int>& nums,int n){
        result.push_back(current);
        for(int i=start;i<n;i++){
            current.push_back(nums[i]);
            Try(i+1,nums,n);
            current.pop_back();
        }
    }
};
