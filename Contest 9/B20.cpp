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
void BFS(int h){
	queue<int> kq;
	int s;
	kq.push(h);
	chuaxet[h] = false;
	while(!kq.empty()){
		s = kq.front();
		kq.pop();
		
		for(int i=0;i<q[s].size();i++){
			if(chuaxet[q[s][i]]){
				kq.push(q[s][i]);
				chuaxet[q[s][i]] = false;
			}
		}
	}
}
bool check(){
	for(int i=1;i<=v;i++){
		if(chuaxet[i]) return false;
	}
	return true;
}
void dinhtru_BFS(){
	init();
	for(int i=1;i<=v;i++){
		chuaxet[i] = false;
		
		if(i == 1) BFS(2);
		else BFS(1);
		
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
		
		dinhtru_BFS();
		cout<<endl;
		
		for(int i=1;i<=v;i++) q[i].clear();
	}
}
