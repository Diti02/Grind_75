    //TC: O(N)
    //SC: O(h)
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return root;
        }
        if(p->val < root->val && q->val < root->val){       //both values of p, q are less than the value of the root
            return lowestCommonAncestor(root->left,p,q);    //lca lies in the left
        }
        if(p->val > root->val && q->val > root->val){       //both values of p, q are greater than the value of the root
            return lowestCommonAncestor(root->right,p,q);   //lca lies in the right
        }

        return root;    
    }