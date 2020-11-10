#include<bits/stdc++.h>
using namespace std;
int a[505][505],c[505][505],n,m;

int  tinh(){
	int i,j,kq=1;
	
	memset(c,0,sizeof(c));
	
	c[1][1]=a[1][1];
	for(i=1;i<=n;i++) c[i][1]= c[i-1][1] + a[i][1];
	for(j=1;j<=m;j++) c[1][j]= c[1][j-1] + a[1][j] ;
	
	for(i=2;i<=n;i++)
		for(j=2;j<=m;j++){

			c[i][j]=min(c[i][j-1],min(c[i-1][j-1],c[i-1][j])) + a[i][j];

		}
		
	return c[n][m];		
}
main(){
	int t,i,j;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
				cin>>a[i][j];
		cout<<tinh()<<endl;	
	}
}
