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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* t1=head,*t2=head->next;
        while(t2!=NULL)
        {
            if(t1->val==t2->val)
            t2=t2->next;
            else
            {
                t1=t1->next;
                t1->val=t2->val;
            }
        }
        t1->next=NULL;
        return head;
    }
};