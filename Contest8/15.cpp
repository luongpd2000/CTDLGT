#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],n,m,F[1001][1001];
int find(){
	F[1][1] = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j+a[i][j] != j && j+a[i][j] >= 1 && j+a[i][j] <= m && F[i][j] != -1){
				if((F[i][j+a[i][j]] != -1 && F[i][j+a[i][j]] > F[i][j] + 1) || F[i][j+a[i][j]] == -1){
					F[i][j+a[i][j]] = F[i][j] + 1;
				}
			}
			if(i+a[i][j] != i && i+a[i][j] >= 1 && i+a[i][j] <= n && F[i][j] != -1){
				if((F[i+a[i][j]][j] != -1 && F[i+a[i][j]][j] > F[i][j] + 1) || F[i+a[i][j]][j] == -1){
					F[i+a[i][j]][j] = F[i][j] + 1;
				}
			}
		}
	}
	
	return F[n][m];
}
main(){
	int t; 
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
				F[i][j] = -1;
			}
		}
		cout<<find()<<endl;
	}
}
