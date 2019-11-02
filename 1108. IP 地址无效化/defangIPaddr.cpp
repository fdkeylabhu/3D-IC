class Solution {
public:
    string defangIPaddr(string address) {

        for (int i = address.size(); i >= 0; --i) {
            cout << address[i] << endl; 
            if (address[i] == '.') {                //使用c++的string的replace方法，注意需要从string末尾开始遍历
                address.replace(i, 1, "[.]");                
            }                       
        }

        return address;
      /*  
        for(int i = address.size(); i >= 0; i--){
            if(address[i] == '.'){
                address.replace(i, 1, "[.]");
            }
        }
        return address;
        */
    }
};
