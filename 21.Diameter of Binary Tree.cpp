    //TC: O(N)
    //SC: O(h)
    int diameter(TreeNode* root, int& maxi){
        if(root==NULL){
            return 0;
        }
        int lh=diameter(root->left,maxi);
        int rh=diameter(root->right,maxi);
        maxi=max(maxi,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=INT_MIN;
        diameter(root,maxi);
        return maxi;
    }