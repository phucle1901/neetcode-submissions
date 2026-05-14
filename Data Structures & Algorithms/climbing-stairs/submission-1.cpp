class Solution {
public:
    int result[1000]={0};
    int climbStairs(int n) {
        if(result[n]!=0) return result[n];
        if(n==1) result[n]=1;
        else if(n==2) result[n]=2;
        else result[n]=climbStairs(n-1)+climbStairs(n-2);
        return result[n];
    }
};
