#include <bits/stdc++.h>
using namespace std;

struct cust{
		int quan;
		std::vector<string> ingr;
	};

// int simulator (struct cust vlike[],struct cust vdislike[], set<string> final){
// // //-------------------------------------------------------------//
// // 	#ifndef ONLINE_JUDGE
// // 		freopen("input.txt", "r", stdin);
// // 		freopen("outputRES.txt", "w", stdout);
// // 	#endif
// // //-------------------------------------------------------------//
// // 	int count=0;
// // 	int customer;
// // 	cin>>customer;
// 	int r=0; 
// 	int countop=0, op=0;
// 	for (auto i:final){
// 		op=0;
// 		for (auto it:vdislike[r].ingr){
// 			if (it == i){
// 				op=1;
// 				break;
// 			}
// 		}
// 		r++;
// 		if (op == 0)	countop++;
// 	}

// 	return countop;
// }


int main(){
//-------------------------------------------------------------//
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
//-------------------------------------------------------------//

	map<string,int> freqlike, freqdisl;
	set<string> list, like, disklike,final;
	
	int customer;
	cin>>customer;

	int i = 0,w=0,e=0;

	//vector<pair<int, string>> vlike(customer), vdislike(customer);

	 cust vlike[customer], vdislike[customer];


	while(i<customer){
		int x,l;

		cin>>x;
		vlike[w].quan = x;

		for (int i=0; i<x; i++){
			char a[30];
			cin>>a;

			vlike[w].ingr.push_back(a);


			list.insert(a);
			like.insert(a);

			freqlike[a]++;
		}
		w++;

		cin>>l;

		vdislike[e].quan = l;

		for (int i=1; i<=l; i++){
			char a[30];
			cin>>a;

			vdislike[e].ingr.push_back(a);
			

			list.insert(a);
			disklike.insert(a);
			freqdisl[a]++;
		}
		e++;
		i++;

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
	// //frequency of ingridients
	// for (auto i: freqlike)
	// 		cout<<i.first<<"-"<<i.second<<"    ";


	// cout<<endl;

	// for (auto i: freqdisl)
	// 		cout<<i.first<<"-"<<i.second<<"    ";

	// for(auto i:list){
	// 	//if (freqlike[i]/freqdisl[i] > 1)
	// 	//	final.insert(i);
	// 	 if (freqdisl[i] == 0)
	// 	 	final.insert(i);

	// 	 else if ((freqlike[i] - freqdisl[i]) > 1)
	// 	 	final.insert(i);	
	// }

	// cout<<final.size()<<" ";
	// for (auto f:final)
	// 	cout<<f<<" ";

	// cout<<endl;

	// for(auto i:vlike){
	// 	cout<<i.first<<"--"<<i.second<<"   ";
	// }

	// cout<<endl;

	// for(auto i:vdislike){
	// 	cout<<i.first<<"--"<<i.second<<"   ";
	// }


	// for (int x=0; x<i; x++){
	// 	cout<<vlike[x].quan<<" ";
	// 	for (int i=0; i<vlike[x].quan; i++)
	// 		cout<<vlike[x].ingr[i]<<" ";
	// 	cout<<endl;
	// }


	// for (int x=0; x<i; x++){
	// 	cout<<vdislike[x].quan<<"-";
	// 	for (int i=0; i<vdislike[x].quan; i++)
	// 		cout<<vdislike[x].ingr[i]<<" ";

	// 	cout<<endl;
	// }

	for (int x=0; x<customer; x++){
		if (vdislike[x].quan == 0){
			for(auto i:vlike[x].ingr){
				final.insert(i);
			}
		}

		if (vdislike[x].quan == 1) {
			for (auto i:final){           //,j=vlike[x].ingr.begin; i!=vdislike[x].ingr.end() && j!=vlike[x].ingr.end(); i++,j++){
				if (i != vdislike[x].ingr[0]){
					for (auto j:vlike[x].ingr)
						final.insert(j);
				}
			}
		}

		// if (vdislike[x].quan == 2){
		// 	for (auto i:final){
		// 		if (i != vdislike[x].ingr[0] && i != vdislike[x].ingr[1]){
		// 			for (auto j:vlike[x].ingr)
		// 				final.insert(j);
		// 			}
		// 		}
				
		// 	}	
		// if (vdislike[x].quan == 3){
		// 	for (auto i:final){
		// 		if (i != vdislike[x].ingr[0] && i != vdislike[x].ingr[1] && i != vdislike[x].ingr[2]){
		// 			for (auto j:vlike[x].ingr)
		// 				final.insert(j);
		// 			}
		// 		}
				
		// 	}
		// if (vdislike[x].quan == 4){
		// 	for (auto i:final){
		// 		if (i != vdislike[x].ingr[0] && i != vdislike[x].ingr[1] && i != vdislike[x].ingr[2] && i != vdislike[x].ingr[3]){
		// 			for (auto j:vlike[x].ingr)
		// 				final.insert(j);
		// 			}
		// 		}
				
		// 	}	
	}

	cout<<final.size()<<" ";
	for (auto i:final)
		cout<<i<<" ";

	//cout<<simulator(vlike,vdislike,final);

	return 0;
}