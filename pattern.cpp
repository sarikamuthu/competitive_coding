#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int count=1;
    int row=1;
    while(row<=a){
        int space=a-row;
        while(space){
            cout<<" ";
            space--;
        }
        int col=1;
        count=1;
        while(col<=row){
            cout<<count;
            count++;
            col+=1;
        }
        int start=row-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        row+=1;
    }
}