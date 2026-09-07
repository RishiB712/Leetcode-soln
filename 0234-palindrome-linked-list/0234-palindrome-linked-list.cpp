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
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
        return true;
        vector<int> lphle;
        while(head!=NULL)
        {
            lphle.push_back(head->val);
            head=head->next;
        }
        int l=0,r=lphle.size()-1;
        while(l<r)
        {
            if(lphle[l]!=lphle[r])
            return false;
            l++;
            r--;
        }
        return true;
    }
};