#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i,a,b) for(ll i=a; i<b ;i++)

struct Node {
    int data;
    struct Node *next;
};
struct Node *mergeLL(struct Node* head1, struct Node *head2){
    struct Node *temp=NULL,*p,*q,*x;
    if(head1==NULL && head2==NULL)
        return NULL;
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    while(head1!=NULL && head2!=NULL){
        if(head1->data > head2->data){
            p = head2;
            q = p->next;
            p->next = NULL;
            if(temp==NULL){
                temp = p;
                x = temp;
            }
            else{
                x->next = p;
                x = x->next;
            }

            head2= q;
        }else{
            p = head1;
            q = p->next;
            p->next = NULL;
            if(temp==NULL){
                temp = p;
                x = temp;
            }
            else{
                x->next = p;
                x = x->next;
            }
            head1= q;
        }
    }
    if(head1==NULL){
        while(head2!=NULL){
            p = head2;
            q = p->next;
            p->next = NULL;
            if(temp==NULL){
                temp = p;
                x = temp;
            }
            else{
                x->next = p;
                x = x->next;
            }

            head2= q;
        }
    }else{
        while(head1!=NULL){
            p = head1;
            q = p->next;
            p->next = NULL;
            if(temp==NULL){
                temp = p;
                x = temp;
            }
            else{
                x->next = p;
                x = x->next;
            }
            head1= q;
        }
    }
    return temp;
};

int main(){
    int a[] = {3,5};
    int b[] = {2,4};
    int n = sizeof(a)/sizeof(a[0]);
    struct Node *p,*q,*head1,*head2;

    head1 = new Node;
    p = head1;
    f(i,0,n){
        p->data = a[i];
        p->next = new Node;
        q = p;
        p = p->next;
    }
    q->next = NULL;
    n = sizeof(b)/sizeof(b[0]);
    head2 = new Node;
    p = head2;
    f(i,0,n){
        p->data = b[i];
        p->next = new Node;
        q = p;
        p = p->next;
    }
    q->next = NULL;
//    while(head1!=NULL)
//        cout<<head1->data<<" ";
//    cout<<endl;
//    while(head2!=NULL)
//        cout<<head2->data<<" ";
    struct Node *temp;
    temp = mergeLL(head1, head2);
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
