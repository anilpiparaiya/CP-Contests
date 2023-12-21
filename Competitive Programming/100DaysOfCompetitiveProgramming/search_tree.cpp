#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
bool search_element(struct Node *root, int x){
    bool temp;
    if(root==NULL)
        return false;
    if(root->data == x)
        return true;
    temp = search_element(root->left, x);
    if(temp==true)
        return temp;
    return search_element(root->right, x);
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
    int x;
    cin>>x;
    cout<<search_element(root, x);
    return 0;
}
