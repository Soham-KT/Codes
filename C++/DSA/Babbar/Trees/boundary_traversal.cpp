#include <iostream>
#include <vector>
using namespace std;

class node{
    public:
        int data;
        node *left;
        node *right;
    
    node(int d){
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node *build_tree(node *root){
    cout<<"Enter data: ";
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){ return nullptr; }

    cout<<"Insert data to left of: "<<data<<endl;
    root->left = build_tree(root->left);

    cout<<"Insert data to right of: "<<data<<endl;
    root->right = build_tree(root->right);

    return root;
}

void leftTraversal(node *root, vector<int> &ans){
    if((root == nullptr) || (root->left == nullptr && root->right == nullptr)) return ;
    
    ans.push_back(root->data);
    if(root->left) leftTraversal(root->left, ans);
    else leftTraversal(root->right, ans);
}

void nodeTraversal(node *root, vector<int> &ans){
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr) ans.push_back(root->data);

    nodeTraversal(root->left, ans);
    nodeTraversal(root->right, ans);
}

void rightTraversal(node *root, vector<int> &ans){
    if((root == nullptr) || (root->left == nullptr && root->right == nullptr)) return ;

    if(root->right) rightTraversal(root->right, ans);
    else rightTraversal(root->left, ans);

    ans.push_back(root->data);
}

vector<int> boundaryTraversal(node *root){
    vector<int> ans;
    if(root == nullptr) return ans;
    
    ans.push_back(root->data);
    
    // traversing the left subtree
    leftTraversal(root->left, ans);

    // traversing for nodes
    // left subtree
    nodeTraversal(root->left, ans);
    // right subtree
    nodeTraversal(root->right, ans);

    // traversing the right subtree (in reverse)
    rightTraversal(root->right, ans);

    return ans;
}

int main(){
    // creating a tree
    node *root = nullptr;

    root = build_tree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    cout<<endl<<"Boundary traversal: ";
    vector<int> bt = boundaryTraversal(root);
    for(auto i: bt){
        cout<<i<<" ";
    }

    return 0;
}