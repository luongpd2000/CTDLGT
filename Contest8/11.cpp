#include<bits/stdc++.h>
using namespace std;
int d[4]={1,10,100,1000};

int nto(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int xuly(int S, int T){
	int a[10005]={0};
	queue <int> s; s.push(S); a[S]=1;
	if(S==T) return 0;
	while(!s.empty()){
		int u=s.front(); s.pop();
		for(int i=0;i<4;i++){
			for(int j=0;j<=9;j++){
				int v=d[i]*((u/d[i]/10)*10+j)+u%d[i]; // neu d[i]=10, thay doi o hang tram, nenn chia them 10 roi nhan lai
				if(v>1000&&nto(v)&&a[v]==0){
					s.push(v);
					a[v]=a[u]+1;
					if(v==T) return a[T]-1;
				}
			}
		}
	}
}
main(){
	int t; cin>>t;
	while(t--){
		int s,g; cin>>s>>g;
		cout<<xuly(s,g)<<endl;
	}
}
