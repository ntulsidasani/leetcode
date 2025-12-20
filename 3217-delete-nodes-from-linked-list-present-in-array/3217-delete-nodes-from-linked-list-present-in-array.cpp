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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>freq;
        for(auto a:nums)freq[a]++;
        
        while(head && freq.count(head->val) )head=head->next;
        if(!head ||!head->next)return head;
        ListNode* newhead=head;
        ListNode* curr=head->next;
        ListNode* prev=head;
        while(curr){
            while(freq.count(curr->val)){
                curr=curr->next;
            }
            prev->next=curr;
            prev=curr;
            curr=curr->next;
        }
        return newhead;
    }
};