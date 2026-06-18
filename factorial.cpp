#include<iostream>
using namespace std;
int main() {
    int num;
    long long factorial = 1;
    cout<<"Enter Number :";
    cin>>num;
 for(int i=1 ; i<=num ; i++)
    {
        factorial=factorial*i;
 }
 cout<<"Factorial : "<<factorial;
 return 0;

}