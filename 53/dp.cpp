class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        const int len = nums.size();
        vector<int> acc(nums);         //保存第i位置最大累加和
        for (int i = 0; i < len; ++i) {
            sum += nums[i];
            if (sum < 0) {
                sum = 0;
            } else {
                acc[i] = sum;
            }
        }
        int max = INT_MIN;
        for (int i = 0; i < len; ++i) {
            if (acc[i] > max) {
                max = acc[i];
            }
        }
        
        return max;
    }
};
