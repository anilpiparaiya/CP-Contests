#include<iostream>
using namespace std;
 
int main(){
    int a, b;
    char o;
 
    cin>>a>>o>>b;
 
    if(o == 43){
        cout<<a+b;
    }
    else if(o == 45){
        cout<<a-b;
    }
 
    else if(o == 42){
        cout<<a*b;
    }
 
    else{
        cout<<float(a/b);
    }
 
 
    return 0;
 
 
}
