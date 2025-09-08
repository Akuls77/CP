/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return head;
        }
        int len = 0;
        ListNode * temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        int k = len-n+1;

        if(k==1){
            ListNode * temp1 = head;
            head = head->next;
            delete temp1;
            return head;
        }

        int cnt = 0;
        ListNode * temp2 = head;
        ListNode * prev = NULL;
        while(temp2 != NULL){
            cnt++;
            if(cnt == k){
                prev->next = prev->next->next;
                delete temp2;
                break;
            }
            prev = temp2;
            temp2 = temp2->next;
        }
        return head;
    }
};