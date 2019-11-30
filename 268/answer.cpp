class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
        const int len = nums.size();     
        map<int, int> mp;
        map<int, int>::iterator it; 
        
        for (int i = 0; i < len; ++i) {     //简历hash表
            mp[nums[i]] = 1;
        }
              
        for (int i = 0; i < len+1; ++i) {     //查询
            if ((it = mp.find(i)) == mp.end()) {
                return i;
            }
        }
        
        return 0;
    }
};
