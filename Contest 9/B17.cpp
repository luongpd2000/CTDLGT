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
			DFS(i);
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
