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
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next)return head;
        vector<int>bef ,aft;
        ListNode* curr=head;
        while(curr){
            if(curr->val<x)bef.push_back(curr->val);
            else aft.push_back(curr->val);
            curr=curr->next;
        }
        if(bef.empty()){
            ListNode* newhead=new ListNode(aft[0]);
            ListNode* curr=newhead;
            for(int i=1;i<aft.size();i++ ){
                curr->next=new ListNode(aft[i]);
                curr=curr->next;
            }
            return newhead;
        }
        ListNode* newhead=new ListNode(bef[0]);
        ListNode* newcurr=newhead;
        
        for(int i=1;i<bef.size();i++){
            newcurr->next=new ListNode(bef[i]);
            newcurr=newcurr->next;
        }
        for(int i=0;i<aft.size();i++){
            newcurr->next=new ListNode(aft[i]);
            newcurr=newcurr->next;
        }

    
        return newhead;
    }
};