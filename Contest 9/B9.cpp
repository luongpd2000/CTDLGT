#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> q[1005];

void BFS(int u){
	queue<int> kq; 
	int v;
	
	kq.push(u);
	chuaxet[u]=false;
	
	while(!kq.empty()){
		v=kq.front();
		kq.pop();
		cout<<v<<" ";
		
		for(int i=0;i<q[v].size();i++){
			if(chuaxet[q[v][i]]){
				chuaxet[q[v][i]]=false;
				kq.push(q[v][i]);
			}
		}
	}
	
}

main(){
	int t,m,n,u;
	cin>>t;
	while(t--){
		cin>>m>>n>>u;	// dinh , canh
		memset(chuaxet,true,sizeof(chuaxet));
		
		int a,b;
		for(int i=1;i<=n;i++){
			cin>>a>>b;
			q[a].push_back(b);
		}
		
		BFS(u);
		cout<<endl;
		for(int i=0;i<m;i++) q[i].clear();
	}
}
