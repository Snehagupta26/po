#include <iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
    int roll_no;
    string name;
    int marks[3];
    int total(void);
    public:
    void set_data(int r,string n,int m[3])
    {
       cout<<"reference of the object recieved is"<<this<<endl;
        this->roll_no = r;
        name = n;
        for(int i=0;i<3;i++)
        {
            marks[i]=m[i];
        }
    }
    void display_data()
{
    cout<<roll_no<<name<<total()<<endl;
}};
int Student::total()
{
    int temp=0;
    for(int i=0;i<3;i++)
        {
            temp+=marks[i];
        }
        return temp;
}
int main()
{
    Student s1,s2;
    int m1[3]={10,20,30};
    int m2[3]={50,40,60};
    cout<<"address of object s1 is "<<&s1<<endl;
    s1.set_data(1,"vidushi",m1);
    s1.display_data();
    cout<<"address of object s2 is "<<&s2<<endl;
    s2.set_data(2,"tushar",m2);
    s2.display_data();
}