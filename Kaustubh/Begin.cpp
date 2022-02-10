#include<bits/stdc++.h>
using namespace std;

int main(){
    int customer;
    cin>>customer;

    set<string> list, disklike;

    while (customer--){
        int x,l;

        cin>>x;

        for (int i=0; i<x; i++){
            char a[50];
            cin>>a;

            list.insert(a);
        }

        cin>>l;
        for (int j=0; j<l; j++){
            char a[50];
            cin>>a;

            if (list.count(a) == 1){
                list.erase(a);
            }
        }
    }
    cout<<list.size()<<" ";
    for (auto i=list.begin(); i != list.end(); i++){
        cout<<*i<<" ";
    }
    return 0;
}