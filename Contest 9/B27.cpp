#include<bits/stdc++.h>
using namespace std;
int v,e;
int chuaxet[1005];
vector<int> q[1005];
bool check;

void init(){
	for(int i=1;i <= v;i++) chuaxet[i] = 0;
}
void DFS(int h){ 
	chuaxet[h] = 1; // danh dau la da xet 
	for(int i = 0;i < q[h].size();i++){ 
		if(chuaxet[q[h][i]] == 0) DFS(q[h][i]);
		else if(chuaxet[q[h][i]] == 1) check = true; // neu chuaxet == 1 
		// tuc la dinh nay da duoc tham 1 lan trong qua trinh duyet dfs goc h ===> ton tai chu trinh
	}
	chuaxet[h] = 2;// ket thuc qua trinh duyet cay goc h thi cho tat ca cac dinh trong cay con nay cap nhat 2
}
void chutrinh(){
	check = false;
	init();
	
	for(int i=1;i<=v;i++){
		DFS(i);
		
		if(check){
			cout<<"YES"<<endl; 
			return ;
		}
	}
	cout<<"NO"<<endl;
}
main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>v>>e;
		
		for(int i=1;i <= e;i++){
			cin>>a>>b;
			q[a].push_back(b);
		}
		
		chutrinh();
		
		for(int i=1;i<=v;i++) q[i].clear();
	}
}
