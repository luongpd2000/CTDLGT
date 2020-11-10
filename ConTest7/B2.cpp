#include<bits/stdc++.h>

using namespace std;
// lifo
main(){
	cin.tie(NULL);
	int t;
	cin>>t;
	stack <int> a;
	while(t--){
		
		string s;
		int n;
		cin>>s;
		if(s=="PUSH"){
			cin>>n;
			a.push(n);
		}
		
		if(s=="POP"){
			if(!a.empty()) a.pop();
		}
		
		if(s=="PRINT"){
			if(a.empty()) cout<<"NONE";
			else{
				cout<<a.top();
			}
			cout<<endl;
		}
	}
}
