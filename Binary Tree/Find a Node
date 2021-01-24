#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    if(root==NULL)
        return false;
    if(root->data==x)  //If root data is the data we are finding 
        return true;
    if(root->left!=NULL)  //Check for x in left subtree
    {
        bool ans =isNodePresent(root->left,x);
            if(ans==true)
                return true;
                
    }
    if(root->right!=NULL)  //Check for x in right subtree
    {
        bool ans=isNodePresent(root->right,x);
        if(ans==true)
            return true;
    }
    
    return false;
   
}

BinaryTreeNode<int> *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    int x;
    cin >> x;
    cout << ((isNodePresent(root, x)) ? "true" : "false");
}



//Input
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
4
//Output
true
