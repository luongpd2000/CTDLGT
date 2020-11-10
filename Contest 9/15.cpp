#include<bits/stdc++.h>
using namespace std;
int v,e,STPLT=0;
bool chuaxet[1001];
vector<int> q[1001];

void init(){
	for(int i=1;i <= v;i++){ // duyet cac dinh 
		chuaxet[i] = true;
	}
}
void DFS(int h){
	chuaxet[h] = false;
	for(int i =0;i<q[h].size();i++){ // duyet cac dinh ke cua no 
		if(chuaxet[q[h][i]]){
			DFS(q[h][i]);
		}
	}
}

void BFS(int u){
	queue<int> kq;
	kq.push(u);
	chuaxet[u]=false;
	
	while(!kq.empty()){
		u=kq.front();
		kq.pop();
		
		for(int v=0;v<q[u].size();v++){
			if(chuaxet[q[u][v]]){
				chuaxet[q[u][v]] = false;
				kq.push(q[u][v]);
			}
		}
	}
}
void TPLT_DFS(){
	init();
	for(int i=1;i <= v;i++){ // DINH 1 --- > N 
		if(chuaxet[i]){
			STPLT += 1;
			BFS(i);
		}
	}
}
main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>v>>e;
		
		for(int i=1;i <= e;i++){
			cin>>a>>b;
			q[a].push_back(b);
			q[b].push_back(a);
		}
		
		TPLT_DFS();
		cout<<STPLT<<endl;
		
		for(int i=1;i <= v;i++) q[i].clear();
		STPLT = 0;
	}
}
