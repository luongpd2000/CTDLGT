#include<bits/stdc++.h>
using namespace std;
int v,e;
bool chuaxet[1001];
vector<int> q[1001];

void init(){
	for(int i=1;i <= v;i++){ // duyet cac dinh 
		chuaxet[i] = true;
	}
}
void DFS(int h){
	chuaxet[h] = false;
	for(int i = 0;i<q[h].size();i++){ // duyet cac dinh ke cua no 
		if(chuaxet[q[h][i]]){
			DFS(q[h][i]);
		}
	}
}
bool check(){
	for(int i=1;i<=v;i++){
		if(chuaxet[i]) return false;
	}
	return true;
}
void dinhtru_DFS(){
	init();
	for(int i=1;i<=v;i++){
		chuaxet[i] = false;
		
		if(i == 1) DFS(2);
		else DFS(1);
		
		if(!check()) cout<<i<<" ";
		init();
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
		
		dinhtru_DFS();
		cout<<endl;
		
		for(int i=1;i<=v;i++) q[i].clear();
	}
}
