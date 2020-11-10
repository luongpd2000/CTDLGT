#include<bits/stdc++.h>
using namespace std;
int v;
vector<int> q[1001];
bool chuaxet[1001],check_cycle= false;

void init(){
	for(int i=1;i <= v;i++) chuaxet[i] = true;
}

void DFS_cycle(int h,int k){
	chuaxet[h] = false;
	for(int i=0;i<q[h].size();i++){
		if(chuaxet[q[h][i]]){
			DFS_cycle(q[h][i],h);
		}
		else if(q[h][i] != k) check_cycle = true;
	}
}

bool check_cycle_method(){
	check_cycle = false;
	
	for(int i=1;i <= v;i++){
		init();
		DFS_cycle(i,1);
		if(check_cycle) return true;
	}
	return false;
}

void DFS(int h){
	chuaxet[h] = false;
	for(int i = 0;i<q[h].size();i++){
		if(chuaxet[q[h][i]]){
			DFS(q[h][i]);
		}
	}
}
bool isTree(){
	init();
	DFS(1);
	for(int i=1;i <= v;i++){
		if(chuaxet[i]) return false;
	}
	if(check_cycle_method()) return false;
	
	return true;
}

main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>v;
		
		for(int i = 1;i <= v-1;i++){
			cin>>a>>b;
			
			q[a].push_back(b);
			q[b].push_back(a);
		}
		
		if(isTree()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
		for(int i=1;i<=v;i++){
			q[i].clear();
		} 
	}
}
