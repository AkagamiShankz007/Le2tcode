/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void inorder(struct TreeNode* root, int* k, int* result) {
    if (root == NULL || *k <= 0) {
        return;
    }
    inorder(root->left, k, result);
    (*k)--;
    if (*k == 0) {
        *result = root->val;
        return; 
    }
    inorder(root->right, k, result);
}

int kthSmallest(struct TreeNode* root, int k) {
    int result = 0;
    inorder(root, &k, &result);
    return result;
}