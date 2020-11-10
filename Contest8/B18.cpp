#include<bits/stdc++.h>
using namespace std;
int a[505][505],day[505][505],R,C,ans;
int dayX[4]={-1,0,1,0};
int dayY[4]={0,1,0,-1};

struct data{
	int x,y;
};
bool check(){
	for(int i=1;i<=R;i++)
	for(int j=1;j<=C;j++)
	if(a[i][j]==1) return false;
	return true;
}
queue <data> qe;

int xuly(){
	while(!qe.empty()){
		data t=qe.front(); qe.pop();
		int u=t.x,v=t.y;
		for(int i=0;i<4;i++){
			int x=u+dayX[i],y=v+dayY[i];
			if(a[x][y]==1){
				a[x][y]=2;
				day[x][y]=day[u][v]+1; 
				qe.push({x,y});
			}
		}

		if(qe.empty()) ans=day[t.x][t.y];
	}
	if(check()) return ans;
	else return -1;
}
main(){
	cin>>R>>C;
	for(int i=1;i<=R;i++) //de chay tu 0 thi bi time
	for(int j=1;j<=C;j++){
		cin>>a[i][j];
		if(a[i][j]==2) {
			qe.push({i,j});
		}
	}
	cout<<xuly();
}
