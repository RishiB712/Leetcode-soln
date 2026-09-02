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
    ListNode* middleNode(ListNode* head) {
        int sz=0;
        ListNode *tmp=head;
        while(tmp!=NULL)
        {
            sz++;
            tmp=tmp->next;
        }
        int c=0;
        tmp=head;
        while(tmp!=NULL)
        {
            if(c==sz/2)
            return tmp;
            else
            {
                tmp=tmp->next;
                c++;
            }
        }
        return NULL;
    }
};