#include<bits/stdc++.h>
using namespace std;
bool  chuaxet[100]; 
int V,E,kt,X[100]; 
vector <int> adj[30]; 

void HMT(int u){
	if(kt==1) return;
	for(int i=0 ; i<adj[X[u-1]].size() ; i++){
		if(u==V+1){		// kiem tra dinh cuoi hay chua
			kt=1; 
			break;
		}
		else{ 
			int t = adj[X[u-1]][i];
			if(chuaxet[t]){
				chuaxet[t]=false;
				X[u]=t;
				HMT(u+1);
				chuaxet[t]=true;
			}
		}
	}	
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>V>>E; kt=0;
		
		for(int i=1;i<=30;i++) {
			adj[i].clear();
			chuaxet[i]=true;
		}
		
		for(int i=1;i<=E;i++){
			int x,y;
			cin>>x>>y;
			
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		
		for(int i=1;i<=V;i++){
			X[1]=i; 
			chuaxet[X[1]]=false; 
			HMT(2); 
			if(kt==1){
				cout<<kt<<endl; break;
			} 
			memset(chuaxet,true,sizeof(chuaxet));
		} 
		
		if(kt==0) cout<<kt<<endl; 	
	}
}
