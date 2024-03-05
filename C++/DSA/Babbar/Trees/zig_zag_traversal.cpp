#include <iostream>
#include <vector>
#include <queue>
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

vector<int> zigZagTraversal(node *root){
    vector<int> result;
    if(root == nullptr) return result;

    bool leftToRight = true;
    queue<node *> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);

        for(int i=0; i<size; i++){
            node *frontNode = q.front();
            q.pop();

            int index = leftToRight ? i : size - i - 1;
            ans[index] = frontNode->data;

            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
        }

        leftToRight = !leftToRight;

        for(auto i: ans){
            result.push_back(i);
        }
    }

    return result;
}

int main(){
    // creating a tree
    node *root = nullptr;

    root = build_tree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    cout<<"Zig Zag Traversal: ";
    vector<int> zzt = zigZagTraversal(root);
    for(auto i: zzt){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}