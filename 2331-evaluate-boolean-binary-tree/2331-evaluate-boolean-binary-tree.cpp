/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool evaluateTree(TreeNode* root) { return evaluateNode(root); }

    bool evaluateNode(TreeNode* root) {
        if (root->left == NULL && root->right == NULL) {
            return root->val == 1 ? true : false;
        }

        if (root->val == 2) {
            return evaluateNode(root->left) || evaluateNode(root->right);
        }
        if (root->val == 3) {
            return evaluateNode(root->left) && evaluateNode(root->right);
        }
        throw new std::invalid_argument("Value is not 0, 1, 2, or 3");
    }
};