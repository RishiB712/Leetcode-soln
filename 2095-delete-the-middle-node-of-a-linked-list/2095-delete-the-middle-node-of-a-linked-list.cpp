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
    ListNode* deleteMiddle(ListNode* head) {
        int sz=0;
        ListNode *tmp=head;
        while(tmp!=NULL)
        {
            sz++;
            tmp=tmp->next;
        }
        tmp=head;
        if(sz==1)
        return NULL;
        int c=0;
        while(c!=sz/2-1)
        {
            tmp=tmp->next;
            c++;
        }
        tmp->next=tmp->next->next;
        return head;
    }
};