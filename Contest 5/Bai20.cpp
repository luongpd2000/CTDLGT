#include<bits/stdc++.h>

using namespace std;	
long long MAX=0,n;
int a[15];

long long qhd(int s){
	
	long long dp[15][15];
	
	for(int i=1;i<=s;i++) {
		dp[1][i]=a[i];
		MAX+=dp[1][i];
	}
	
	for(int i=2;i<=s;i++){		// có dang nua ma tran
		for(int j=i;j<=s;j++){
			dp[i][j] = dp[i-1][j-1]*10 + a[j];
			MAX+=dp[i][j];
		}
	}
	
	return MAX;
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int s=0;
		while(n>0){
			a[++s] = n%10;
			n /= 10;
		}
		for(int i=1;i<=s/2;i++){
			swap(a[i],a[s-i+1]);
		}
		cout<<qhd(s)<<endl;
		MAX = 0;
	}
}
