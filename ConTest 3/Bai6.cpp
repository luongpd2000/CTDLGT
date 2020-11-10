#include<bits/stdc++.h>

using namespace std;
int n;
int a[50];

void xuly(){
	int kiemtra=1;
	for(int i=0;i<(n/2);i++){
		if(a[i]>a[n-1-i]){
			swap(a[i],a[n-1-i]);
		}
	}
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			kiemtra=0;
			break;
		}
	}
	if(kiemtra==1) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		xuly();
	}
}
