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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode* even=head->next;
        ListNode* evenhead=even;

        ListNode* odd=head;
        ListNode* curr=even->next;
        while(curr){
            odd->next=curr;
            odd=odd->next;
            curr=curr->next;
            if(!curr)break;

            even->next=curr;
            even=even->next;
            curr=curr->next;
            
   
        }
        even->next=nullptr;
        odd->next=evenhead;
        return head;
    }
};