/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

        node->val = node->next ->val;   // node的下一个节点的值复制给node
        ListNode* tmp = node->next;
        node->next = node->next->next;  // node的下一个节点的下一个节点地址赋值给node的下一个节点
        delete tmp;                     // 释放原来node的下一个地址
    }
};
