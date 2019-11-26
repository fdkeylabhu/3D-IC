

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;          //计算nums中多少个与val相同的元素
        int len = nums.size();
        
        for (int i = 0; i < len; ++i) {
            if (nums[i] == val) {    //如果相等 count++
                count++;
            } else {                //否则将i签名的count位置修改为i,就是计算出i前面有多少个与val相同的元素，然后移动多少位
                nums[i-count] = nums[i];
            }
        }
        return len - count;
    }
};
