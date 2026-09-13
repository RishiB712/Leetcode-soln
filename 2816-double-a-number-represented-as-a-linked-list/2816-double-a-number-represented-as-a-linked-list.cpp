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
    ListNode* doubleIt(ListNode* head) {
        ListNode* tmp=head;
        while(tmp!=NULL)
        {
            tmp->val*=2;
            tmp=tmp->next;
        }
        tmp=head;
        while(tmp->next!=NULL)
        {
            if(tmp->next->val>=10)
            {
                tmp->val+=1;
                tmp->next->val%=10;
            }
            tmp=tmp->next;
        }
        tmp=head;
        if(tmp->val>=10)
        {
            ListNode* ans=new ListNode(1,head);
            tmp->val%=10;
            return ans;
        }
        return head;
    }
};