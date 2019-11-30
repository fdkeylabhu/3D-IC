class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        const int len = digits.size();
        for (int i = len - 1; i >= 0; i--) {    
            if (digits[i] != 9) {     //尾数不是9，则直接加1返回
                digits[i]++;
                return digits;            
            }         
            digits[i] = 0;          //尾数如果是9，则变成0
        }
        //如果所有位上全是9，则需要新建数组，长度是原来的长度+1
        vector<int> ans(len+1,0);
        ans[0] = 1;        
        for (int i = 1; i < len+1; ++i) {
            ans[i] = digits[i-1];
        }
        
        return ans;
    }
};
