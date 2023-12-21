// given LL a1,a2,a3,.....an
//reorder it to a1,an,a2,an-1,a3.....
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i,a,b) for(ll i=a; i<b ;i++)

struct Node{
    int data;
    struct Node *next;
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
struct Node *reorder(struct Node *head){
    struct Node *slw = head, *fst=head,*itr=head, *last,*p;
    int count=0;
    while( fst->next!=NULL && fst->next->next!=NULL ){
        slw = slw->next;
        fst = fst->next->next;
    }

    last  = reverseLL(slw->next);
    slw->next = NULL;
    while(last!=NULL){
        while(itr!=slw){
            p = itr->next;
            itr->next = last;
            last=last->next;
            itr->next->next = p;
            itr = p;
        }
        if(last!=NULL){
            itr->next = last;
            last =NULL;
        }

    }
    return head;
};
int main(){
    int a[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(a)/sizeof(a[0]);
    struct Node *head,*p,*q;
    head = new Node;
    p = head;
    f(i,0,n){
        p->data = a[i];
        p->next = new Node;
        q = p;
        p = p->next;
    }
    q->next = NULL;
    head = reorder(head);
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    return 0;
}
