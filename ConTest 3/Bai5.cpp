#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[50];

void xuly(){
	int sum1=0 , sum2=0;
	int kq;
	if(k>(n/2)) k=n-k;
	for(int i=0;i<k;i++){
		sum1+=a[i];
	}
	for(int i=k;i<n;i++){
		sum2+=a[i];
	}
	kq=sum2-sum1;
	cout<<kq<<endl;
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		xuly();
	}
}
