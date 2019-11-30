
/****************************************
sum 保存当前累加和
1. 当前的值nums[i]对累加和有增益， sum+nums[i]
2.当前值对累加和负增益，则sum=nums[i]，从该位置计算当前累加和

每次循环与最大累加和进行比较
1. 如果sum > 最大累加和ans
  ans = sum
2. 否则ans保持不变
****************************************/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int sum = 0;
        const int len = nums.size();     
        
        for (int i = 0; i < len; ++i) {
            if (sum < 0) {
                sum = nums[i];
            } else {
                sum += nums[i];
            }            
            
            if (sum > ans) {   //当前累加和 > 最大累加和？
                ans = sum;
            }
        }     
        return ans;
    }
};
