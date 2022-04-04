#include <iostream>
#include <string>
using namespace std;
int remAnagram(string str1, string str2)
{
// Your code goes here
    int a = str1.length();
    int b = str2.length();
    int count = 0;
    int flag=0;
    if(a>b){
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(str1[i]==str2[j]){
                    flag=1;
                    break;
                }
             }
            if(flag==0){
                count++;
            }
            flag=0;
        }
    }
    if(b>a){
        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                if(str2[i]==str1[j]){
                    flag=1;
                    break;
                }
             }
            if(flag==0){
                count++;
            }
            flag=0;
        }
    }
    return count;
}
int main()
{
    string S1 = "bcadeh";
    string S2 = "hea";
    cout<<remAnagram(S2,S1);

    return 0;
}