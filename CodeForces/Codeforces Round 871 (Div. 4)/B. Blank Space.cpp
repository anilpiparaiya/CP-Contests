#include<bits/stdc++.h>
using namespace std;

void temp(){
    int n;
    cin>>n; 
    int res = 0;
    int curr = 0;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    for(int i = 0; i<n;i++){
        if(v[i] == 0) curr++;
        else curr = 0;
        res = max(res , curr);

    }
    cout << res <<"\n";
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        temp();
    }
}
