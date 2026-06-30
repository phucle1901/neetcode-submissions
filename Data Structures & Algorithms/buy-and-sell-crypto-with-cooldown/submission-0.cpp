class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int hold=-prices[0];
        int rest=0;
        int sold=0;
        for(int i=1;i<prices.size();i++){
            int oldhold=hold;
            int oldrest=rest;
            int oldsold=sold;
            hold=max(oldhold,oldrest-prices[i]);
            sold=oldhold+prices[i];
            rest=max(oldrest,oldsold);
        }
        return max(sold,rest);
    }
};
