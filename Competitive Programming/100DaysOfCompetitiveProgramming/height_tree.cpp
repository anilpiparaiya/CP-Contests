#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
int count_nodes(struct Node *root){
    if(root==NULL)
        return 0;
    return count_nodes(root->left) + count_nodes(root->right) +1;
}
int height(struct Node *root){
    if(root==NULL)
        return 0;
    return max(height(root->left), height(root->right))+1;
}
struct Node *deepest_node(struct Node *root){
    struct Node *temp;
    queue<struct Node*> q;
    q.push(root);
    while(!q.empty()){
        temp = q.front();
        q.pop();
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    return temp;
};
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
    cout<<"number of nodes  : "<<count_nodes(root)<<endl;
    cout<<"height of tree : "<<height(root)<<endl;
    cout<<"deepest node : "<<deepest_node(root)->data<<endl;

    return 0;
}
