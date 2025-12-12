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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* curr=head;
        vector<int>values;
        while(curr){
            values.push_back(curr->val);
            curr=curr->next;
        }
        vector<int>ans(values.size(),0);
        stack<int>heap;
        for(int i=0;i<values.size();i++){
            while(!heap.empty() && values[heap.top()]<values[i]){
                int b=heap.top();
                heap.pop();
                ans[b]=values[i];
            }
            heap.push(i);
        }
        return ans;
    }

};