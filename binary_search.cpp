#include<iostream>
using namespace std;
int Binary_search(int arr[], int size,int element){
    int low,high,mid;
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
}
int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size= sizeof(arr)/sizeof(int);
    int element =10;
    int search_index = Binary_search(arr,size,element);
    if(search_index==-1)
    cout<<"element is not found";
    else
    cout<<"the element was found at index : "<<search_index<<endl;
cout<<"Position = "<<search_index + 1;
return 0; 
}