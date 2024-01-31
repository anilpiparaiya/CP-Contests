#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i,a,b) for(ll i=a; i<b ;i++)

 // Sort   O(NlogN)
bool checkUnique(string s){
    sort(s.begin(),s.end());
    f(i,0,s.length()-1){
        if(s[i]==s[i+1])
            return false;
    }
    return true;
}
//using hash table   O(N)
bool checkUnique2(string s){
    set<char> st;
    f(i,0,s.length()){
        if(st.find(s[i])!=st.end())
            return false;
        else if(s[i]==*st.end())
            return false;
        else
            st.insert(s[i]);
    }
    return true;
}


int main(){
    string s = "abc*123a#@";
    cout<<checkUnique2(s);
    return 0;
}
