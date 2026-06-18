#include<iostream>
using namespace std;

int largest(int a, int b) {
  if(a>b)
      return a;
      else 
      return b;
}

int main() {
    int x , y ;
    cout<<"Enter two number" ;
    cin>>x>>y;
    cout<<" Largest : " <<largest(x,y);
return 0;
}