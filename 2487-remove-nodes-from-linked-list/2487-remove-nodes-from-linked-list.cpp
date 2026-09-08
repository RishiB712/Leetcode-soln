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
    ListNode* removeNodes(ListNode* head) {
        ListNode* rev=reverselist(head);
        int max=rev->val;
        ListNode* tmp=rev;
        while(tmp->next!=NULL)
        {
            if(tmp->next->val<max)
            tmp->next=tmp->next->next;
            else
            {
                max=tmp->next->val;
                tmp=tmp->next;
            }
        }
        return reverselist(rev);
    }
    ListNode* reverselist(ListNode* head) {
        if(head==NULL or head->next==NULL)
        return head;
        ListNode* tmp=reverselist(head->next);
        head->next->next=head;
        head->next=nullptr;
        return tmp;
    }
};