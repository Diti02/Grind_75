//TC: O(N)
    //SC: O(h)
    int checkBalance(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lh=checkBalance(root->left);
        int rh=checkBalance(root->right);

        if(abs(lh-rh)>1){
            return -1;
        }

        if(lh==-1 || rh==-1){
            return -1;
        }

        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
         if(checkBalance(root)!=-1){
            return true;
         }
         return false;
    }