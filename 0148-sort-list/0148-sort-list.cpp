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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        for(ListNode* tmp=head;tmp;tmp=tmp->next)
        v.push_back(tmp->val);
        sort(v.begin(),v.end());
        int c=0;
        for(ListNode* tmp=head;tmp;tmp=tmp->next)
        {
            tmp->val=v[c];
            c++;
        }
        return head;
    }
};