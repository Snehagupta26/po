#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next = NULL;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void findelement(node* &head,int k){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == k){
            cout<<"hi";
            break;
        }
        else{
            temp=temp->next;
            
        }
        
    }
    cout<<"bye";
}
int main(){
    node* n1 = new node(4);
    node* head = n1;
    node* n2 = new node(3);
    node* n3 = new node(2);
    node* n4 = new node(1);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=NULL;
    int k;
    cout<<"enter k : "<<endl;
    cin>>k;
    findelement(head,k);
    
}