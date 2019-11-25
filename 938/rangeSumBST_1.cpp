/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        
        int sum = 0;
        TreeNode* tmp = NULL;        
        stack<TreeNode*> stk;    
        stk.push(root);
        
        while (!stk.empty()) {       
            tmp = stk.top();       
            if (L <= tmp->val && tmp->val <= R) {
                sum += tmp->val;
            }
           
            stk.pop();
            
            if (tmp->left) {
               stk.push(tmp->left);
            }       
            if (tmp->right) {
                stk.push(tmp->right);
            }
        }
        
        return sum;
        
    }
};
