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
    bool check(TreeNode *p,TreeNode*q)
    {
         if(p==nullptr || q==nullptr)return p==q;
         if(p->val!=q->val)return false;
         bool a=check(p->left,q->left);
         bool b=check(p->right,q->right);
         return a&&b;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr || q==nullptr)return p==q;
         return check(p,q);
    }
};