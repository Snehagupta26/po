/*//if block
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    if(a>b){
        cout<<"A is big";
     }
     if(a<b){
        cout<<"B is big ";
     }
}*/
/*//if-else block
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number a : ";
    cin>>a;
    if(a>0){
        cout<<"positive";
    }
    else{
        cout<<"negative";
    }
}*/
/*//cin.get()concept  
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter value of a : ";
    a=cin.get();
    cout<<"value of a is - "<<a<<endl;
}*/
/*//+ve _ve 0 by if block and if else block
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter value of a : ";
    cin>>a;
    if(a>0){
        cout<<"positive";
    }
    else{
        if(a==0){
            cout<<"equals zero";
        }
        else{
            cout<<"negative";
        }
    }

}*/
/*//better approach if - else- if block
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter value of a : ";
    cin>>a;
    if(a>0){
        cout<<"positive";
    }
    else if (a<0){
        cout<<"negative";
    }
    else if(a==0){
            cout<<"equals 0";
    }
    }*/
/*//homework questions
#include<iostream>
using namespace std;
int main(){
    int a=9;
    if(a==9){
        cout<<"NINEY";
    }
    if(a>0){
        cout<<"positive";
    }
    else{
        cout<<"negative";
    }
}*/
/*#include<iostream>
using namespace std;
int main(){
    int a=2;
    int b=a+1;
    if((a=3)==b){
        cout<<a;
    }
    
    else{
        cout<<a+1;
    }
} */
/*#include<iostream>
using namespace std;
int main(){
    int a=24;
    if(a>20){
        cout<<"LOVE";
    }
    else if(a==24){
        cout<<"LOVELY";
    }
    else{
        cout<<"BABBAR";
    }
    cout<<a;
}*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character ";
    cin>>ch;
    
    if(ch>='a'&& ch<='b'){
        cout<<"Lowercase";
    }
    else if(ch>='A'&& ch<='B'){
        cout<<"Uppercase";
    }
   else{
        cout<<"numeric";
    }
}

