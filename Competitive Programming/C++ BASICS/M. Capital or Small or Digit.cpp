#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    char c;
    cin>>c;
    
    if(c >= 48 && c < 65){
        cout<<"IS DIGIT";
    }
    else if(c >= 65 && c <= 90){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL";  
    }
 
    else{
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL";
    }
  
    return 0;
}
