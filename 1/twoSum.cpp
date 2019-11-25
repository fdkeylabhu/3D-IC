class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        map<int, int>::iterator iter;
        vector<int> res;
        
        for (int i = 0; i < nums.size(); ++i) {
            if ((iter = mp.find(target-nums[i])) != mp.end()) {  //从map中查找
                res.push_back(i);
                res.push_back(iter->second);                
            } else {               //如果map中不存在，则插入到map中
                mp[nums[i]] = i;
            }
        }
        return res;
    }
};
