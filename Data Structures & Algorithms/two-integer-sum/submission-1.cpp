class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int l=0,r=nums.size()-1;
        while(l<r){
            int cur=v[l].first+v[r].first;
            if(cur==target){
                return {min(v[l].second, v[r].second),
                        max(v[l].second, v[r].second)}; 
            }
            else if(cur<target){
                l++;
            }
            else {
                r--;
            }
        }
        return {};
    }
};
