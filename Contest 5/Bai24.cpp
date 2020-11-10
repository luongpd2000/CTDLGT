#include<bits/stdc++.h>
using namespace std;
long long c[30][30],n,m;

int  tinh(){
	int i,j;
	
	for(i=0;i<=25;i++) c[i][0]= 1;
	for(j=0;j<=25;j++) c[0][j]= 1 ;
	
	for(i=1;i<=25;i++)
		for(j=1;j<=25;j++){

			c[i][j]= c[i-1][j] + c[i][j-1];  // de bai sai

		}
		
	return c[n][m];		
}
main(){
	int t,i,j;
	cin>>t;
	tinh();
	while(t--){
		cin>>n>>m;
		cout<<c[n][m]<<endl;
	}
}
