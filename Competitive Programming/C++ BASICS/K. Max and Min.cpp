#include<iostream>
using namespace std;
 
int main(int argc, char const *argv[])
{
    int a, b, c;
    cin>>a>>b>>c;
  
    if((a<=b )&& (a <= c)){
        cout<<a<<" ";
        if(c>=b){
            cout<<c;
        }
 
        else{
            cout<<b;
        }
    }
    
    else if((b <= a) && (b <= c)){
         cout<<b<<" ";
 
        if (c >= a)
        {
            cout<<c;
        }
        else{
            cout<<a;
        } 
    }
 
    else{
        cout<<c<<" ";
 
        if (a >= b)
        {
            cout<<a;
 
        }
        else{
            cout<<b;
        }
    }
    return 0;
}
