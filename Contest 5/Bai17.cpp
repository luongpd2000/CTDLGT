#include <bits/stdc++.h>
using namespace std;
int n,a[101],m = 0;

int tong(){
	int t[101] , g[101]; // tong day tang va giam 
	for(int i=1;i<=n;i++){
		t[i] = a[i];
		g[i] = a[i];
	}
	// tinh day tang tu trai sang phai
	for(int i = 2;i<=n;i++){
		for(int j=1;j<i;j++){
			if(a[i] > a[j] && t[i] < t[j]+a[i]){
				t[i] = t[j] + a[i];
			}
		}
	}
	// tinh day tang tu phai sang trai => thanh day giam 
	for(int i=n-1;i>=1;i--){
		for(int j=n;j>i;j--){
			if(a[i] > a[j] && g[i] < g[j]+a[i]){
				g[i] = g[j] + a[i];
			}
		}
	}
	for(int i=1;i<=n;i++){			// tim max cua cac truong hop chia day
		m = max(m,(t[i]+g[i]-a[i]));// so o giua tinh 2 lan
	}
	return m;
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cout<<tong()<<endl;
		m=0;
	}
}
