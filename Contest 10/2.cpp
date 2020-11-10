#include<bits/stdc++.h>
using namespace std;
int v,e;
bool chuaxet[17];
vector<int> q[17];

bool DFS(int h,int c){
	if(c == v){ // da duyet het cac dinh 
		return true;
	}
	chuaxet[h] = false;
	for(int i = 0;i<q[h].size();i++){ // duyet cac dinh ke cua no 
		int temp = q[h][i];
		if(chuaxet[temp]){
			if(DFS(temp,c+1)){
				return true;
			}
		}
	}
	
	chuaxet[h] = true; // khi ta quay lai thi cac dinh da duoc di qua can tra lai true, vì chi di duoc moi dinh 1 lan
	return false;
}
bool checkHamiltonLine(){
	memset(chuaxet,true,sizeof(chuaxet));
	
	for(int i=1;i <= v;i++){ // duong di co the xuat phat tu bat ki dinh nao cua do thi 
		int c = 1;
		if(DFS(i,c)){
			return true;
		}
	}
	return false;
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
		
		if(checkHamiltonLine()) cout<<1<<endl;
		else cout<<0<<endl;
		
		for(int i=1;i <= 16;i++) q[i].clear();
	}
}
