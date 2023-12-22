//A - Say Hello With C++

#include<iostream>
using namespace std;
 
int main()
{
    string Name;
    cin>> Name;
    cout<<"Hello, "<<Name<<endl;
    
    return 0;
}

------------------------------------------------------------------------------
// B - Basic Data Types
#include<iostream>
using namespace std;
 
int main(){
    int a;
    long long int b;
    char ch;
    float f;
    double d;
    
    
    cin>>a>>b>>ch>>f>>d;
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<ch<<endl;
    cout<<f<<endl;
    cout<<d<<endl;
    
    return 0;
}

---------------------------------------------------------------------------------

// C - Simple Calculator

#include<iostream>
using namespace std;
 
 
int main(){
  long long int a , b;
   cin>>a>>b;
 
   cout<<a<<" + "<<b<<" = "<<(a + b)<<endl;
   cout<<a<<" * "<<b<<" = "<<(a * b)<<endl;
   cout<<a<<" - "<<b<<" = "<<(a - b);
    return 0;
}


------------------------------------------------------------------------------



// D - Difference

#include<iostream>
using namespace std;
 
 
int main(){
 
  long long int a , b, c, d;
   cin>>a>>b>>c>>d;
 
   cout<<"Difference =" <<" "<<((a*b)-(c*d));
    return 0;
}

--------------------------------------------------------------------------------------
// E - Area of a Circle
 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    double PI = 3.141592653;
    
    double r;
    cin>>r;
    
    cout<<fixed<<setprecision(9)<<PI * r * r;
    return 0;
}

-------------------------------------------------------------------------------------

// F - Digits Summation
#include<iostream>
using namespace std;
 
int main()
{
    long long int a, b;
    cin>>a>>b;
 
    int r1 = a % 10;
    int r2 = b % 10;
 
    cout<<r1+r2;
 
 
    return 0;
}

---------------------------------------------------------------------------------------

// G - Summation from 1 to N 
 
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
 
int main(int argc, char const *argv[])
{
    unsigned long long int n;
    cin>>n;
    unsigned long long int sum = (n * (n + 1) / 2);
    cout<<sum;
 
    return 0;
}


-----------------------------------------------------------------------------------
 
// H - Two numbers
 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
 
int main(int argc, char const *argv[])
{
    float a, b;
    cin>>a>>b;
 
    int val = (a+b-1) / b ;
 
    cout<<"floor "<< a <<" / " << b << " = " << int(a/b)<<endl;
    cout<<"ceil "<< a <<" / " << b << " = " << val<<endl;
    cout<<"round "<< a <<" / " << b << " = " << llround(a/b);
    return 0;
}

----------------------------------------------------------------------------------
 
// I - Welcome for you with Conditions
#include<iostream>
using namespace std;
 
 
int main(){
    int a,b;
    cin>>a>>b;
    
    
    if(a>=b){
        cout<<"Yes";
    }
    else{
        
        cout<<"No";
        
    }
    
    return 0;
    
    
}

-------------------------------------------------------------------------------------
 
// J - Multiples 
#include<iostream>
using namespace std;
 
 
int main(){
    int a,b;
    cin>>a>>b;
    
    
    if((a%b == 0) || (b%a==0)){
        cout<<"Multiples";
    }
    else{
        
        cout<<"No Multiples";
        
    }
    
    return 0;
    
    
}

---------------------------------------------------------------------------------------

// K - Max and Min 
 
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


---------------------------------------------------------------------------------------
 
// L - The Brothers
 
#include<iostream>
#include<string>
using namespace std;
 
 
 
int main(int argc, char const *argv[])
{
    string f1, s1, f2, s2;
 
    cin>>f1>>s1;
    cin>>f2>>s2;
    
    
 
    if(s1 == s2){
        cout<<"ARE Brothers";
    }
 
    else{
        cout<<"NOT";
        
    }
    return 0;
}


---------------------------------------------------------------------------------------------
 
// M - Capital or Small or Digit 
 
#include<iostream>
#include<string>
using namespace std;
 
 
 
int main()
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

--------------------------------------------------------------------------------------

 // N - Char
 
#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
 
 
 
int main(int argc, char const *argv[])
{
    char c;
 
 
    cin>>c;
    
    if(c >= 65 && c <= 90){
        cout<<char(c+32);
    }
 
    else{
        cout<<char(c-32);
 
    }
    return 0;
}

----------------------------------------------------------------------------------------------
 
 // O - Calculator
 
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


---------------------------------------------------------------------------------------------------------

// P - First digit !
 
#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
 
    if(((n / 1000) % 2) == 0){
        cout<<"EVEN";
    }
 
    else{
        cout<<"ODD";
    }
 
    return 0;
 
 
}


--------------------------------------------------------------------------------------------------------
 
 // Q - Coordinates of a Point
 
 #include<iostream>
using namespace std;
 
int main(){
    float a, b;
 
    cin>>a>>b;
 
    if (a == 0.0 && b == 0.0)
    {
        cout<<"Origem";
    }
 
    else if((a > 0 || a < 0) && b == 0.0){
        cout<<"Eixo X";
    }
 
    else if (a == 0.0 && (b>0 || b<0))
    {
        cout<<"Eixo Y";
    }
 
    else if (a >0.0 && b < 0.0)
    {
        cout<<"Q4";
    }
 
    else if (a < 0.0 && b > 0.0)
    {
        cout<<"Q2";
    }
 
    else if (a < 0.0 && b < 0.0)
    {
        cout<<"Q3";
    }
 
    else{
        cout<<"Q1";
    }
 
 
 
    return 0;
 
 
}

----------------------------------------------------------------------------------------------------------------

// R - Age in Days 

#include<iostream>
using namespace std;
 
int main(){
    int n;
 
    cin>>n;
 
    int years = n / 365;
 
    int month = (n % 365) / 30;
    int days = ((n % 365)%30)  ;
 
    cout<<years<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<days<<" days";
 
 
    return 0;
 
 
}


-------------------------------------------------------------------------------------------------------------

// S - Interval 
 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
int main(){
    float n;
    cin>>n;
    
    
    
    if(n>=0.0 && n<=25.0){
        cout<<"Interval ["<<0<<","<<25<<"]";
    }
    
    else if(n> 25.0 && n<=50.0){
        cout<<"Interval ("<<25<<","<<50<<"]";
    }
    else if(n>50.0 && n<=75.0){
        
        cout<<"Interval ("<<50<<","<<75<<"]";
      
    }
    
    else if(n> 75.0 && n<=100.0){
        
            cout<<"Interval ("<<75<<","<<100<<"]";
        
        
    }
    
    else{
        cout<<"Out of Intervals";
    }
    
    return 0;
}



-------------------------------------------------------------------------------------------------------------------
 
 // T - Sort Numbers
 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
int main(){
    long long int a, b, c;
    cin>>a>>b>>c;
    
    if(a<=b && a <= c){
        if(b<=c){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
        }
        
        else{
            cout<<a<<endl;
            cout<<c<<endl;
            cout<<b<<endl;
        }
    }
    
    else if(b<=a && b<=c){
        if(a<c){
            cout<<b<<endl;
            cout<<a<<endl;
            cout<<c<<endl;
            
        }
        else{
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<a<<endl;
            
        }
    }
    
    else{
        if(a<b){
            cout<<c<<endl;
            cout<<a<<endl;
            cout<<b<<endl;
            
        }
        
        else{
            cout<<c<<endl;
            cout<<b<<endl;
            cout<<a<<endl;
           
        }
    }
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    
    return 0;
    
}

---------------------------------------------------------------------------------------------------------------------------
 
// U - Float or int 
 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
int main(){
    double num;
    cin>>num;
    
    int numInt = num;
    
    double res = num - numInt;
    
    if(res > 0){
        cout<<"float "<<numInt<<" "<<res; 
    }
    
    else{
        cout<<"int "<<numInt<<endl;
    }
    
    return 0;
}


-------------------------------------------------------------------------------------------------------------------------
 
 
 // V - Comparison Solution 1
 
 #include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
int main(){
    int num1, num2;
    char op;
    cin>>num1>>op>>num2;
    
    switch(op){
        case '=':
            if(num1 == num2) cout<<"Right"<<endl;
            else cout<<"Wrong"<<endl;
            break;
        
        case '>':
            if(num1 > num2) cout<<"Right"<<endl;
            else cout<<"Wrong"<<endl;
            break;
        
        case '<':
            if(num1 < num2) cout<<"Right"<<endl;
            else cout<<"Wrong"<<endl;
            break; 
           
    }
    
   
    return 0;
}


// V - Comparison Solution 2

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
int main(){
    int num1, num2;
    char op;
    cin>>num1>>op>>num2;
    
    if(op == 61){
        if(num1 == num2){
            cout<<"Right"<<endl;
        }
        
        else{
             cout<<"Wrong"<<endl;
        }
    }
    
    else if(op == 62){
        if(num1 > num2){
            cout<<"Right"<<endl;
        }
        
        else{
             cout<<"Wrong"<<endl;
        }
    }
    
   
    else if(op == 60){
       if(num1 < num2){
           cout<<"Right"<<endl;
       }
       
       else{
             cout<<"Wrong"<<endl;
        }
    }
    
    
    
    return 0;
}

--------------------------------------------------------------------------------------------------------------------

 
 // W - Mathematical Expression
 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
int main(){
    int num1, num2, num3;
    char op1, op2;
    cin>>num1>>op1>>num2>>op2>>num3;
    
    if(op1 == 43 && op2 == 61){
        if(num1+num2 == num3){
            cout<<"Yes"<<endl;
        }
        
        else{
            num3 = num1 + num2;
             cout<<num3<<endl;
        }
    }
    
    else if(op1 == 45 && op2 == 61){
        if(num1 - num2 == num3){
            cout<<"Yes"<<endl;
        }
        
        else{
            num3 = num1 - num2;
             cout<<num3<<endl;
        }
    }
    
   
    else if(op1 == 42 && op2 == 61){
       if(num1 * num2 == num3){
           cout<<"Yes"<<endl;
       }
       
       else{
           num3 = num1 * num2;
           
            cout<<num3<<endl;
        }
    }
    
    
    
    return 0;
}



------------------------------------------------------------------------------------------------------------------
 
// X - Two intervals
 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
int main(){
    long long int num1, num2, num3, num4;
    
    cin>>num1>>num2>>num3>>num4;
    
    long long start, end;
    
    if((num3<num1 && num4<num1)|| (num3>num2 && num4 > num2)){
       
            cout<<-1<<endl;
            
    }
    
    else{
        if(num1 > num3 ){
            start = num1;
        }
        
        else{
            start = num3;
        }
        
        if(num2 > num4 ){
            end = num4;
        }
        
        else{
            end = num2;
        }
        
         cout<<start<<" "<<end<<endl;
    }
    
   
    
    
    
    
    
    return 0;
}


-----------------------------------------------------------------------------------------------------------------------------------
 
// Y - The last 2 digits
 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    
    int res = a*b*c*d;
    
    if(res%100 <= 9){
        cout<<"0"<<res%100<<endl;
    }
    
    else{
        cout<<res%100<<endl;
    }
    
    
    return 0;
    
    
}


-------------------------------------------------------------------------------------------------------------------------------------
 
// Z - Hard Compare
 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
int main(){
    double num1, num2, num3, num4;
    cin>>num1>>num2>>num3>>num4;
    
    double res1 = num2*log(num1);
    double res2 = num4*log(num3);
    
    if(res1 > res2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
