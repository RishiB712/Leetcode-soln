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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=rev(l1);
        ListNode* t2=rev(l2);
        ListNode* sum=add(t1,t2);
        return rev(sum);
    }
    ListNode* rev(ListNode* head) {
        if(head==NULL or head->next==NULL)
        return head;
        ListNode* tmp=rev(head->next);
        head->next->next=head;
        head->next=nullptr;
        return tmp;
    }
    ListNode* add(ListNode* l1, ListNode* l2) {
        ListNode* st=new ListNode();
        ListNode* tmp=st;
        int c=0;
        while(l1!=NULL || l2!=NULL || c!=0)
        {
            int s=c;
            if (l1!=NULL)
            {
                s+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                s+=l2->val;
                l2=l2->next;
            }
            c=s/10;
            tmp->next=new ListNode(s%10);
            tmp=tmp->next;
        }
        return st->next;
    }
};