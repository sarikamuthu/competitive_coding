#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>  
int p=31; // base value
const int N=1e5+3,m=1e9+7;
vector<int>powers(N);

long long calculate_hash(string s){
    long long hash=0;
    for(int i=0;i<s.size();i++){
        hash=(hash+(s[i]-'a'+1)*powers[i])%m;
    }
    return hash;
}
int main(){
 vector<string>strings={"aa","ab","aa","b","cd","b"};
 powers[0]=1;
 for(int i=1;i<N;i++){
     powers[i]=(powers[i-1]*p)%m;
 }
 vector<long long>hashes;
 for(auto w:strings){
     hashes.push_back(calculate_hash(w));
 }
 sort(hashes.begin(),hashes.end());
 int distinct=0;
 for(int i=0;i<hashes.size();i++){
     if(i==0 or (hashes[i]!=hashes[i-1])){
            distinct++;
     }
     
 }
cout<<"Distinct elements: "<<distinct;

    return 0;
}