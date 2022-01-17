#include<iostream>
using namespace std;

void rev(int arr[]){
    int start=0;
    int end=start+1;
    for(int i=0;i<6;i++){
        swap(arr[start],arr[end]);
        start+=2;
        end+=2;
        }
}
void printarr(int arr[]){
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    printarr(arr);
    rev(arr);
    printarr(arr);
}