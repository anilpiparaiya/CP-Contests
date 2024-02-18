#include<bits/stdc++.h>
using namespace std;

void temp(){
    string cmp = "codeforces";
    int count = 0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=cmp[i]) count++;
    }
    
    cout<<count<<"\n";
    
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        temp();
    }
}
