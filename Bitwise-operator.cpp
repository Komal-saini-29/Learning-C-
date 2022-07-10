#include<iostream>
#include <math.h>
using namespace std;
int main() {

//     int a= 4;
//     int b=6;
     
//      cout<<" a&b " <<(a&b)<<endl;
//      cout<<" a|b " <<(a|b)<<endl;
//      cout<<" ~a " <<(~a)<<endl;
//      cout<<" a^b " <<(a^b)<<endl;
     

//      cout<< (17>>1)<<endl;
//      cout<< (17>>2)<<endl;
//      cout<< (19<<1)<<endl;
//      cout<< (21<<2)<<endl;


//      int i=7;
//      cout<<(++i)<<endl;
//     //  8
//      cout<<(i++)<<endl;
//     //  8, i=9
//   cout<<(i--)<<endl;
// //   9, i=8
//      cout<<(--i)<<endl;
//     //  7 , i=7


// FOR LOOPS

// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;

// cout<<"printing count from 1 to n"<<endl;
// int i=1;


// for(int i=1; i<=n; i++){
//   cout<< i<<endl;
// }


// for(; ;){
//   if(i<=n){
//     cout<< i <<endl; 
//   }
//   else{
//     break;
//   }
//   i++;
// }
// MULTIPLE INTEGERS   
// for(int a =0 , b =1 , c = 2; a>=0 && b>=1 && c>=2; a--, b--, c-- ){
//   cout<<a<<" " << b <<" "<<c << endl;
// }

// int n;
//  cout<<"Enter the value of n"<<endl;
// cin>>n;
// int sum = 0;
//  for(int i =1; i<=n; i++ ){
//    sum += i;
//  }
//  cout<< sum <<endl;

// int n=10;
// int a=0;
// int b=1;
// cout<<a<< " "<<b<<" ";
// for(int i=1; i<=n; i++ ){
//   int nextNumber = a+b;
//   cout<< nextNumber<<" ";

//   a = b; 
//   b = nextNumber;
// }

// For LOOP for Prime Number  

// int n;
// cout<<"enter the value of n"<< endl;
// cin>>n;
// bool isPrime = 1;
// for(int i= 2; i<n; i++){
//   if(n%i == 0){
//     // cout<<"Not a prime Number"<<endl;
//     isPrime = 0;
//     break;
//   }
//   if(isPrime == 0)
// {
//   cout<<"Not a prime number"<<endl;
// }  
// else{
//   cout<<"Is a prime number"<<endl;

// }
// }

// for (int i=0; i<1; i++){
//   cout<<" Oi  "<<endl;
//   cout<<endl;
//   cout<<" You are my bestu  "<<endl;
//   cout<<endl;
//   cout<<" you gotta lob me XD  "<<endl;
//   continue;
  
  

// }
// int a =4;
// cout<< a << endl;

// if(true){
//   int a=6;
//   cout<< a<< endl;
// }
// cout <<a<<endl;

// for( int i =4; i<5; i++){
//   cout<< " Hello " <<endl;
// }

// int prod = 1;
// int sum =0;

// while(n!=0){
//   int digit =n%10;
//   prod = prod* digit;
//   sum= sum+ digit;
//   n=n/10;
// }
// int answer = prod-sum;
// return answer;

// DECIMAL TO BINARY   

// BINARY TO DECIMAL  
int n ;
cin>>n;
int i=0, ans = 0;

while(n != 0 ){
  int digit = n % 10;

  if( digit == 1){
    ans = ans + pow(2, i);

  } 
n = n / 10;
i++;
}
cout<<"Answer is  " <<ans<< endl;







     }


