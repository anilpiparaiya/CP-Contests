//2 sorted LL, print all common elements

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(ll i=a; i<b ;i++)

struct Node{
    int data;
    struct Node *next;
};
void find_common (struct Node *head1, struct Node *head2){
    while(head1!=NULL && head2!=NULL){
        if(head1->data == head2->data){
            cout<<head1->data<<" ";
            head1 = head1->next;
            head2 = head2->next;
        }else if(head2->data > head1->data){
            head1 = head1->next;
        }else
            head2 = head2->next;
    }
    return;
};
int main(){
    int a[] = {0,6,11,14};
    int b[] = {2,3,4,5,6,10,11,14,17};
    int n = sizeof(a)/sizeof(a[0]);
    struct Node *head1,*head2,*p,*q;
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
    find_common(head1,head2);
    return 0;
}
