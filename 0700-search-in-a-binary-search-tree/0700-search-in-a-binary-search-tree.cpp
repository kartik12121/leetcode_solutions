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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==nullptr)return NULL;
        TreeNode*a;
        TreeNode*b;
        if(root->val==val)return root;
        else if(root->val>val)
        {
            a=searchBST(root->left,val);
        }
        else
        {
            b=searchBST(root->right,val);
        }
        if(a!=nullptr)return a;
        if(b!=nullptr)return b;
        return NULL;
    }
};