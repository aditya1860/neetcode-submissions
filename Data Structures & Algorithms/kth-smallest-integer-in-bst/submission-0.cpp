class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;

        // Left
        inorder(root->left, ans);

        // Root
        ans.push_back(root->val);

        // Right
        inorder(root->right, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;

        inorder(root, ans);

        return ans[k - 1];
    }
};