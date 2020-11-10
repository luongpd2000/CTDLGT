#include <bits/stdc++.h>
using namespace std;

bool chuaxet[101],check;
int v,e,u,index = 1,dTree=0;

vector<int> q[101];

struct Canh{
	int canhNho,canhLon,trongso;
};
void init(){
	for(int i = 1;i <= v;i++) chuaxet[i] = true;
}
void DFS(int h,int k){
	chuaxet[h] = false;
	for(int i = 0;i<q[h].size();i++){ 
		if(chuaxet[q[h][i]]){
			DFS(q[h][i],h);
		}
		else if(q[h][i] != k) check = true;
	}
}
bool kiemtra(int canh_nho,int canh_lon){
	q[canh_nho].push_back(canh_lon);
	q[canh_lon].push_back(canh_nho);
	check = false;
	for(int i = 1;i <= v;i++){
		init();
		DFS(i,1);
		if(check){
			for(int i=0;i<q[canh_nho].size();i++){
				if(q[canh_nho][i] == canh_lon){
					q[canh_nho].erase(q[canh_nho].begin() + i);
					break;
				}
			}
			
			for(int i=0;i<q[canh_lon].size();i++){
				if(q[canh_lon][i] == canh_nho){
					q[canh_lon].erase(q[canh_lon].begin() + i);
					break;
				}
			}
			
			return true;
		}
	}
	for(int i=0;i<q[canh_nho].size();i++){
		if(q[canh_nho][i] == canh_lon){
			q[canh_nho].erase(q[canh_nho].begin() + i);
			break;
		}
	}
	for(int i=0;i<q[canh_lon].size();i++){
		if(q[canh_lon][i] == canh_nho){
			q[canh_lon].erase(q[canh_lon].begin() + i);
			break;
		}
	}
	
	return false;
}
int count(){
	int c = 0;
	for(int i=1;i <= v;i++){
		int t = q[i].size();
		c += t;
	}
	return c/2;
}
main(){
	int t,a,b,c;
	cin>>t;
	while(t--){
		index = 1;
		dTree = 0;
		cin>>v>>e;
		Canh a[10001];
		for(int i = 1;i <= e;i++){
			cin>>a[i].canhNho>>a[i].canhLon>>a[i].trongso;
		}
		for(int i=1;i <= e;i++){
			for(int j=i+1;j <= e;j++){
				if(a[i].trongso > a[j].trongso) swap(a[i],a[j]);
			}
		}
			while(count() < v-1 && index <= e){
				if(!kiemtra(a[index].canhNho,a[index].canhLon)){
					dTree += a[index].trongso;
					q[a[index].canhNho].push_back(a[index].canhLon);
					q[a[index].canhLon].push_back(a[index].canhNho);
				}
				index++;
			}
			cout<<dTree<<endl;
		for(int i=1;i <= v;i++) q[i].clear();
	}
}
