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
    pair<int,int> FastDiameter(TreeNode* root){
        if(root==NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }

        pair<int,int> leftDiameter = FastDiameter(root->left);
        pair<int,int> rightDiameter = FastDiameter(root->right);

        int opt1 = leftDiameter.first;
        int opt2 = rightDiameter.first;
        int opt3 = leftDiameter.second + rightDiameter.second;

        pair<int,int> ans;
        ans.first = max(opt1,max(opt2,opt3));
        ans.second = max(leftDiameter.second,rightDiameter.second)+1;

        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return FastDiameter(root).first;
    }
};