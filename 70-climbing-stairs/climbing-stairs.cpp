class Solution {
public:
    int dp[50];
    Solution() {
        memset(dp,-1,sizeof(dp));
    }
    int climbStairs(int n) {
        dp[1]=1; dp[2]=2;
        for(int i=3;i<=n;i++) {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};