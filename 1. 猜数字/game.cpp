class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        return (guess[0]==answer[0]) + (guess[1]==answer[1]) + (guess[2]==answer[2]); //比较简单只需要比较数组对应元素是否相同即可
    }
};
