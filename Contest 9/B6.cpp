#include <bits/stdc++.h>
using namespace std;
int n,m,v;
vector<int> q[1005];
bool chuaxet[1005];
void DFS(int u){
	cout<<u<<" ";
	chuaxet[u] = false;
	for(int i=0;i<q[u].size();i++){
		int t = q[u][i];
		if(chuaxet[t]){
			DFS(t);
		}
	}
}
main(){
	int t,a,b;
	cin>>t;
	while(t--){
		memset(chuaxet,true,sizeof(chuaxet));
		cin>>n>>m>>v;
		for(int i=1;i <= m;i++){
			cin>>a>>b;
			q[a].push_back(b);
			q[b].push_back(a);
		}
		DFS(v);
		cout<<endl;
		
		for(int i=1;i<=n;i++) q[i].clear();		// kh?i tao lai mang vector
	}
}
