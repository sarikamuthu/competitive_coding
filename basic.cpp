#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    
    int row=1;
    int count=0;
    while(row<=a){
        int col=1;
        //count=row;
        int start=a-row+1;
        while(col<=row){
            
          //  cout<<count<<" ";
           //char ch = 'A'+a-2;
            cout<<start<<" ";
            start++;
            //count--;
            col+=1;
        }
        //row=col;
        cout<<endl;
        row+=1;
    }
}