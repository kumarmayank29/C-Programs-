#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
//
bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
    // Write your code here
    int k=root1->children.size();
    int m=root2->children.size();
    if(root1==NULL&&root2==NULL)
    {
        return 1;
    }
    if((root1==NULL&&root2!=NULL)||(root1!=NULL&&root2==NULL))
    {
        return 0;
    }
    if(k!=m)
    {
        return 0;
    }
    int i=0;
    while(i<root1->children.size())
    {
        if(root1->data==root2->data)
        {
            bool ans=areIdentical(root1->children[i],root2->children[i]);
            if(ans==0)
            {
                return 0;
                break;
            }
        }
        i++;
        
    }
    return 1;
    
}

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root1 = takeInputLevelWise();
    TreeNode<int>* root2 = takeInputLevelWise();
    cout << (areIdentical(root1, root2) ? "true" : "false");
}
