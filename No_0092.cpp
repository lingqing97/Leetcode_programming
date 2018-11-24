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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
    while(m<n)
    {   
        ListNode* ptr1=head;
        ListNode* ptr2=head;
        
        for(int i=1;i<m;i++,ptr1=ptr1->next);
        for(int i=1;i<n;i++,ptr2=ptr2->next);
        int temp=ptr1->val;
        ptr1->val=ptr2->val;
        ptr2->val=temp;
        m++;
        n--;
    }
    return head;
    }
};
