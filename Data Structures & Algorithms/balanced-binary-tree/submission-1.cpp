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
    // int height(TreeNode* root){
    //     if(!root) return 0;

    //     int left = height(root->left);
    //     int right = height(root->right);

    //     return 1 + max(left,right);
    // }

    // bool isBalanced(TreeNode* root) {
    //     if(!root) return true;

    //     if(!isBalanced(root->left)) return false;
    //     if(!isBalanced(root->right)) return false; 

    //     return abs(height(root->left) - height(root->right)) <= 1; 
    // }

    pair<bool,int> balance(TreeNode* root){
        if(!root) return {true,0};
        
        pair<bool,int> left = balance(root->left);
        if(!left.first) return {false,-1};
        pair<bool,int> right = balance(root->right);
        if(!right.first) return {false,-1};

        if(abs(left.second - right.second) > 1) return {false,-1};

        return {true,max(left.second,right.second) + 1};
    }

    bool isBalanced(TreeNode* root){
        return balance(root).first;
    }
};
