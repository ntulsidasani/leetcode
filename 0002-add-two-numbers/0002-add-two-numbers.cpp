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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr=l1;
        ListNode* curr2=l2;
        ListNode* prev = nullptr;
        int carry=0;
        while(curr && curr2){
            int a=curr->val+curr2->val+carry;
            carry=a/10;
            curr->val=a%10;
            prev=curr;
            curr=curr->next;
            curr2=curr2->next;
        }
        while(curr){
            int b=curr->val+carry;
            curr->val=b%10;
            carry=b/10;
            prev=curr;
            curr=curr->next;
        }
        while(curr2 ){
            int b=curr2->val+carry;
            carry=b/10;
            prev->next=new ListNode(b%10);
            prev=prev->next;
            curr2=curr2->next;

        }

        if(carry){
            prev->next=new ListNode(carry);
        }
        
        return l1;

    }
};