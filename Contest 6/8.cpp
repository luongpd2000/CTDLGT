#include<bits/stdc++.h>
using namespace std;
int a[100001],b[100001],m,n;

int count(int x,int d[],int n,int s[]){
	if(x==0) return 0;
	if(x==1) return s[0];
	
	int* idx = upper_bound(d+1, d + n+1, x); 
    int ans = (d + n+1) - idx;	
	ans += (s[0]+s[1]);
	
	if(x == 2) ans -= (s[3]+s[4]);
	if(x == 3) ans += s[2];
	return ans;
}

int in(int c[],int d[],int m1,int n1){
	int s[5]={0};
	for(int i=1;i<=m;i++){
		if(d[i] < 5){
			s[d[i]]++;
		}
	}
	sort(d+1,d+m+1);
	int ans = 0;
	for(int i=1;i<=n;i++){
		ans+=count(c[i],d,m,s);
	}
	return ans;
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=m;i++) cin>>b[i];
		cout<<in(a,b,m,n)<<endl;
	}
}
