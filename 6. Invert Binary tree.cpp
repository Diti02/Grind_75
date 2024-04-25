    //TC: O(N) N=no of nodes of a binary tree
    //SC: O(H) H=height of tree for recursive stack space
    void invert(TreeNode* root){        
        if(root==NULL){
            return;
        }
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;

        invert(root->left);
        invert(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return root;
        }
        invert(root);
        return root;

    }