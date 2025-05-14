class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> inorderhash;
        for(int i =0;i<inorder.size();i++){
            inorderhash[inorder[i]]=i;
        }
        return splitTree(preorder, inorderhash,0,0,inorder.size()-1);
    }

    private:
    TreeNode* splitTree(vector<int> &preorder, unordered_map<int,int>&inorderhash, int rootIndex, int left, int right){
        if (left> right) return NULL;

        TreeNode* root = new TreeNode(preorder[rootIndex]);
        int mid = inorderhash[preorder[rootIndex]];

        if(mid > left){
            root->left = splitTree(preorder,inorderhash, rootIndex+1, left, mid-1);
        }
        if(mid <right){
            root->right = splitTree(preorder,inorderhash, rootIndex+mid-left+1,mid+1,right);
        }
        return root;
    }
};
