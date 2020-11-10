#include<bits/stdc++.h>
using namespace std;

int n;
int s[1000];
int f[1000];

void sapxep(){		// sxep tang dan cua thoi gian ket thuc
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(f[i]>f[j]){
				swap(s[i],s[j]);
				swap(f[i],f[j]);
			}
		}
	}
}

void xuly(){
	int dem=1;
	sapxep();
	int i=0;
	for(int j=1;j<n;j++){		// neeus thowi gian ket thuc nhor hon = tgian bat dau thi tang dem
		if(f[i]<=s[j]){
			dem=dem+1;
			i=j;
		}
	}
	cout<<dem<<endl;
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		for(int i=0;i<n;i++){
			cin>>f[i];
		}
		xuly();
	}
}
