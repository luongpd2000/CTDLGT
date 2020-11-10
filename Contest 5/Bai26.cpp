#include<bits/stdc++.h>

using namespace std;
int dp[25001];

main(){
	int n,c;
	int a[101];
	int sum;
	cin>>c>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	dp[0]=1;
	for(int i=0;i<n;i++){
		for(int j=c;j>=a[i];j--){
			if(dp[j] ==0 && dp[j-a[i]]==1 ) {
				dp[j]=1;
			}
		}
	}
	for(int i=c;i>=0;i--){
		if(dp[i])  {
			cout<<i<<endl;
			return 0;
		}
	}
}
