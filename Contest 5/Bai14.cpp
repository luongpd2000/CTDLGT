#include<bits/stdc++.h>
using namespace std;
int C[105][105],n; string s;

int find(){
	memset(C,0,sizeof(C)); 
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			
			if(i!=j&&s[i-1]==s[j-1]) C[i][j]=C[i-1][j-1]+1;
			
			else C[i][j]=max(C[i-1][j],C[i][j-1]);
		}
	}
	return C[n][n];
}

main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		cin.ignore();
		cin>>s;
		cout<<find()<<endl;
	}
}
