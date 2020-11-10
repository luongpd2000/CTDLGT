// neu mot dinh lien ke voi 1 dinh ma dinh lien ke da duoc set lai co parent[v] != u thi ton tai 1 chu trinh trong do thi 
// vi du xet dinh 2 co cac dinh lien ke la 1 3 4 
// dinh 1 da duoc xet va co parent[1] != 2 thi ton tai chu trinh

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
void BFS(int h){
	vector<int> parent(v+1,-1);
	
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
				parent[q[s][i]] = s;
			}
			
			else if(parent[s] != q[s][i]) check = true; // neu cha cua dinh s dang xet khac dinh ke voi no thi ton tai chu trinh
		}
	}
}
void chutrinhBFS(){
	bool flag = true;
	check = false;
	
	for(int i=1;i <= v;i++){
		init();BFS(i);
		
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
		
		chutrinhBFS();
		
		for(int i=1;i <= v;i++) q[i].clear();
	}
}
