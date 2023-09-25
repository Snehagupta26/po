#include<iostream>
using namespace std;
class Qwerty{
    float **arr;
    int rowsize,colsize;
public:
    Qwerty(){
        arr=NULL;
        rowsize=0;
        colsize=0;
    }
    Qwerty(int r,int c){
        rowsize=r;
        colsize=c;
        arr=new float*[r];
        for(int i=0;i<r;i++){
            arr[i]=new float[c];
        }
    }
    ~Qwerty(){
        for(int i=0;i<rowsize;i++){
            delete[] arr[i];
        }
        delete[] arr;
    }
    void getdata(){
        for(int i=0;i<rowsize;i++){
            for(int j=0;j<colsize;j++){
                cout<<"Enter element["<<i+1<<"]["<<j+1<<"]: ";
                cin>>*(*(arr+i)+j);
            }
        }
    }
    void display(){
        for(int i=0;i<rowsize;i++){
            for(int j=0;j<colsize;j++){
                cout<<*(*(arr+i)+j)<<"\t";
            }
            cout<<endl;
        }
    }
};
int main(){
    Qwerty q1;
    q1.getdata();
    q1.display();
    int r,c;
    cout<<"Enter row size : ";
    cin>>r;
    cout<<"Enter column size : ";
    cin>>c;
    
    Qwerty q2(r,c);
    q2.getdata();
    q2.display();
    return 0;
}
