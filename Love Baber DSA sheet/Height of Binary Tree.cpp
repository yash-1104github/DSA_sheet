class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node == nullptr){
            return 0;
        }
        
        int lh = height(node->left);
        int rh = height(node->right);
        
        return max(lh,rh)+1;
        
    }
};
