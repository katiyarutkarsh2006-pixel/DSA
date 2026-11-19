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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        if(root==NULL){
            return answer;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool LeftToRight = true;
        while(!q.empty()){
            int size = q.size();
            vector<int> ans(size);
            for(int i=0;i<size;i++){
                TreeNode* FrontNode = q.front();
                q.pop();
                int index = LeftToRight ? i : size-i-1;
                ans[index] = FrontNode->val;
                if(FrontNode->left){
                    q.push(FrontNode->left);
                }
                if(FrontNode->right){
                    q.push(FrontNode->right);
                }
            }
            LeftToRight = !LeftToRight;
            answer.push_back(ans);
        }
        return answer;
    }
};