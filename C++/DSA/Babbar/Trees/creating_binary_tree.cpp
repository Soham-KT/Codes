#include <iostream>
#include <queue>
#include <stack>
#include <map>
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

void build_tree_from_level_order(node *&root){
    queue<node *> q;
    cout<<"Enter data for root: ";
    int data;
    cin>>data;

    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();

        cout<<"Enter data for left of: "<<temp->data<<endl;
        int ldata;
        cin>>ldata;
        if(ldata != -1){
            temp->left = new node(ldata);
            q.push(temp->left);
        }

        cout<<"Enter data for right of: "<<temp->data<<endl;
        int rdata;
        cin>>rdata;
        if(rdata != -1){
            temp->right = new node(rdata);
            q.push(temp->right);
        }
    }
}

void level_order_traversal(node *root){
    queue<node *> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();

        if(temp == nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }

        else{    
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            
            if(temp->right){
                q.push(temp->right);
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

void inorder_iterative(node *root){
    stack<node *> s;
    while(root || !s.empty()){
        if(root){
            s.push(root);
            root = root->left;
        }
        else{
            root = s.top();
            s.pop();
            cout<<root->data<<" ";
            root = root->right;
        }
    }
}

void preorder(node *root){
    if(root == nullptr){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void preorder_iterative(node *root){
    stack<node *> s;
    while(root || !s.empty()){
        if(root){
            cout<<root->data<<" ";
            s.push(root);
            root = root->left;
        }
        else{
            root = s.top();
            s.pop();
            root = root->right;
        }
    }
}

void postorder(node *root){
    if(root == nullptr){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node *root = nullptr;

    // creating a tree
    // root = build_tree(root); 
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    // cout<<endl<<"Level order traversal: "<<endl;
    // level_order_traversal(root);

    // cout<<endl<<"Inorder traversal: ";
    // inorder(root);

    // cout<<endl<<"Preorder traversal: ";
    // preorder(root);

    // cout<<endl<<"Postorder traversal: ";
    // postorder(root);

    build_tree_from_level_order(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
    // 1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1
    // 9 20 -1 -1 15 7 -1 -1 -1 -1 
    // level_order_traversal(root);
    // cout<<endl<<"Inorder traversal: ";
    // inorder_iterative(root);
    // cout<<endl<<"Preorder traversal: ";
    // preorder_iterative(root);

    return 0;
}