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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
        return head;
        ListNode* ev=head->next;
        ListNode* od=head;
        ListNode* tmp=head->next;
        while(od!=NULL && od->next!=NULL && ev!=NULL && ev->next!=NULL)
        {
            od->next=od->next->next;
            ev->next=ev->next->next;
            od=od->next;
            ev=ev->next;
        }
        od->next=tmp;
        return head;
    }
};