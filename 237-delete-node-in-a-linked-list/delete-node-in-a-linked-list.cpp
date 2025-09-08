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
        //copy next node's value and pointing in node and delete the next node
        node->val = node->next->val;
        ListNode * temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
};