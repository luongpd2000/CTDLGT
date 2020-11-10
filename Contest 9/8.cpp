#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005]; int V,E,Max; 
void add_edge(vector <int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void BFS(int u,vector <int> adj[]){
	queue <int> st;
	st.push(u); chuaxet[u]=false;
	while(!st.empty()){
		int t=st.front(); st.pop(); cout<<t<<" ";
		for(int i=0;i<adj[t].size();i++){
			if(chuaxet[adj[t][i]]){
				chuaxet[adj[t][i]]=false; 
				st.push(adj[t][i]);
			}
		}
	}
}
main(){
	int t,V,E,a,b,k; cin>>t;
	while(t--){
		cin>>V>>E>>k;
		vector <int> adj[V+1];
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=1;i<=E;i++){
			cin>>a>>b;
			add_edge(adj,a,b);
		}
		BFS(k,adj);
		cout<<endl;
	}
	
}
