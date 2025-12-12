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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode* newhead=head->next;
        ListNode* curr=head;
        ListNode* prev=NULL;
        
        while(curr && curr->next){
            ListNode* next=curr->next;
            ListNode* nextnext=curr->next->next;

            next->next=curr;
            curr->next=nextnext;
            
            if(prev)prev->next=next;

            prev=curr;
            curr=curr->next;

        }
        return newhead;

    }
};