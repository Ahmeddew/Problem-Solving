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
bool dfs(TreeNode* leftSub,TreeNode* rightSub){
     // base case 
     if (!leftSub && !rightSub) return true;
     if (!leftSub || !rightSub ) return false ;
     return  (leftSub->val  == rightSub->val 
       && dfs(leftSub->left,rightSub->right) && dfs (leftSub->right, rightSub->left)) ;
     
     
}
    bool isSymmetric(TreeNode* root) {
         
        return dfs(root->left,root->right);
    }
};