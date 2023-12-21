//auto complete string using trie
#include<bits/stdc++.h>
using namespace std;
const int alpha_size=26;
struct Node{
    char data;
    int isEnd;
    map<char,Node*> child;
};
Node* getNode(char c){
    Node* node = new Node;
    node->data=c;
    node->isEnd=0;
    return node;
}
void print(Node* root,string& s){
    if(root==NULL)
        return;
    for(auto it=root->child.begin();it!=root->child.end();it++){
        s+=it->first;
        if(it->second->isEnd==1)
            cout<<s<<" ";
        print(it->second,s);
    }
    s.pop_back();
    return ;
}
void ins(Node* root, string s){
    Node* p=root;
    for(int i=0;i<s.size();i++){
        if(p->child.count(s[i])==0)
            p->child[s[i]] = getNode(s[i]);
        p=p->child[s[i]];
    }
    p->isEnd=1;
}
bool search(Node* root, string s){
    for(int i=0;i<s.size();i++){
        if(root->child.count(s[i])==0)
            return false;
        root = root->child[s[i]];
    }
    if(root->child.empty() && root->isEnd==0)
        return false;
    cout<<"search Result-----"<<endl;
    if(root->isEnd==1)
        cout<<s<<" " ;
    print(root,s);
    return true;
}
int main(){
    Node* root =getNode('*');
    vector<string> v= {"kriti","tejas","akanksha","sonal","swapnil","adityaSingh","adityaAgrawal"};
    for(auto s: v)
        ins(root,s);
    string s;
    cout<<"search----"<<endl;
    while(1){
        char x;
        if(!s.empty())
        cout<<s;
        cin>>x;
        if(x=='$')
            break;
        s+=x;
        system("cls");
        cout<<s<<endl;

        if(!search(root,s)){
            cout<<"RESULT NOT FOUND";
            break;
        }
        cout<<endl;
    }
    return 0;
}
