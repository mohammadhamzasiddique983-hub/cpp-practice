#include<iostream>
using namespace std;
int linear_search(int arr[], int size, int element){
    for(int i=0; i<size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
int arr[] = {2,3,6,4,5,9,8,7,21,56,48};
int size = sizeof(arr)/sizeof(int);
int element = 5;
int search_index = linear_search(arr,size,element);
if(search_index==-1)
cout<<"Element not found";
else
cout<<"the element was found at index : "<<search_index<<endl;
cout<<"Position = "<<search_index + 1;
return 0; 
}