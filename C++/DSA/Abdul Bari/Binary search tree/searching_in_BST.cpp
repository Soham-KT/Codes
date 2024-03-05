#include <iostream>
using namespace std;

class Node_Tree
{
    public:
        Node_Tree *l_child, *r_child;
        int data;
};

class Node
{
    public: 
        Node_Tree *data;
        Node *next;
};

class Queue
{
    Node *head=new Node;
    Node *tail;

    public:
        Queue(){ head=nullptr; tail=nullptr; }

        void enqueue(Node_Tree *ele)
        {
            Node *temp=new Node;
            if(temp==nullptr) cout<<"Queue Full"<<endl;
            else
            {
                temp->data=ele;
                temp->next=nullptr;
                if(head==nullptr) head=tail=temp;
                else
                {
                    tail->next=temp;
                    tail=temp;
                }
            }
        }

        Node_Tree *dequeue()
        {
            Node_Tree *x=nullptr;
            Node *p=head;
            if(head==nullptr) cout<<"Queue Empty"<<endl;
            else
            {
                head=head->next;
                x=p->data;
                free(p);
            }

            return x;
        }

        bool isEmpty() 
        {
            return (head==nullptr)?true:false;
        }
};

class Tree
{
    Node_Tree *ptr, *temp;
    int data;
    Queue q;

    public:
        Node_Tree *root;

        void create_tree()
        {
            cout<<"Enter root node: ";
            cin>>data;
            root=new Node_Tree;
            root->data=data;
            root->l_child=root->r_child=0;
            q.enqueue(root);
            while(!q.isEmpty())
            {
                ptr=q.dequeue();
                cout<<"Enter left child of "<<ptr->data<< "(-1 if not): ";
                cin>>data;
                if(data!=-1)
                {
                    temp=new Node_Tree;
                    temp->data=data;
                    temp->l_child=temp->r_child=0;
                    ptr->l_child=temp;
                    q.enqueue(temp);
                }
                
                cout<<"Enter right child of "<<ptr->data<< "(-1 if not): ";
                cin>>data;
                if(data!=-1)
                {
                    temp=new Node_Tree;
                    temp->data=data;
                    temp->l_child=temp->r_child=0;
                    ptr->r_child=temp;
                    q.enqueue(temp);
                }

            }
        }

        Node_Tree *I_search(int ele)
        {
            Node_Tree *t=root;
            while(t!=nullptr)
            {
                if(ele==t->data) return t;
                else if(ele<t->data) t=t->l_child;
                else t=t->r_child;
            }

            return nullptr;
        }

};

void display_preorder(Node_Tree *ptr)
{
    if(ptr)
    {
        cout<<ptr->data<<" ";
        display_preorder(ptr->l_child);
        display_preorder(ptr->r_child);
    }
}

void display_inorder(Node_Tree *ptr)
{
    if(ptr)
    {
        display_inorder(ptr->l_child);
        cout<<ptr->data<<" ";
        display_inorder(ptr->r_child);
    }
}

void display_postorder(Node_Tree *ptr)
{
    if(ptr)
    {
        display_postorder(ptr->l_child);
        display_postorder(ptr->r_child);
        cout<<ptr->data<<" ";
    }
}

int count_node(Node_Tree *ptr)
{
    int x, y;
    if(ptr)
    {
        x=count_node(ptr->l_child);
        y=count_node(ptr->r_child);
        return x+y+1;
    }
    return 0;
}

Node_Tree *R_search(Node_Tree *ptr, int ele)
{
    if(!ptr) return nullptr;
    else if(ele==ptr->data) return ptr;
    else if(ele<ptr->data) R_search(ptr->l_child, ele);
    else R_search(ptr->r_child, ele);
}

int main()
{
    Tree tr;
    int ele;

    tr.create_tree();
    cout<<"Pre order: ";
    display_preorder(tr.root);
    cout<<"\nIn order: ";
    display_inorder(tr.root);
    cout<<"\nPost order: ";
    display_postorder(tr.root);
    cout<<"\nNumber of nodes in tree: "<<count_node(tr.root)<<endl;

    cout<<"Enter element to search: ";
    cin>>ele;
    cout<<"Element found at(using recursive search): "<<R_search(tr.root, ele)<<endl;
    cout<<"Element found at(using iterative search): "<<tr.I_search(ele)<<endl;

    return 0;
}