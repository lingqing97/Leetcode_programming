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
    ListNode* deleteDuplicates(ListNode* head) {
    if(head==nullptr) return nullptr;
    if(head->next!=nullptr&&head->next->val==head->val)
    {
        while(head->next!=nullptr&&head->next->val==head->val)
            head=head->next;
        return deleteDuplicates(head);
    }
    else
        head->next=deleteDuplicates(head->next);
    return head;
    }
};
