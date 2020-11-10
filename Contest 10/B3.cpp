#include<bits/stdc++.h>
using namespace std;
int V,E; 
vector <int> adj[1005];  
int color[1005]; 

bool isBipartite(int i){
	color[i]=1;
	queue <int> hi;
	hi.push(i);
	
	while(!hi.empty()){
		int u=hi.front(); 
		hi.pop();
		
		for(int i=0 ; i<adj[u].size() ; i++){
			if(color[adj[u][i]]==-1){		// neu dinh ke mà co mau khac dinh dang xet 
				
				color[adj[u][i]] = 1-color[u];
				hi.push(adj[u][i]);
			}
			else if(color[adj[u][i]]==color[u]){	// neu giong nhau thi loai
				return false;
			}
		}
	}
	return true;
}

bool dothi_haiphia(){
	for(int i=1;i<=V;i++){
		if(color[i]==-1){
			if(isBipartite(i)==false) return false;
		}
	}
	return true;
}

main(){
	int t,a,b; 
	cin>>t;
	while(t--){
		cin>>V>>E;
		
		for(int i=1;i<=V;i++) {
			adj[i].clear();
		}
		
		for(int i=1;i<=E;i++){
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		
		memset(color,-1,sizeof(color)); 
		
		cout<<(dothi_haiphia()?"YES":"NO")<<endl;
	}
}
