class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int num = 0;
       
        /*
        //用无序set保存宝石的种类
        unordered_set<char> jewel_list;    
        for (int i = 0; i < J.size(); ++i) {           
            jewel_list.insert(J[i]);
        }
        
        //对石头集合进行遍历查找是否存在于宝石列表中
        unordered_set<char>::iterator it;
        for (int i = 0; i < S.size(); ++i ) {
            if ((it = jewel_list.find(S[i])) != jewel_list.end()) {
                num++;
            }
        }
        */
        //建立A-a的宝石库数组，长度为58
        vector<int> tmp(58,0);  //宝石库数组，初始化为0
        for (int i = 0; i < J.size(); ++i) {
            tmp[J[i] - 'A']++;                //判断宝石种类
        }
        for (int i = 0; i < S.size(); ++i) {
            if (0 != tmp[S[i] - 'A']) {       //如果宝石库数组中有，则num++
                num++;
            }
        }
       
        return num;
    }
};
