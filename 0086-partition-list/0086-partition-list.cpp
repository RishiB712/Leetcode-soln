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
    ListNode* partition(ListNode* head, int x) {
        ListNode les(0);
        ListNode big(0);
        ListNode* lt=&les;
        ListNode* bt=&big;
        ListNode* tmp=head;
        while(tmp!=NULL)
        {
            if(tmp->val<x)
            {
                lt->next=tmp;
                lt=lt->next;
            } else
            {
                bt->next=tmp;
                bt=bt->next;
            }
            tmp=tmp->next;
        }
        bt->next=NULL;
        lt->next=big.next;
        return les.next;
    }
};