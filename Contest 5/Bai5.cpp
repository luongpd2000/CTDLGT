#include<bits/stdc++.h>

using namespace std;
int m=1e9 +7;
int c[1001][1001];

void tinh(){
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(j==0 && j==i) c[i][j]=1;
			else 
				c[i][j]=(c[i-1][j] + c[i-1][j-1]) %m;
		}
	}
}

main(){
	int t,n,k;
	cin>>t;
	tinh();
	while(t--){
		cin>>n>>k;
		cout<<c[n][k]<<endl;
	}
}

