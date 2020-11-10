#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];vector <int> adj[1005];int V,E,truoc[1005]; 
void add_edge(vector <int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void sort_graph(vector <int> adj[]){ 
	for(int i=1;i<=V;i++){
		sort(adj[i].begin(),adj[i].end());
	}	
}
void xuat(int a, int b){
	stack <int> st; 
	st.push(b);
	int u=truoc[b];
	while(u!=a){
		st.push(u);
		u=truoc[u];
	}
	if(u!=a){
		cout<<"-1"<<endl; return;
	}
	st.push(a);
	while(!st.empty()){
		cout<<st.top()<<" "; st.pop();
	}
	cout<<endl;
}
void DFS(int u,vector <int> adj[]){
	stack <int> st;
	st.push(u); chuaxet[u]=false;
	while(!st.empty()){
		int t=st.top(); st.pop();
		for(int i=0;i<adj[t].size();i++){
			if(chuaxet[adj[t][i]]){
				chuaxet[adj[t][i]]=false;
				st.push(t); 
				st.push(adj[t][i]);
				truoc[adj[t][i]]=t;
				break;
			}
		}
	}
}
main(){
	int t,V,E,a,b,k,h; cin>>t;
	while(t--){
		cin>>V>>E>>k>>h;
		for(int i=1;i<=V;i++) {
			adj[i].clear();
			chuaxet[i]=true; // do ham memset nen bi time
			truoc[i]=0;
		}
		for(int i=1;i<=E;i++){
			cin>>a>>b;
			add_edge(adj,a,b);
		}
		sort_graph(adj);
		DFS(k,adj);
		xuat(k,h);
	}
	
}
