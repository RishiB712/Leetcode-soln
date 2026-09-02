class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tmp=head;
        int sz=0;
        while(tmp!=NULL)
        {
            sz++;
            tmp=tmp->next;
        }
        tmp=head;
        if(sz==n)
        {
            ListNode* newHead=head->next;
            delete head;
            return newHead;
        }
        int c=sz-n-1;
        for(int i=0;i<c;i++)
        tmp = tmp->next;
        ListNode* nd=tmp->next;
        tmp->next=tmp->next->next;
        delete nd; 
        return head;
    }
};
