



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int sum = 0;
        const int len = nums.size();     
        
        for (int i = 0; i < len; ++i) {
            if (sum < 0) {
                sum = nums[i];
            } else {
                sum += nums[i];
            }            
            max_sum = max_sum > sum? max_sum:sum;
        }
        
        
        return max_sum;
    }
};
