#include<iostream>
using namespace std;
int binarysearch(int arr[],int start,int end,int key){
    // int start=0;
    // int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==key){
            if(arr[mid-1]!=key){
                return mid;
            }
            else{
                end= mid-1;
            }
            
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int lastoccurence(int arr[],int start,int end,int key){
        while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==key){
            if(arr[mid+1]!=key){
                return mid;
            }
            else{
                start= mid+1;
            }
            
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
   int arr[]={ 1, 3, 5, 5, 5, 5, 67, 123, 125 };
   int start=0;
   int end=8;
   cout<<binarysearch(arr,0,8,3)<<" ";
   cout<<lastoccurence(arr,0,8,5);
}