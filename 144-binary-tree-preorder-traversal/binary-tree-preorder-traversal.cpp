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
    void Preorder(TreeNode* root,vector<int> &answer){
        if(root==NULL){
            return;
        }

        answer.push_back(root->val);
        Preorder(root->left,answer);
        Preorder(root->right,answer);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer;
        Preorder(root,answer);
        return answer;
    }
};