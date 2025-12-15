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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return nullptr;
        if(head &&  !head->next)return head;
        set<int>S;
        ListNode* curr=head;
        while(curr ){
            S.insert(curr->val);
            curr=curr->next;
        }
        vector<int>A(S.begin(),S.end());
        ListNode* newhead=new ListNode(A[0]);
        ListNode* newcurr=newhead;
        for(int i=1;i<A.size();i++){
            ListNode* temp=new ListNode(A[i]);
            newcurr->next=temp;
            newcurr=newcurr->next;
        }
        return newhead;

        
    }
};