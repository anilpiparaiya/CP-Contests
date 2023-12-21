#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};
struct Node *addOne(struct Node **head){
    struct Node *p=*head,*q;
    int c=0;
    p->data = p->data +1 ;
    while(p!=NULL){
        if(c>0){
            p->data = p->data +c;
//            cout<<p->data<<" ";
            c=0;
        }
        if(p->data > 9){
            p->data = p->data % 10;
//            cout<<p->data<<" ";
            c=1;
        }
        q =p;
        p=p->next;
    }
    if(c==1){
        q->next = new Node;
        q->next->data = c;
        c=0;
    }
    return *head;
};
struct Node *reverseLL(struct Node *head){
    struct Node *p=NULL,*q=NULL,*temp;

    while(head!=NULL){
        p = head->next;
        head->next = q;
        q = head;
        head = p;
    }

    return q;
};
int main(){
    int n,x;
    cin>>n;
    struct Node *p,*q,*head;
    p = new Node;
    head = p;
    for(int i=0;i<n;i++){
        cin>>x;
        p->data = x;
        p->next = new Node;
        q= p;
        p = p->next;
    }
    q->next = NULL;
    head = reverseLL(head);
    head = addOne(&head);
    head = reverseLL(head);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}
