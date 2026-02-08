/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void ans(TreeNode* node,vector<int>&answer){
        if(node==NULL)return ;
        ans(node->left,answer);
        answer.push_back(node->val);
        ans(node->right,answer);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        //left  root  right 

        vector<int>answer;
        ans(root,answer);
        return answer;

        
    }
};