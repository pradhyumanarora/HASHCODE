#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,count,i;
     cin>>n;
     cin>>count;
     vector<vector<string>>l(n),d(n);
     for( i=0;i<n;i++){
        // cin>>count;
         while(count--){
             string tesu;
             cin>>tesu;
             l[i].push_back(tesu);
         }
         while(count--){
              string tesu;
             cin>>tesu;
             d[i].push_back(tesu);
         }
   /* set<string>like,dlike;
    for(auto &v:l){
        for(auto &x:v){
            like.insert(x);
        }
    }
    for(auto &x:dlike){
        for(auto &x:v){
            dlike.insert(x);
        }
    }*/ 
     vector<string>ans;
     
     cout<<ans.size()<<" ";
     for(auto &ing:ans){
         cout<<ing<<" ";
     }
     cout<<endl;
     }
     return 0;
}