#include<bits/stdc++.h>
using namespace std;
int a[10005],b[10005];
int x;

bool sosanh(int a,int b){
	return abs(x-a)<abs(x-b);
}

main(){
	int n; 
	int t; 
	cin>>t;
	while(t--){
		cin>>n>>x; 
		for(int i=0;i<n;i++) {
			cin>>a[i]; 
			b[i]=abs(x-a[i]); 
		}
		sort(a,a+n,sosanh);
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	
}
