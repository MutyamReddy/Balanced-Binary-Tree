
class Solution {
public:
    int solve(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lh=solve(root->left);
        if(lh==-1){
            return -1;
        }
        int rh=solve(root->right);
        if(rh==-1){
            return -1;
        }
        if(abs(lh-rh)>1){
            return -1;
        }
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(solve(root)!=-1)
            return true;
        return false;
    }
};
