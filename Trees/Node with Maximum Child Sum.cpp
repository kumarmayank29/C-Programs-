//Method 1

class Pair{
    public:
    TreeNode<int> *root;
    int totalSum;
};

Pair helper(TreeNode<int> *root){
    if(root == NULL){
        Pair p;
        p.root = NULL;
        p.totalSum = 0;
        return p;
    }
    Pair curr;
    curr.root = root;
    int currSum = root->data;
    for(int i = 0; i<root->children.size(); i++){
        currSum += root->children[i]->data;
    }
    curr.totalSum = currSum;
    
    for(int i = 0; i<root->children.size(); i++){
        Pair temp = helper(root->children[i]);
        if(temp.root != NULL && temp.totalSum > curr.totalSum){
            curr = temp;
        }
    }
    return curr;
}

TreeNode<int>* maxSumNode(TreeNode<int> *root){
    if(root == NULL){
        return NULL;
    }
    Pair ans = helper(root);
    return ans.root;
}


//Method 2

TreeNode<int>* maxSumNode(TreeNode<int> *root){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    if(root == NULL)
    {
        return NULL;
    }
    
    
    TreeNode<int> *maxNode = root;
    int max = root->data;
    for(int i=0;i<root->children.size();i++){
        max+=(root->children[i]->data);
    }
     
    
    for(int i = 0; i<root->children.size(); i++){
        TreeNode<int> *temp = maxSumNode(root->children[i]); //pehle jo kia ab v wohi kar rahe buss temp is replaced by root
    
        int curSum=temp->data; //root->children wali node
        
        for(int j=0;j<temp->children.size();j++){
            curSum+=temp->children[j]->data;
        }
      	
        
        if(curSum > max){
            maxNode=temp;
            max = curSum;
        }
    }
    return maxNode;
    
}
