#include<bits/stdc++.h>

using namespace std;
bool chuaxet[1005];
int truoc[1005];
vector<int> q[1005];

void DFS(int u){
	chuaxet[u]=false;
	
	for(int v=0;v<q[u].size();v++){
		if(chuaxet[q[u][v]]==true){
			truoc[q[u][v]]=u;
			DFS(q[u][v]);
		}
	}
}

main(){
	int T,m,n,Q;
	cin>>T;
	while(T--){
		cin>>m>>n;	// dinh , canh
		int a,b;
		for(int i=1;i<=n;i++){
			cin>>a>>b;
			q[a].push_back(b);
			q[b].push_back(a);
		}
		
		cin>>Q;
		while(Q--){
			int h,k;
			cin>>h>>k;
			
			memset(chuaxet,true,sizeof(chuaxet));
			memset(truoc,0,sizeof(truoc));
			DFS(h);
			if(truoc[k]==0){
				cout<<"NO";
			}else{
				cout<<"YES";
			}
			cout<<endl;
		}
		for(int i=1;i<=m;i++) q[i].clear();
	}
}
