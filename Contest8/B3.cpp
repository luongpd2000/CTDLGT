#include<bits/stdc++.h>

using namespace std;

main(){
	int t;
	deque<int> q;
	cin>>t;
	while(t--){
		string lc;
		cin.ignore();
		cin>>lc;
		if(lc=="PUSHFRONT"){
			int n;
			cin>>n;
			q.push_front(n);
		}
		else if(lc=="PRINTFRONT"){
			if(q.empty()) cout<<"NONE"<<endl;
			else cout<<q.front()<<endl;
		}
		else if(lc=="POPFRONT"){
			if(!q.empty()) q.pop_front();
		}
		else if(lc=="PUSHBACK"){
			int h;
			cin>>h;
			q.push_back(h);
		}
		else if(lc=="PRINTBACK"){
			if(q.empty()) cout<<"NONE"<<endl;
			else cout<<q.back()<<endl;
		}
		else if(lc=="POPBACK"){
			if(!q.empty()) q.pop_back();
		}
	}
}
