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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result=new ListNode(0);
        ListNode* ptr=result;
        while(l1&&l2)
        {
            if(l1->val<l2->val)
            {
                ptr->next=l1;
                l1=l1->next;
            }
            else
            {
                ptr->next=l2;
                l2=l2->next;
            }
            ptr=ptr->next;
        }
        if(l1||l2)
            ptr->next=(l1?l1:l2);
        return result->next;
    }
};
