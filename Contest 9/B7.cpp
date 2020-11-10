#include<bits/stdc++.h>

using namespace std;
bool chuaxet[1005];
vector<int> q[1005];

void DFS(int u){
	cout<<u<<" ";
	chuaxet[u]=false;
	
	for(int i=0;i<q[u].size();i++){
		int v=q[u][i];
		if(chuaxet[v]){
			DFS(v);
		}
	}
}

main(){
	int t,m,n,u;
	int x,y;
	cin>>t;
	while(t--){
		cin>>m>>n>>u;	// dinh , canh
		
		memset(chuaxet,true,sizeof(chuaxet));
		int a,b;
		for(int i=1;i<=n;i++){
			cin>>a>>b;
			q[a].push_back(b);
		}
		
		DFS(u);
		cout<<endl;
		for(int i=0;i<=m;i++) q[i].clear();
	}
}
