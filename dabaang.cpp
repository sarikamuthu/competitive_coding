#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    
    int step=n;
    while(row<=n){
        int col=1;
        int count=1;
        int count2=step;

        while(col<=step){
            cout<<count;
            count++;
            col+=1;
        }
        int stars=row*2-2;
        while(stars){
            cout<<"*";
            stars--;
        }

        col=1;
        while(col<=step){
            cout<<count2;
            count2--;
            col+=1;
        }

        step--;
        cout<<endl;
        row+=1;
   }

//    int n;
//     cin>>n;
//     int row=1;
    
//     int step=n;
//     while(row<=n){
//         int col=1;
//         int count=step;

//         while(col<=step){
//             cout<<count;
//             count--;
//             col+=1;
//         }
//         step--;
//         cout<<endl;
//         row+=1;
// }
}