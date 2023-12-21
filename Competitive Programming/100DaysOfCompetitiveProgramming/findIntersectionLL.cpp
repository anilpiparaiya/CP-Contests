//2 sorted LL, print all common elements

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(ll i=a; i<b ;i++)

struct Node{
    int data;
    struct Node *next;
};

struct Node *intersection(struct Node *head1, struct Node *head2){
    stack<struct Node *> s1,s2;
    struct Node *p=NULL;
    while(head1!=NULL){
        s1.push(head1);
        head1 = head1->next;
    }
    while(head2!=NULL){
        s2.push(head2);
        head2 = head2->next;
    }
    while(!s1.empty()&& !s2.empty()){
        if(s1.top()==s2.top()){
            p = s1.top();
            s1.pop();
            s2.pop();
        }else{
            break;
        }
    }
    return p;
};
int main(){
    Node* newNode;
    struct Node *p;
    Node* head1 = new Node();
    head1->data = 10;
    Node* head2 = new Node();
    head2->data = 3;
    newNode = new Node();
    newNode->data = 6;
    head2->next = newNode;
    newNode = new Node();
    newNode->data = 9;
    head2->next->next = newNode;
    newNode = new Node();
    newNode->data = 15;
    head1->next = newNode;
    head2->next->next->next = newNode;
    newNode = new Node();
    newNode->data = 30;
    head1->next->next = newNode;
    head1->next->next->next = NULL;
    p = intersection(head1, head2);

    cout<<p->data;
    return 0;
}
