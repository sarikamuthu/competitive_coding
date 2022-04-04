#include<iostream>
using namespace std;
string encodeString(string &s, int n) 
{
    // Write your code here.
     int i=0;
    while(s[i]!='\0'){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            int n = (int)s[i];
            s[i]=(char)n+1;
        }
       else{
           int nu=(int)s[i];
           s[i]=(char)nu-1;
       }
        i++;
    }
    return s;
}

int main(){
   string s="wzsilhrszvvboyjbdtrtysyfzrdtdlkbkejyodspynqolb";
   string a=encodeString(s,48);
   cout<<a;
}