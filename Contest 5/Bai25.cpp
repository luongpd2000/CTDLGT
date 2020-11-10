#include<bits/stdc++.h>

using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		long long dp[100001];
		int n;
		
		cin>>n;
		dp[0]=1;
		
		for(int i=1;i<=n;i++){
			dp[i]=0;
			for(int j=i-1 ; (j>=0 ) && (j>=i-3); j--){		// tong cua 3 so trc 
				dp[i]=(dp[i] + dp[j] );
			}
		}
	cout<<dp[n]<<endl;
	}
}
