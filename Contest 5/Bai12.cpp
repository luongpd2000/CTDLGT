#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
int C[1005][1005];

long long giaithua(int n){
	
	long long gt[1000];
	gt[0]=1;gt[1]=1;
	
	for(int i=2;i<=n;i++){
		gt[i]=(i*gt[i-1])%m;
	}
	return gt[n];
}


int find(int n, int k){
	
	for(int i=0;i<=n;i++) C[i][0]=1;
	for(int i=0;i<=n;i++) C[i][i]=1;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			C[i][j]=(C[i-1][j]%m+C[i-1][j-1]%m)%m;
		}
	}
	return (C[n][k]*giaithua(k))%m;
}

main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<find(n,k)<<endl;
	}
}
