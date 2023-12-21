#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};
int findFirstDuplicate(struct Node *head){
    map<int,int> v;
    map<int,int> :: iterator it;
    int y, count=0;
    struct Node *p=NULL;
    while(head!=NULL){
        v[head->data]++;
        head=head->next;
    }
    for(it=v.begin();it!=v.end();it++){
        if(it->second>=2)
            return it->first;
    }
    return -1;
}
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

    cout<<findFirstDuplicate(head);
    return 0;
}
