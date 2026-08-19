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
    void create(TreeNode *root,vector<string>&result,string s)
    {
        if(root==nullptr)return;
        s+='-';
        s+='>';
        s+=to_string(root->val);
        if(root->left==nullptr && root->right==nullptr)
        {
            result.push_back(s);
            s="";
        }
        create(root->left,result,s);
        create(root->right,result,s);

    }
    vector<string> binaryTreePaths(TreeNode* root) {
         vector<string>result;
        if(root==nullptr)return result;
        if(root->left==nullptr && root->right==nullptr)
        {
            result.push_back(to_string(root->val));
            return result;
        }
        string s="";
        s+=to_string(root->val);
        create(root->left,result,s);
        create(root->right,result,s);
        return result;
    }
};