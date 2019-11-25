/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/*********************************************************
**可以采用二叉树的迭代遍历，如果节点的值在(L,R)范围内，则加入
**sum中。
*********************************************************/
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
