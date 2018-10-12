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
    ListNode* swapPairs(ListNode* head) {
    if(head==nullptr) return nullptr;
    if(head->next==nullptr) return head;
    ListNode* result=new ListNode(0);
    ListNode* ptr=result;
    while(head!=nullptr&&head->next!=nullptr)
    {
        ptr->next=head->next;
        head->next=head->next->next;
        ptr->next->next=head;
        ptr=ptr->next->next;
        head=ptr->next;
    }
    return result->next;
    }
};
