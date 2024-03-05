#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *l_child, *r_child;
        Node(){
            l_child=nullptr;
            r_child=nullptr;
        }
};

class BST{
    public:
        Node *root=new Node;
        BST(){ root=nullptr; }

        void append(int ele){
            Node *temp=new Node;
            temp->data=ele;
            temp->l_child=nullptr;
            temp->r_child=nullptr;
            if(root==nullptr) root = temp;
            else{
                Node *p=root;
                while(p->l_child!=nullptr && p->r_child!=nullptr){
                    if(ele<=p->data) p=p->l_child;
                    else p=p->r_child;
                }

                if(ele<=p->data){p->l_child=temp;}
                else {p->r_child=temp;} 
            }
        }

        void remove(int ele){
            Node *p=root;
            Node *temp;
            Node *pre;
            pre=p;

            // by default for root
            
            // for left sub tree to get to element
            if(ele<p->data){
                p=p->l_child;
                while(p->data!=ele){
                    if(ele<p->data){
                        pre=p;
                        p=p->l_child;
                    }
                    else if(ele>p->data){
                        pre=p;
                        p=p->r_child;
                    }
                }
            }
            
            // for right sub tree to get to element
            else if(ele>p->data){
                p=p->r_child;
                while(p->data!=ele){
                    if(ele<p->data){
                        pre=p;
                        p=p->l_child;
                    }
                    else if(ele>p->data){
                        pre=p;
                        p=p->r_child;
                    }
                }
            }

            //  to delete left child leaf node
            if(pre->l_child==p && p->l_child==nullptr && p->r_child==nullptr){
                pre->l_child=nullptr;
                cout<<endl<<"Deleted element: "<<p->data<<endl;
                delete p;
            }

            // to delete right child leaf node
            else if(pre->r_child==p && p->l_child==nullptr && p->r_child==nullptr){
                pre->r_child=nullptr;
                cout<<endl<<"Deleted element: "<<p->data<<endl;
                delete p;
            }

            // to delete any non leaf node including root
            else{
                temp=p;
                p=p->r_child;
                while(p->l_child!=nullptr){
                    pre=p;
                    p=p->l_child;
                }
                int temp_num=temp->data;
                temp->data=p->data;
                p->data=temp_num;
                pre->l_child=nullptr;

                cout<<endl<<"Deleted element: "<<p->data<<endl;
                delete p;
            }
        }
};

void inorder(Node *ptr){
    if(ptr!=nullptr){
        inorder(ptr->l_child);
        cout<<ptr->data<<" ";
        inorder(ptr->r_child);
    }
}
void preorder(Node *ptr){
    if(ptr!=nullptr){
        cout<<ptr->data<<" ";
        preorder(ptr->l_child);
        preorder(ptr->r_child);
    }
}
void postorder(Node *ptr){
    if(ptr!=nullptr){
        postorder(ptr->l_child);
        postorder(ptr->r_child);
        cout<<ptr->data<<" ";
    }
}

int main(int sinh, char const *cosech[])
{
    BST tree;
    int choice, ele;
    char opt;
    do
    {
        cout<<"1)Append an element\n2)Delete an element\n3)Display Preorder\n4)Display Inorder\n5)Display Postorder\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter element to append: ";
                cin>>ele;
                tree.append(ele);
                break;

            case 2:
                cout<<"Enter element to delete: ";
                cin>>ele;
                tree.remove(ele);
                break;

            case 3:
                cout<<"PreOrder tree: ";
                preorder(tree.root);
                cout<<endl;
                break;

            case 4:
                cout<<"InOrder tree: ";
                inorder(tree.root);
                cout<<endl;
                break;

            case 5:
                cout<<"PostOrder tree: ";
                postorder(tree.root);
                cout<<endl;
                break;

            default:
                cout<<"Invalid option"<<endl;
                break;
        }

        cout<<"Another choice?(y/n): ";
        cin>>opt;
    } while (opt=='y');
    
    return 0;
}