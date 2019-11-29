/*************************************
采用二分查找法
*************************************/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {     
        int len = nums.size();
        
        int left = 0;               
        int right = len;            //初始边界
        int mid = 0;
        
        while (left < right) {
            mid = left + (right - left)/2;            
            if (nums[mid] == target) {                
                return mid;                         
            } else if (nums[mid] < target) {
                left = mid + 1;                
            } else {
                right = mid;
            }            
        }
        
        return left;
    }
};
};
