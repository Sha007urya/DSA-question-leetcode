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
int ct=0;
void solve(TreeNode* root,unordered_map<int,int> um){
    if(root==NULL){
        return;
    }
    um[root->val]++;
    if(root->left==NULL && root->right==NULL){
        int flag=0;
    for(auto it:um){
        if(it.second%2==1){
            flag++;
        }
    }
    if(flag<=1){
        ct++;
    }
    
    return;
    }
        solve(root->left,um);
    solve(root->right,um);
      
 
 

}
    int pseudoPalindromicPaths (TreeNode* root) {
    
    unordered_map<int,int> um;
    solve(root,um);
    return ct;

    }
};