/*//print n num
#include<iostream>
using namespace std;
int main(){
    int n;
   cout<<"enter value of n";
   cin>>n;
   int i=0;
   while(i<=n){
    cout<<i;
    i=i+1;
   }
}*/
/*//print sum of n num
#include<iostream>
using namespace std;
int main(){
    int n;
   cout<<"enter value of n";
   cin>>n;
   int i=0;
   int sum = 0;
   while(i<=n){
    //cout<<i;
    
    sum = sum+i;
    i=i+1;
   }
   cout<<sum;
}*/
/*//print even num
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter number n : ";
    cin>>n;
    int i = 2;
    while(i<=n){
        if(i%2==0){
            cout<<i<<endl;
            i = i+2;
        }
        
    }
}*/
/*//print sum of even num
#include<iostream>
using namespace std;
int main(){
    int n ;
    int sum = 0;
    cout<<"enter number n : ";
    cin>>n;
    int i = 2;
    while(i<=n){
        if(i%2==0){
            //cout<<i<<endl;
            sum = sum + i;
            i = i+2;
        }
        
    }
    cout<<"sum is : "<<sum;
}*/
/*//f to c
#include<iostream>
using namespace std;
int main(){
    int n ;
    
    cout<<"enter temp in  F : ";
    cin>>n;
    int res = (n-32)*9/5;
    cout<< res;
}*/
//to check if num is prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number n : ";
    cin>>n;
    int i = 2;
    while(i<n){
        if(n%i==0){
            cout<<"not prime\n";
            
        }
        else{
            cout<<"prime\n";
        }
        i=i+1;
    }
}
