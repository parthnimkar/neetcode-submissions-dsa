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
    bool isValid(TreeNode* root,long long rangeMin,long long rangeMax){
        if(!root) return true;
        
        if(rangeMin >= root->val || root->val >= rangeMax) return false;

        if(!isValid(root->left,rangeMin,root->val)) return false;
        if(!isValid(root->right,root->val,rangeMax)) return false;

        return true;
    }

    bool isValidBST(TreeNode* root) {
        return isValid(root,INT64_MIN,INT64_MAX);
    }
};
