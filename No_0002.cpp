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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {    
    ListNode* result=(ListNode*)malloc(sizeof(ListNode));
    ListNode* old;
    ListNode* p=l1;
    ListNode* q=l2;
    old=result;
    int num1;
    int num2;
    int carry_bit=0;
    while(p!=nullptr||q!=nullptr)
    {
        num1=((p!=nullptr)?p->val:0);
        num2=((q!=nullptr)?q->val:0);
        ListNode* curr=(ListNode*)malloc(sizeof(ListNode));
        curr->val=(num1+num2+carry_bit)%10;
        curr->next=nullptr;
        carry_bit=(num1+num2+carry_bit)/10;
        old->next=curr;
        old=curr;
        if(p!=nullptr)p=p->next;
        if(q!=nullptr)q=q->next;
    }
    if(carry_bit>0)
    {
        ListNode* curr=(ListNode*)malloc(sizeof(ListNode));
        curr->val=carry_bit;
        curr->next=nullptr;
        old->next=curr;
        old=curr;
    }
    return result->next;
    }
};
