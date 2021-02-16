#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
// Steps yo solve this problem
// 1)Make a dynamic vector and do inorder traversal on the tree to put all data values into that vector (Traversing each element time taken O(n) 
// 2)Once we receive values in that vector just sort the vector (Sorting takes O(nlogn))
// 3)Take two pointer i and j and do check these three output->at(i)+output->at(j))</>/==sum (traversing each element takes time O(n))
// 4)Whereever we get output->at(i)+output->at(j)==sum just print value of vector at index i and j 
// 5)Total time n +nlogn +n --->O(nlogn)

#include<algorithm>
#include<vector>
vector<int> *output=new  vector<int>;  
void inorder(BinaryTreeNode<int> *root)
{
     
    if(root==NULL)
        return;
    inorder(root->left);
    output->push_back(root->data);
    inorder(root->right);
}
void pairSum(BinaryTreeNode<int> *root,int sum) {
    if(root==NULL)
        return;
   inorder(root);
   sort(output->begin(),output->end());
   int i=0,j=output->size()-1;
    while(i<j)
    {
        if((output->at(i)+output->at(j))<sum)
        {
            i++;
        }
        else if((output->at(i)+output->at(j))>sum)
        {
            j--;
        }
        else if((output->at(i)+output->at(j))==sum)
        {
            cout<<output->at(i)<<" "<<output->at(j)<<endl;
            i++;
            j--;
        }
    }
}
 


BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int sum;
    cin >> sum;
    pairSum(root, sum);
    delete root;
}
