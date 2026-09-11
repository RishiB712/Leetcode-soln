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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* t2=list1;
        ListNode* t1=list1;
        for(int i=0;i<a-1;i++)
        t1=t1->next;
        for(int i=0;i<b+1;i++)
        t2=t2->next;
        t1->next=list2;
        ListNode* tmp=list2;
        while(tmp->next!=NULL)
        tmp=tmp->next;
        tmp->next=t2;
        return list1;
    }
};