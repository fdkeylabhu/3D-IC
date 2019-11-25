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
 
        if (root==NULL) {
            return 0;
        }
        
        if (root->val < L) {                 //当前节点小于L,返回右子树的值
            return rangeSumBST(root->right, L, R);
        }
        
        if (root->val > R) {                //当前节点大于R,返回左子树的值
            return rangeSumBST(root->left, L, R);
        }
                                            //否则返回当前节点值+左子树和右子树的值
        return root->val + rangeSumBST(root->right, L, R) + rangeSumBST(root->left, L, R); 
        
    }
};
