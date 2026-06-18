#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number : " ;
    cin>>num;
    if(num>0)
    cout<<"Positive number";
    else if(num<0)
    cout<<"negative number";
    else
    cout<<"number is zero";

    return 0;
}