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
    string preOrder(TreeNode *node){
        if (node==NULL) return "NULL";

        string s = "^"+to_string(node->val);
        s+=preOrder(node->left);
        s+=preOrder(node->right);

        return s;
    }


    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string fulltree = preOrder(root);
        string subtree = preOrder(subRoot);

        return fulltree.find(subtree) != string::npos;
    }
};
