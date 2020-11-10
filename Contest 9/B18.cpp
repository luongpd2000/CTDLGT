#include<bits/stdc++.h>
using namespace std;
int v,e,u;
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
main(){
	int t,a,b;
	cin>>t;
	while(t--){
		bool flag = false;
		cin>>v>>e;
		
		for(int i=1;i <= e;i++){
			cin>>a>>b;
			q[a].push_back(b);
		}
		
		for(int i=1;i<=v;i++){
			init();
			BFS(i);
			if(!check()){
				flag = true;
				break;
			}
		}
		
		if(flag) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
		
		for(int i=1;i<=v;i++) q[i].clear();
	}
}
