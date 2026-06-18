#include<iostream>
using namespace std;

void cheak_Even_odd(int num) {
  if(num%2==0)
  cout<<"Even";
  else
  cout<<"odd";
  
}

int main() {
    int num;
    cout<<"Enter number" ;
    cin>>num;
cheak_Even_odd(num);
    
return 0;
}