#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
        int val;
        Node *left;
        Node *right;

        Node(int val){
            this->val = val;
            this->left = nullptr;
            this->right = nullptr;
        }
};

Node* createBST(Node* root, int data){
    if(root == nullptr){
        root = new Node(data);
        return root;
    }

    if(data < root->val){
        root->left = createBST(root->left, data);
    }

    if(data > root->val){
        root->right = createBST(root->right, data);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = createBST(root, data);
        cin >> data;
    }
}

void level_order_traversal(Node *root){
    queue<Node *> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        if(temp == nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }

        else{    
            cout<<temp->val<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    Node* root = nullptr;

    cout<<"Enter to create BST: ";
    takeInput(root);

    cout<<"Printing level order BST"<<endl;
    level_order_traversal(root);

    return 0;
}