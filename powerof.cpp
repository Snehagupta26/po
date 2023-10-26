#include<iostream>
using namespace std;
bool ispowerof(int n){
    //power of 2
    
    
    if(n==1){
        return true;
    }
    if(n%2==0 && ispowerof(n/2)){
        return true;
    }
    return false;
}
bool ispowerof3(int n){
    //power of 3
    
    
    if(n==1){
        return true;
    }
    if(n%3==0 && ispowerof3(n/3)){
        return true;
    }
    return false;
}
bool ispowerof4(int n){
    //power of 4
    
    
    if(n==1){
        return true;
    }
    if(n%4==0 && ispowerof4(n/4)){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
   cout<<"is power of 2 ? "<<endl;
   bool ans = ispowerof(n);
   if(ans==true){
    cout<<"yes"<<endl;
   }
   else{
    cout<<"no"<<endl;
   }
   cout<<"is power of 3 ? "<<endl;
   bool ans1 = ispowerof3(n);
   if(ans1==true){
    cout<<"yes"<<endl;
   }
   else{
    cout<<"no"<<endl;
   }
   cout<<"is power of 4 ? "<<endl;
   bool ans2 = ispowerof4(n);
   if(ans2==true){
    cout<<"yes"<<endl;
   }
   else{
    cout<<"no"<<endl;
   }
   
}