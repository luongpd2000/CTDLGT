#include <bits/stdc++.h>
using namespace std;
bool chuaxet[1001];
vector<int> q[1001];
int v,e,u,index = 0;
int trees[10000];

void init(){
	for(int i = 1;i <= v;i++) chuaxet[i] = true;
}

void DFS(int h){
	chuaxet[h] = false;
	
	for(int i=0;i<q[h].size();i++){
		if(chuaxet[q[h][i]]){
			trees[++index] = h;
			trees[++index] = q[h][i];
			DFS(q[h][i]);
		}
	}
}
main(){
	int t,a,b;
	cin>>t;
	while(t--){
		memset(trees,0,sizeof(trees));
		index = 0;
		bool flag = true;
		cin>>v>>e>>u;
		for(int i = 1;i <= e;i++){
			cin>>a>>b;
			
			q[a].push_back(b);
			q[b].push_back(a);
		}
		init();
		DFS(u);
		
		for(int i=1;i <= v;i++){
			if(chuaxet[i]){
				 flag = false;
				 break;
			}
		}
		
		if(!flag) cout<<-1<<endl;
		else{
			for(int i=1;i<= index;i++){
				cout<<trees[i]<<" "<<trees[i+1]<<endl;
				i++;
			}
		}
		
		for(int i=1;i<=v;i++) q[i].clear();
	}
	
}
