#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    int count=0;
    cout<<"Enter a string : ";
    cin>>str;
    for(int i=0; str[i] !='\0'; i++){
        count ++;
    }
    cout<<"length = "<<count;
    return 0;
}