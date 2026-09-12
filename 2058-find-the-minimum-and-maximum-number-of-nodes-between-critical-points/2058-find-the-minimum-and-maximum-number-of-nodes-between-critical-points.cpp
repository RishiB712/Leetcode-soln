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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (head==NULL || head->next==NULL || head->next->next==NULL)
        return {-1,-1};
        vector<int> ind;
        ListNode* p=head;
        ListNode* cr=head->next;
        int c=1;
        while(cr->next!=NULL)
        {
            int pv=p->val;
            int cv=cr->val;
            int nv=cr->next->val;
            if((cv>pv && cv>nv) || (cv<pv && cv<nv))
            ind.push_back(c);
            p=cr;
            cr=cr->next;
            c++;
        }
        if(ind.size()<2)
        return {-1,-1};
        int mx=ind[ind.size()-1]-ind[0];
        int mn=100001;
        for(int i=1;i<ind.size();i++)
        {
            if(ind[i]-ind[i-1]<mn)
            mn=ind[i]-ind[i-1];
        }
        return {mn,mx};
    }
};