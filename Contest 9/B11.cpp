#include<bits/stdc++.h>

using namespace std;
bool chuaxet[1005];
int truoc[1005];
vector<int> q[1005];

void DFS(int u){
	chuaxet[u]=false;
	
	for(int v=0;v<q[u].size();v++){
		if( chuaxet[q[u][v]]==true){
			truoc[q[u][v]]=u;
			DFS(q[u][v]);
		}
	}
}


main(){
	int T,m,n,s,t;
	cin>>T;
	while(T--){
		cin>>m>>n>>s>>t;	// dinh , canh
		int a,b;
		memset(chuaxet,true,sizeof(chuaxet));
		memset(truoc,0,sizeof(truoc));
		for(int i=1;i<=n;i++){
			cin>>a>>b;
			q[a].push_back(b);
		}
		DFS(s);
		
		if(truoc[t]==0){
			cout<<"-1";
		}else{
			stack<int> kq;
			kq.push(t);
			int j=t;
			while(truoc[j]!=s){
				kq.push(truoc[j]);
				j=truoc[j];
			}
			kq.push(s);
			
			while(!kq.empty()){
				cout<<kq.top()<<" ";
				kq.pop();
			}
		}
		
		cout<<endl;
		for(int i=0;i<m;i++) q[i].clear();
	}
}
