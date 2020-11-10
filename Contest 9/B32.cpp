#include<bits/stdc++.h>

using namespace std;

typedef pair<int , int > pp;

int t,n,m,res;
int a[505][505];
int dx[]={-1,-1,-1,0,1,1,1,0};
int dy[]={-1,0,1,1,1,0,-1,-1};

bool check(int a,int b){
	if(a<1 || a>n || b<1 || b>m) return false;
	return true;
}

void BFS(pp s){
	queue<pp> q;
	
	q.push(s);
	a[s.first][s.second]=0;
	
	while(!q.empty()){
		pp z=q.front();
		q.pop();
		
		for(int i=0;i<8;i++){
			int x = z.first + dx[i];
			int y = z.second +dy[i];
			
			if(check(x,y) && a[x][y]==1){
				q.push(pp(x,y));
				a[x][y]=0;
			}
		}
	}
}

main(){
	cin>>t;
	while(t--){
		cin.ignore();
		
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++) cin>>a[i][j];
		}
		res=0;
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++) {
				if(a[i][j]){
					res++;
					BFS(pp(i,j));
				}
			}
		}
		
		cout<<res<<endl;
	}
}
