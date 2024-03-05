#include <iostream>
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

void morris_traversal(node* root){
    if(root == nullptr) return;
    node* curr = root;
    node* pred;

    while(curr != nullptr){
        if(curr->left == nullptr){
            cout<<curr->data<<" ";
            curr = curr->right;
        }
        else{
            pred = curr->left;
            while (pred->right != NULL && pred->right != curr) pred = pred->right;

            if(pred->right == nullptr){
                pred->right = curr;
                curr = curr->left;
            }
            else{
                pred->right = nullptr;
                cout<<curr->data<<" ";
                curr = curr->right;
            }
        }
    }
}

void inorder(node *root){
    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node *root = nullptr;

    // creating a tree
    root = build_tree(root); // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    cout<<"inorder: ";
    inorder(root);
    cout<<endl;
    // cout<<"pred: "<<find_pred(root)->data;
    cout<<"Morris traversal: ";
    morris_traversal(root);

    return 0;
}