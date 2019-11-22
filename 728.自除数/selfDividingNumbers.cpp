class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> res;
        bool flag = true;
        int div = 0;
        
        
        for (int i = left; i <= right; ++i) {            
            flag = true;
            div = i;                
            while (div) {                
                if (div % 10 == 0) {    //如果数中有0,则一定不是自除数
                    flag = false;
                    break;
                }
                if( i % (div % 10) != 0 ) {   //div % 10 是当前数div的个位
                    flag = false;   
                    break;                    
                } else {
                    div = div / 10;                   
                }                
            }
            
            if (flag) {
                res.push_back(i);
            }
            
        }
        
        return res;
    }
};
