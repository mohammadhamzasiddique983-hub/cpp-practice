#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int even=0, odd=0;
    cout<<"Enter 5 element :";
    for(int i=0 ; i<5 ; i++){
    cin>>arr[i];
      }
      for(int i=0; i<5; i++){
        if(arr[i]%2==0)
        even++;
        else
        odd++;
         }
         cout<<"Even number ="<<even<<endl;
         cout<<"Odd number ="<<odd;
    
return 0;

}