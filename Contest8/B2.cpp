#include<bits/stdc++.h>

using namespace std;

main(){
	int t;
	queue<int> q;
	cin>>t;
	while(t--){
		string lc;
		cin.ignore();
		cin>>lc;
		if(lc=="PUSH"){
			int n;
			cin>>n;
			q.push(n);
		}
		else if(lc=="PRINTFRONT"){
			if(q.empty()) cout<<"NONE"<<endl;
			else cout<<q.front()<<endl;
		}
		else if(lc=="POP"){
			if(!q.empty()) q.pop();
		}
	}
}
