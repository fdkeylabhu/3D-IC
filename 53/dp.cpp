class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int ans = INT_MIN;
        int len = nums.size();
        //dp[i]表示nums中以nums[i]结尾的最大子序和
        vector<int> dp(len);
        dp[0] = nums[0];
        ans = dp[0];
        for (int i = 1; i < len; i++) {
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);      //dp[i]的值取决于dp[i-1]与nums[i]的关系
        }
        ans = *max_element(dp.begin(),dp.end());
        return ans;
    }
};
