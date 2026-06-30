class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset <int> s;
        for(int x:nums){
            s.insert(x);
        }
        int add=s.size()-k;
        auto it=s.begin();
        for(int i=0;i<add;i++) it++;
        return *it;
    }
};
