class Solution {
public:
    int removeDuplicates(vector<int>& nums) {        
        //用两个指针i和j,初始的时候i=0,j=1,j不断+1
        //判断i和j位置的值
        //如果i和j的位置不相等，i+1的位置 = j的位置，i+1,j+1
        //如果i和j相等，j++        
        if (nums.size() == 0)
            return 0;
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if(nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }            
        }
        return i+1;
    }
};
