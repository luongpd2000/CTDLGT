#include<bits/stdc++.h>

using namespace std;
int a[201], L[40001];
int n,s;

int qhd(int a[] ,int n,int s){
	
	memset(L,0,sizeof(L));
	L[0]=1;
	
	for(int i=1;i<=n;i++){
		for(int j=s;j>=0;j--){
			if(L[j]==0 && L[j-a[i]]==1) L[j]=1;
		}
	}
	return L[s];
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>s;
		for(int i=1;i<=n;i++) cin>>a[i];
		if(qhd(a,n,s)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
