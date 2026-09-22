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
    int countNode(TreeNode* root) {
        if (root == NULL) {
            return 0;
        } else {
            return 1 + countNode(root->left) + countNode(root->right);
        }
    }

    bool check(TreeNode* root, int index, int totalNodes) {

        if (root == NULL) {
            return true;
        }
        if (index > totalNodes) {
            return false;
        }
        return check(root->left, 2 * index, totalNodes) &&
               check(root->right, 2 * index + 1, totalNodes);
    }

    bool isCompleteTree(TreeNode* root) {
        int totalNodes = countNode(root);
        int index = 1;
        return check(root, index, totalNodes);
    }
};