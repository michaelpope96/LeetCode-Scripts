/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (cloned->val == target->val) {
            return cloned;
        }

        if (original->left != NULL) {
            TreeNode* leftResult = getTargetCopy(original->left, cloned->left, target);
            if (leftResult != NULL) {
                return leftResult;
            }
        }

        if (original->right != NULL) {
            TreeNode* rightResult = getTargetCopy(original->right, cloned->right, target);
            if (rightResult != NULL) {
                return rightResult;
            }
        }
        
        return NULL;
    }
};