#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
#include<cstring>
#include<sstream>
#include<iterator>
#include<map>
#include<array>
#include<numeric>
#include <iterator>
#include <set>

using namespace std;

int main(){
//-------------------------------------------------------------//
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
//-------------------------------------------------------------//

	int c;
	cin>>c;

	set<string> likes, dislikes;
	set<string>::iterator it;
	while(c--){
		int l, d;
		string s;

		cin>>l;
		for(int i=0;i<l;i++){
			cin>>s;
			likes.insert(s);
		}

		cin>>d;
		for(int i=0;i<d;i++){
			cin>>s;
			it = likes.find(s);
			if(it != likes.end())
				likes.erase(s);
		}
	}


	// This code is broken, B,C,D,and E test cases failed
	//Wrong answers.

	//Think for an approach.

	cout<<likes.size()<<" ";
	for (it=likes.begin(); it!=likes.end();it++)  
    cout <<*it<<" "; 
    return 0;
}
