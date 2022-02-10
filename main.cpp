#include <bits/stdc++.h>
using namespace std;



int main(){
//-------------------------------------------------------------//
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
//-------------------------------------------------------------//

	map<string,int> freqlike, freqdisl;
	set<string> list, like, disklike;

	int customer;
	cin>>customer;

	while(customer--){
		int x,l;

		cin>>x;

		for (int i=1; i<=x; i++){
			char a[30];
			cin>>a;

			list.insert(a);
			like.insert(a);

			freqlike[a]++;
		}

		cin>>l;

		for (int i=1; i<=l; i++){
			char a[30];
			cin>>a;

			list.insert(a);
			disklike.insert(a);
			freqdisl[a]++;
		}

	}

	/*for (auto i:list){
		cout<<i<<" ";
	}
	cout<<endl;
	for (auto i:like)
		cout<<i<<" ";

	cout<<endl;

	for (auto i:disklike){
		cout<<i<<" ";
	}
*/

	for (auto i: freqlike)
			cout<<i.first<<"-"<<i.second<<"    ";


	cout<<endl;

	for (auto i: freqdisl)
			cout<<i.first<<"-"<<i.second<<"    ";

	return 0;
}