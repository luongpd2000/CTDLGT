#include<bits/stdc++.h>
using namespace std;
int v,e;
bool chuaxet[1001],check = false;
vector<int> q[1001];

void init(){
	for(int i=1;i <= v;i++){ // duyet cac dinh 
		chuaxet[i] = true;
	}
}

void DFS(int h,int k){
	chuaxet[h] = false;
	for(int i = 0;i < q[h].size(); i++){ // duyet cac dinh ke cua no 
		if(chuaxet[q[h][i]]){
			DFS(q[h][i],h);
		}
		else if(q[h][i] != k) check = true; // neu dinh ke voi dinh dang xet dfs != dinh da xet dfs truoc do thi ton tai chu trinh
	}
}
void chutrinhDFS(){
	bool flag = true;
	check = false;
	
	for(int i = 1;i <= v;i++){ // tim chu trinh co the o tat cac cac dinh, neu gap chu trinh thi break luon
		init();
		DFS(i,1);
		if(check){
			flag = false;
			break;
		}
	}
	
	if(flag) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
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
		
		chutrinhDFS();
		
		for(int i=1;i<=v;i++) q[i].clear();
	}
}
