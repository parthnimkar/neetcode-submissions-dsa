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
        if(!head) return NULL;
        if(!head->next && n == 1) return NULL;

        ListNode* temp = head;
        for(int i = 0; i < n; i++){
            temp = temp->next;
        }

        if(!temp) {
            ListNode* nodeToDelete = head;
            head = head->next;
            delete nodeToDelete;
            return  head; 
        }

        ListNode* prev = head;

        while(temp->next){
            prev = prev->next;
            temp = temp->next;
        }

        ListNode* nodeToDelete = prev->next;
        prev->next = prev->next->next;
        delete nodeToDelete;

        return head;
    }
};