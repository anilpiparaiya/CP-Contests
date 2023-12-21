
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
};
void inOrder(struct Node *root){
    if(root==NULL)return;
        inOrder(root->left);
        cout<<root->data;
        inOrder(root->right);
}
struct Node * BST(struct Node* root, int data){
    if(root==NULL)
        return NULL;
    cout<<root->data;
    if(root->data > data)
        return BST(root->left,data);
    if(root->data < data)
        return BST(root->right,data);
    return root;
} ;
struct Node* BST_I(struct Node* root, int data){
    while(root){
        if(root->data == data)
            return root;
        else if(root->data < data)
            root = root->right;
        else
            root = root->left;
    }
    return NULL;
};
struct Node* find_min(struct Node* root){
    if(root==NULL)
        return NULL;
    if(root->left==NULL)
        return root;
    return find_min(root->left);
//    iterative
//    while(root->left !=NULL)
//        root = root->left;
//    return root;
};
struct Node* find_max(struct Node* root){
    if(root==NULL)
        return NULL;
    if(root->right==NULL)
        return root;
    return find_min(root->right);
};
struct Node* insert_BST(struct Node* root, int data){
    if(root==NULL){
        root = new Node;
        root->data = data;
        root->left=root->right = NULL;
    }
    else if(data > root->data)
        root->right = insert_BST(root->right,data);
    else if(data< root->data)
        root->left = insert_BST(root->left,data);
    return root;
};
struct Node* delete_BST(struct Node* root, int data){
    struct Node* temp=NULL;
    if(root==NULL)
        cout<<"ELEMENT not Found"<<endl;
    else if(root->data > data)
        root->left = delete_BST(root->left, data);
    else if(root->data < data)
        root->right = delete_BST(root->right, data);
    else{
        if(root->left && root->right){
            temp = find_max(root->left);
            root->data = temp->data;
            root->left = delete_BST(root->left, root->data);
        }else if(root->left || root->right){
            temp = root;
            if(root->left)
                root = root->left;
            if(root->right)
                root= root->right;
            free(temp);
        }else{
            root=NULL;
        }
    }
    return root;
};
int main(){
    struct Node *p,*root;
    root = new Node;
    root->data = 7;
    p = root;
    p->left = new Node;
    p->left->data = 4;
    p->right = new Node;
    p->right->data = 9;
    p = p->left;
    p->left = new Node;
    p->left->data = 2;
        p->left->left = NULL;
        p->left->right = NULL;
    p->right = new Node;
    p->right->data = 5;
        p->right->left = NULL;
        p->right->right = NULL;
    p = root->right;
    p->left = NULL;
    p->right = NULL;

    inOrder(root);
    cout<<"\n search : ";
    int x;
    cin>>x;
    p = BST_I(root,x);
    if(p==NULL)
        cout<<"\n not found";
    else
        cout<<"\nfound";
    cout<<endl;
    cout<<"min element in BSt : "<<find_min(root)->data<<", max  : "<<find_max(root)->data<<endl;
    insert_BST(root,10);
    inOrder(root);
    cout<<endl;
    delete_BST(root,9);
    inOrder(root);
//    levelOrder(root);
}
