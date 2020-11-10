#include <bits/stdc++.h>
using namespace std;
int v,e;

struct Canh{
	int dau,cuoi,trongso;
};

bool isNegCycle(Canh a[],int h,int dist[1001]){
	for(int i=1;i<=v;i++) dist[i] = INT_MAX;
	
	dist[h] = 0;
	
	for(int i=2;i<=v;i++){
		for(int j=1;j<=e;j++){
			int a1 = a[j].dau;
			int a2 = a[j].cuoi;
			int b = a[j].trongso;
			
			if(dist[a1] != INT_MAX && dist[a1] + b < dist[a2]){
				dist[a2] = dist[a1] + b;
			}
		}
	}
	
	for(int i=1;i<=e;i++){
		int a1 = a[i].dau;
		int a2 = a[i].cuoi;
		int b = a[i].trongso;
			
		if(dist[a1] != INT_MAX && dist[a1] + b < dist[a2]){
			return true;
		}
	}
	return false;
}
bool check(Canh *a){
	bool chuaxet[1001];
	memset(chuaxet,true,sizeof(chuaxet));
	
	int dist[1001];
	
	for(int i=1;i<=v;i++){
		if(chuaxet[i]){
			if(isNegCycle(a,i,dist)) return true;
		}
		
		for(int j=1;j<=v;j++){
			if(dist[j] != INT_MAX){ // danh dau cac dinh da xet
				chuaxet[j] = false;
			}
		}
	}
	
	return false;
}
main(){
	int t,a1,b,c;
	cin>>t;
	while(t--){
		cin>>v>>e;
		Canh a[1001];
		
		for(int i=1;i<=e;i++){
			cin>>a[i].dau>>a[i].cuoi>>a[i].trongso;
		}
		
		if(check(a)) cout<<1<<endl;
		else cout<<0<<endl;
	}
}
