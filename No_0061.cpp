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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr) return nullptr;
        int length=0;
        for(ListNode* ptr=head;ptr!=nullptr;ptr=ptr->next) length++;
        int kk=k%length;
        if(kk==0) return head;
        int count=1;
        ListNode* first; 
        while(count<=kk)
        {
            first=head;
            ListNode* ptr=head;
            int temp=first->val;
            for(;ptr!=nullptr;ptr=ptr->next)
            {
                if(ptr->next!=nullptr)
                {
                    int temp_2=ptr->next->val;
                    ptr->next->val=temp;
                    temp=temp_2;
                }
                else
                {
                    first->val=temp;
                    count++;
                    
                }
            }
        }
        return first;
    }
};
