class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> res;
        int div = 0;
        
        
        for (int i = left; i <= right; ++i) {            
            div = i;                
            while (div) {                
                if (div % 10 == 0 || i % (div % 10) != 0) {    //如果数中有0, 则一定不是自除数
                    break;
                } else {
                    div = div / 10;                   
                }                
            }      
            if (div == 0) {
                res.push_back(i);
            }
            
        }
        
        return res;
    }
};
