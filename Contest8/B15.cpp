#include <bits/stdc++.h> 
using namespace std;
int dp[1005][1005]; // luu so bc di
int v[1005][1005]; 	// mang ktra
int arr[1005][1005];	// ma tran
int n,m; 
int minSteps(int i, int j) 
{ 	
	if (i==n-1&&j==m-1) return 0; 
	if (i > n - 1 || j > m - 1) return 9999999; 
	if (v[i][j]) return dp[i][j]; // neu da duoc tinh o buoc truoc thi lay luon kq, ko can tinh nua
    v[i][j]=1;
	dp[i][j] = 1 + min( minSteps(i+arr[i][j],j) , minSteps(i,j+arr[i][j]) ); 
	return dp[i][j]; 
} 
int main() 
{ 
	int t; cin>>t; 
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) {
				cin>>arr[i][j];
				v[i][j] = 0;
			}
		}
		int ans = minSteps(0, 0); 
		if (ans >= 9999999) cout<<-1<<endl; 
		else cout<<ans<<endl; 
	}
	return 0; 
} 

