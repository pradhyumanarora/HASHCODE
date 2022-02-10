#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class{
    public:
    int num;
    vector<string> arg;
}vl[n],vd[n];
int main(){
     /*int n,count,i;
     cin>>n;
     cin>>count;
     
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
         }*/
  set<string,int>c1,c2;
  map<string>list,like,dislike,ans;
  int n;
  cin>>n;
  int i=0,cnt=0,e=0;
  do{
      int x,l;
      cin>>x;
      vl[w].arg=x;
      for(int i=0;i<x;i++)
      {
          char s[100];
          cin>>s;
          vl[w].arg.push_back(s);
          /*while(n-){
             string tesu;
             cin>>tesu;
             l[i].push_back(tesu);
         }*/
         list.insert(s);
         like.insert(s);
         c1[s]++;
      }
      cnt++;
      cin>>l;
  }
  
  /* vector<string>ans;
     
     cout<<ans.size()<<" ";
     for(auto &ing:ans){
         cout<<ing<<" ";
     }
     cout<<endl;
     }*/
     return 0;
}