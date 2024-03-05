#include <iostream>
#include <vector>
#include <typeinfo>
#include <bits/stdc++.h> 

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

void inorder(node *root){
    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* maxBtree(vector<int> &nums, int start, int end){
    if(start > end) return nullptr;

    int max, ind = start;
    max = nums[start];
    for(int i = start; i <= end; i++){
        if(max < nums[i]){
            max = nums[i];
            ind = i;
        }
    }

    node* root = new node(nums[ind]);
    root->left = maxBtree(nums, start, ind-1);
    root->right = maxBtree(nums, ind+1, end);

    return root;
}


node* constructMaximumBinaryTree(vector<int> &nums){
    node* root = nullptr;
    root = maxBtree(nums, 0, nums.size()-1);

    return root;
}

int main(int argc, char const *argv[])
{
    node* root = nullptr;
    
    vector<int> nums = {3,2,1,6,0,5};
    root = constructMaximumBinaryTree(nums);
    
    cout<<"Inoder: "<<endl;
    inorder(root);

    return 0;
}
