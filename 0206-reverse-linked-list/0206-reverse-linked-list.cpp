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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL or head->next==NULL)
        return head;
        ListNode* c=NULL;
        ListNode* a=head;
        ListNode* b=head->next;
        while(b)
        {
            a->next=c;
            c=a;
            a=b;
            b=b->next;
        }
        a->next=c;
        c=a;
        return c;
    }
};