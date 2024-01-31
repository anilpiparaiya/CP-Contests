#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};
struct Node *findPosition(int n, int m){
    struct Node *p,*q,*head,*current;
    p = new Node;
    head = p;
//    q = malloc(sizeof(struct Node));
    for(int i=1;i<=n;i++){
        p->data = i;
        p->next = new Node;
        q=p;
        p= p->next;
    }
    q->next = head;
    current = q;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<m;j++){
            current = current->next;
        }
        current->next = current->next->next;
    }
    cout<<current->data<<endl;

}
int main(){
    int n,m;
    cin>>n>>m;
    findPosition(n,m);
}
