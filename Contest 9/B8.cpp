#include<bits/stdc++.h>
using namespace std;
int v,e,u;
bool chuaxet[1001];
vector<int> q[1001];

void BFS(){
	queue<int> kq;
	int s;
	kq.push(u);
	chuaxet[u] = false;
	while(!kq.empty()){
		s = kq.front();
		cout<<s<<" ";
		kq.pop();
		
		for(int i=0;i<q[s].size();i++){
			if(chuaxet[q[s][i]]){
				kq.push(q[s][i]);
				chuaxet[q[s][i]] = false;
			}
		}
	}
}
main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>v>>e>>u;
		
		memset(chuaxet,true,sizeof(chuaxet));
		
		for(int i=1;i <= e;i++){
			cin>>a>>b;
			q[a].push_back(b);
			q[b].push_back(a);
		}
		
		BFS();
		cout<<endl;
		for(int i=1;i<=v;i++) q[i].clear();
	}
}
