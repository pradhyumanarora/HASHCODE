#include <bits/stdc++.h>
using namespace std;

int main(){

//-------------------------------------------------------------//
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
//-------------------------------------------------------------//
	// 	int t;
	// cin>>t;
	
	// while(t--){
	//     int n;
	//     cin>>n;
	//     char str[n];
	//     cin>>str;
	    
	//     map<char,int> freq;
	    
	//     freq['0']=0;
	//     freq['1']=0;

	//     for (int i=0; i<n; i++){
	//         freq[str[i]]++;
	//     }
	    
	//     //cout<<freq['0']<<" "<<freq['1']<<endl;
	    
	//     if (n%2 == 0){
	//         if ((freq['0']%2==0) && (freq['1']%2==0))
	//             cout<<"YES"<<endl;
	//         else 
	//             cout<<"NO"<<endl;
	//     }
	    
	//     else if (n%2 !=0) {
 //            if (((freq['0']%2==0) && (freq['1']%2!=0)) || ((freq['0']%2!=0) && (freq['1']%2==0)))
	//             cout<<"YES"<<endl;
	//         else if (((freq['0']%2==0) && (freq['1']%2==0)) || ((freq['0']%2!=0) && (freq['1']%2!=0)))
	//             cout<<"NO"<<endl;
	// 	}
	// // 	cout<<endl;
	// // 	for (auto i:freq){
	// // 		cout<<i.first<<"-"<<i.second<<"    ";
	// // 	cout<<endl<<endl;
	// // }
 // } 

 // cout<<endl<<(1^1)<<"       "<<(1^0)<<endl;

	// int t;
	// cin>>t;

	// while(t--){
	// 	int n;
	// 	cin>>n;

	// 	int a[n];

	// 	for(int i=0; i<n; i++) cin>>a[i];

	// 	int count=0;
	// 	for (int i=0; i<n; i++){
	// 		int init = i+count+1;
	// 		if (init == a[i]){
	// 			count++;
	// 		}
	// 	}
	// 	cout<<count<<endl;
	// }
		// int n;
		// cin>>n;

		// unsigned long long int a[n];

		// for (int i=0; i<n; i++)	cin>>a[i];

		// for (int i=0; i<n-1; i++){
		// 	for (int j=0; j<n; j++){
		// 		if ((a[j]&a[j+1]) == 0){

		// 		}
		// 	}
		// }

	// int t;
	// cin>>t;

	// while(t--){
	// 	set<int> arr,b;

	// 	int n,m;
	// 	cin>>n>>m;

	// 	int sum=0;

	// 	for (int i=0; i<n; i++){
	// 		int x;
	// 		cin>>x;
	// 		arr.insert(x);
	// 	}



	// int t;
	// cin>>t;

	// while(t--){
	// 	int n,count=0;
	// 	cin>>n;
		
	// 	std::vector<int> v;

	// 	for (int i=0; i<n; i++){
	// 		int x;
	// 		cin>>x;
	// 		v.push_back(x);
	// 	}		

	// 	//sort(v.begin(), v.end());

	// 	for (int i=0; i<n; i++){
	// 		for (int j=n-1; j>1; j--){
	// 			if (v[i] & v[j] == 0){
	// 				continue;
	// 			}
	// 			else {
	// 				if(v[i] > v[j]){
	// 					swap(v[i],v[j]);
	// 					count++;
	// 				}
	// 				else{
	// 					continue;
	// 				}
	// 			}
	// 		}
	// 	}
	// 	if (count != 0){
	// 		cout<<"YES"<<endl;
	// 	}
	// 	else {
	// 		cout<<"NO"<<endl;
	// 	}
	// }

	//}
	return 0;
}