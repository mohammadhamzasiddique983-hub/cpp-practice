#include<iostream>
using namespace std;

int square(int num) {
  return num*num;
}

int main() {
    int n;
    cout<<"Enter number" ;
    cin>>n;
    cout<<" Square : " <<square(n);
return 0;
}