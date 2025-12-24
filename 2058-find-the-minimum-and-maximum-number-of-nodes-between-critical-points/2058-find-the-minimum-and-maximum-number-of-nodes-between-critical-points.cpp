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
        vector<int>values;
        while(head){
            values.push_back(head->val);
            head=head->next;
        }
        vector<int>critical;
        for(int i=1;i<values.size()-1;i++){
            int a=values[i],b=values[i-1],c=values[i+1];
            if(a>b && a>c)critical.push_back(i);
            else if(a<b && a<c)critical.push_back(i);
        }
        if(critical.size()<2)return {-1,-1};
        if(critical.size()==2)return {critical[1]-critical[0],critical[1]-critical[0]};
        int A=INT_MAX;
        for(int i=1;i<critical.size();i++){
            A=min(A,critical[i]-critical[i-1]);
        }
        return {A,critical[critical.size()-1]-critical[0]};

    }
};