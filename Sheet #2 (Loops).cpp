// A - 1 to N

#include<iostream>
using namespace std;
 
int main(){
    int n; 
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        cout<<i<<endl;
    }
}

-------------------------------------------------------------------------------------------------------------
  
 // B - Even Numbers
  
 #include<iostream>
using namespace std;
 
 
int main(){
    long int n;
    cin>>n;
 
    if(n == 1){
    	cout<<"-1";
 
    }
 
    else{
 
    	for(long int i = 1; i <= n; i++ ){ 	
 
    	if (i % 2 == 0){
         cout<<i<<endl;
    }
 
    }
    
    
 
}
    return 0;
}


--------------------------------------------------------------------------------------------------------------------
 
  
// C - Even, Odd, Positive and Negative
  
#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
 
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
 
    for (int i = 0; i < n; ++i)
    {
        if(arr[i] % 2 == 0){
            even++;
        }
 
        else{
            odd++;
        }
    }
 
 
    for (int i = 0; i < n; ++i)
    {
        if(arr[i] < 0 ){
            negative++;
        } 
 
        else if (arr[i] == 0)
        {
            continue;
        }
 
        else{
            positive++;
        }
    }
 
 
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative;
 
 
 
    return 0;
 
 
}

------------------------------------------------------------------------------------------------------------
 
// D - Fixed Password
 
#include<iostream>
using namespace std;
 
int main(){
    int n;
 
    while(true){
        cin>>n;
        if(n == 1999){
            cout<<"Correct";
            break;
        }
 
        else{
            cout<<"Wrong"<<endl;
        }
    }
 
 
    
    return 0;
 
 
}
