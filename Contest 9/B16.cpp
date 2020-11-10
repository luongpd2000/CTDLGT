#include<bits/stdc++.h>

using namespace std;
bool chuaxet[1005];
int a[1005][1005];

void maTranKe(int m,int n){
		for(int i=1; i<=m; i++){
            for(int j=1; j<=m; j++){
                a[i][j]=0;
            }
        }
		int x,y;
		while(n--){
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;
		}
		for(int i=1;i<=m;i++){
			chuaxet[i]=true;
		}		
}

void BFS(int u,int m){
	queue<int> q; 
	int v;
	
	q.push(u);
	chuaxet[u]=false;
	
	while(!q.empty()){
		u=q.front();
		q.pop();
		for(v=1;v<=m;v++){
			if(a[u][v] && chuaxet[v]){
				q.push(v);
				chuaxet[v]=false;
			}
		}
	}	
}

main(){
	int T,m,n,s,t;
	cin>>T;
	while(T--){
		cin>>m>>n;	// dinh , canh
		maTranKe(m,n);
		
		int solt=0;
		for(int i=1;i<=m;i++){
			if(chuaxet[i]){
				solt++;
				BFS(i,m);
			}
		}
		cout<<solt<<endl;
	}
}
