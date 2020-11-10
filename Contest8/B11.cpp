#include<bits/stdc++.h>

using namespace std;

int d[4]={1,10,100,1000};
int a[10005];
bool nto[10005];

void sangnto(){
	memset(nto,true,sizeof(nto));
	int i,j;
	nto[1]=false;
	
	for(i=2;i<=100;i++){
		if(nto[i]){
			for(j=2;i*j<=10000;nto[i*j++] = false);
		}
	}
}

int tinh(int s,int t){
	queue<int> q;
	int a[10005]={0};
	int i,j,u,v;
	
	if(s==t) return 0;
	
	q.push(s);
	a[s]=1;
	
	while(!q.empty()){
		u=q.front(); 
		q.pop();
		
		for(i=0;i<4;i++){
			for(j=0;j<10;j++){
				
				v= d[i] * ((u/d[i]/10)*10+j)  +u%d[i];
		
				if(v>1000 && nto[v] && a[v]==0){
					q.push(v);
					a[v]=a[u]+1;
					if(v==t) return (a[t]-1);
				}
			}
		}
		
	}
	return -1;
}

main(){
	int test,s,t;
	sangnto();
	cin>>test;
	while(test--){
		cin>>s>>t;
		cout<<tinh(s,t)<<endl;
	}
}
