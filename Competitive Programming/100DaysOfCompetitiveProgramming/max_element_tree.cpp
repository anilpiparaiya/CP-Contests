#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
void print_tree(struct Node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        print_tree(root->left);
        print_tree(root->right);
    }
}
int maximum_element(struct Node *root, int n){
    queue<struct Node *> q;
    struct Node *temp = NULL;
    q.push(root);
    while(!q.empty()){
        temp = q.front();
        cout<<temp->data<<" ";
        n= max(temp->data, n);
        q.pop();
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    return n;
}
int main(){
    struct Node *p,*root;
    root = new Node;
    root->data = 1;
    p = root;
    p->left = new Node;
    p->left->data = 2;
    p->right = new Node;
    p->right->data = 3;
    p = p->left;
    p->left = new Node;
    p->left->data = 4;
        p->left->left = NULL;
        p->left->right = NULL;
    p->right = new Node;
    p->right->data = 5;
        p->right->left = NULL;
        p->right->right = NULL;
    p = root->right;
    p->left = NULL;
    p->right = new Node;
    p->right->data = 6;
        p->right->left = NULL;
        p->right->right = NULL;
//    cout<<root->right->left->data;
//    print_tree(root);
    int maxo = -1;
    cout<<endl<<maximum_element(root,maxo);
    return 0;
}
