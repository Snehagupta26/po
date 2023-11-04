#include <iostream>
#include<vector>
using namespace std;
int main() {
    cout<<"Sneha Gupta_21BCS7540\n";
    cout<<"Enter size of array : "<<endl;
    int n;
    cin >> n;
    vector<int> A(n);
    cout<<"Enter elements of array : "<<endl;
    for(int A_i = 0;A_i < n;A_i++){
       cin >> A[A_i];
    }
    cout<<"Elements of original array are : "<<endl;
    for(int A_i = 0;A_i <n;A_i++){
       cout << A[A_i] << " ";
    }
    cout<<endl;
    cout<<"Elements of array in reversed order are : "<<endl;
    for(int A_i = n-1;A_i >= 0;A_i--){
       cout << A[A_i] << " ";
    }
    cout << endl;
    return 0;
}
