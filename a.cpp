#include<iostream>
using namespace std;
#include <vector> 
 

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   
    for(int i=0;i<arr.size();i++){
    for(int j=1;j<arr.size();j++){
      if((arr[i]+arr[j])==s){
            printf("%d %d\n",arr[i],arr[j]);
      }
    }
  }
}
  
int main(){
    vector<int> v;
  
    // fill the array with 10 five times
    v.assign(5, 10);
    pairSum(v,2);
    
}
