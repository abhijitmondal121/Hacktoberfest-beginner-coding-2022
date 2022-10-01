class Solution {
public:
    bool solver(TreeNode* root1,TreeNode* root2)
    { 
         if(root1 == NULL && root2 == NULL)
         {
             return true;
         }
         
        if(root1 == NULL && root2 != NULL)
            return false;
        if(root1 != NULL && root2 == NULL)
            return false;
        if(root1->val != root2->val)
         {
             return false;
         }
         
         bool opt1 = solver(root1->left,root2->right);
         bool opt2 = solver(root1->right,root2->left);
         return opt1&&opt2;
        
    }
    bool isSymmetric(TreeNode* root) {
        return solver(root,root);
            
    }
};
