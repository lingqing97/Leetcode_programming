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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node_1_behind=head;
        ListNode* ptr=head;
        int i=0;
        while(ptr!=nullptr)
        {
            if(i>=(n+1))
                node_1_behind=node_1_behind->next;
            ptr=ptr->next;
            i++;
        }
        if(n==i)
            return head->next;
        ListNode* temp=node_1_behind->next;
        node_1_behind->next=node_1_behind->next->next;
        delete temp;
        temp=nullptr;
        return head;
    }
};
