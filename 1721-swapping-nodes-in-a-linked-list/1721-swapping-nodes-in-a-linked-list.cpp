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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* t1=head;
        for(int i=1;i<k;i++)
        t1=t1->next;
        ListNode* tm=t1;
        ListNode* t2=head;
        while(tm->next)
        {
            tm=tm->next;
            t2=t2->next;
        }
        int tmp=t1->val;
        t1->val=t2->val;
        t2->val=tmp;
        return head;
    }
};