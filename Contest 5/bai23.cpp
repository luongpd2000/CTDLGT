#include<bits/stdc++.h>
using namespace std;
int a[1005],c[1005],n;
int tinh(){	// dem so truong hop da thoa man tang dan ròi lay tong so phan tu tru di
	int i,j,kq=1;
	for(int i=1;i<=n;i++){
		c[i]=1;
		for(j=0;j<i;j++)
			if(a[j]<=a[i])
				c[i]=max(c[i],c[j]+1);
		kq=max(kq,c[i]);
	}
	return kq;
}
main(){
	int t,i;
	cin>>t;
	while(t>0){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		cout<<n-tinh()<<endl;
		t--;
	}
}
