#include<iostream>
using namespace std;

int pivot(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<end){
        int mid=start+(end-start)/2;

        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }

    return start;
}
int binarysearch(int arr[],int start,int end,int key){
    // int start=0;
    // int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==key){
            return mid;
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

int find(int arr[],int n,int key){
    
    int p=pivot(arr,n);
    if(key>=arr[p] && key<=arr[n-1]){
        return binarysearch(arr,p,n-1,key);
    }
    else{
        return binarysearch(arr,0,p,key);
    }
}
int main(){
    int arr[5]={89,90,99,23,56};
    //cout<<binarysearch(arr,5,99);
    cout<<find(arr,5,90);
}