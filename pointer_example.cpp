#include<iostream>
using namespace std;
int main(){
    int num = 20;
    int*ptra= &num;
    cout<<"Value of num : "<<num<<endl;
    cout<<"Address of num : "<<&num<<endl;
    cout<<"Pointer stores : "<<ptra<<endl;
    cout<<"Value using pointer = "<<*ptra;
    return 0;
}