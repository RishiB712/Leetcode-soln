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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* tmp=head,*add=head;
        while(tmp!=NULL && tmp->next!=NULL)
        {
            add->next=new ListNode(gcd(tmp->val,tmp->next->val),tmp->next);
            tmp=tmp->next->next;
            add=tmp;
        }
        return head;
    }
};