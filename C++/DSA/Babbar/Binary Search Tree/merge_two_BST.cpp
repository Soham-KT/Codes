#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// ------------------------------------------------------------------------ function to convert a binary tree to a doubly LL
void ConvertToDLL(TreeNode* root, TreeNode* &head){
    if(root == nullptr) return;

    ConvertToDLL(root->right, head);

    root->right = head;

    if(head != nullptr) head->left = root;

    head = root;

    ConvertToDLL(root->left, head);
}

// ------------------------------------------------------------------------ function to merge two linked lists
TreeNode* mergeLL(TreeNode* head1, TreeNode* head2){
    TreeNode* head = nullptr;
    TreeNode* tail = nullptr;

    while(head1 != nullptr && head2 != nullptr){
        if(head1->val < head2->val){
            if(head == nullptr){
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else{
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else{
            if(head == nullptr){
                head = head2;
                tail = head2;
                head2 = head2->right;
            }
            else{
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }

    while(head1){
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }

    while(head2){
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }

    return head;
}

// ------------------------------------------------------------------------ function to count nodes in a linked list
int countNodes(TreeNode* head){
    int n = 0;
    TreeNode* temp = head;
    while(temp){
        n++;
        temp = temp->right;
    }

    return n;
}

// ------------------------------------------------------------------------ function to convert a sorted linked list to a BST
TreeNode* LLToBST(TreeNode* &head, int n){
    if(n <= 0 || head == nullptr) return nullptr;

    TreeNode* left = LLToBST(head, n/2);

    TreeNode* root = new TreeNode(head->val);

    root->left = left;
    head = head->right;
    
    root->right = LLToBST(head, n-n/2-1);

    return root;
}

// ------------------------------------------------------------------------ function to merge 2 BST
TreeNode* mergeBST(TreeNode* root1, TreeNode* root2){

    // step 1: convert the BSTs to DLLs
    
    TreeNode* head1 = nullptr;
    ConvertToDLL(root1, head1);
    head1->left = nullptr;

    TreeNode* head2 = nullptr;
    ConvertToDLL(root2, head2);
    head2->left = nullptr;

    // step 2: merge the DLLs

    TreeNode* head = mergeLL(head1, head2);

    // step 3: convert the merged DLL to a BST (also works for a singly LL)

    return LLToBST(head, countNodes(head));
}

// ------------------------------------------------------------------------ creating a BST
TreeNode* createBST(TreeNode* root, int data){
    if(root == nullptr){
        root = new TreeNode(data);
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

void takeInput(TreeNode* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = createBST(root, data);
        cin >> data;
    }
}

// ------------------------------------------------------------------------ inorder traversal of BST
void inorder(TreeNode* root){
    if(root){
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

int main(){
    TreeNode* root1 = nullptr;

    cout<<"Enter to create BST 1: ";
    takeInput(root1);

    TreeNode* root2 = nullptr;

    cout<<"Enter to create BST 2: ";
    takeInput(root2);

    TreeNode* root = mergeBST(root1, root2);

    inorder(root);

    return 0;
}