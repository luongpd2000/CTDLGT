#include<bits/stdc++.h>

using namespace std;
int a[1001] , c[1001],n,v;
int F[1001][1001];

int qhd(){
	
	for(int i=0;i<=v;i++)
		F[0][i]=0;
		
	for(int i=1;i<=n;i++){
		for(int j=0;j<=v;j++){
			F[i][j]=F[i-1][j];
			if( (a[i]<=j ) && ( F[i][j]<F[i-1][j-a[i]]+c[i] ) ){
				F[i][j] = F[i-1][j-a[i]] +c[i];
			}
		}
	}
	return F[n][v];
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>v;
		
		for(int i=1; i<=n; i++)
            cin>>a[i];
        for(int i=1; i<=n; i++)
            cin>>c[i];
		
		cout<<qhd()<<endl;
	}
}
