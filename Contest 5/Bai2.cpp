#include<bits/stdc++.h>

using namespace std;
int a[1001] , s[1001];
int n;

int qhd(int a[] ,int n){
	int kq=1;
	for(int i=1;i<=n;i++){
		s[i]=1;
		for(int j=0;j<i;j++){
			if(a[j] <a[i])
				s[i]=max(s[i],s[j]+1);
		}
		kq=max(kq,s[i]);
	}
	return kq;
}


main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<qhd(a,n)<<endl;
}

