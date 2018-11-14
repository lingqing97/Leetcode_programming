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
    ListNode* partition(ListNode* head, int x) {
    ListNode node1(0);
    ListNode node2(0);
    ListNode* curr1=&node1;
    ListNode* curr2=&node2;
    while(head)
    {
        if(head->val<x)
        {
            curr1->next=head;
            curr1=head;
        }
        else
        {
            curr2->next=head;
            curr2=head;
        }
        head=head->next;
    }
    curr2->next=NULL;
    curr1->next=node2.next;
    return node1.next;
    }
};
